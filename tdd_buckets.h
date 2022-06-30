#include "iostream"
#include "sstream"
#include "assert.h"
#include <bits/stdc++.h>
#include <vector>
#include "ADC_Sensing.h"

bool printFlag = false;

void printOnConsole(vector<int> rangeBegin,vector<int> rangeEnd,vector<int> arrayOfCounts){
    printFlag = true;
    for (unsigned int i = 0; i<rangeBegin.size(); i++){
        cout<<rangeBegin[i]<<"-"<<rangeEnd[i]<<", "<<arrayOfCounts[i]<<endl;
    }
}

bool checkIfConsec(int value1 , int value2){
    if ((value2 - value1) == 1 || value2 == value1){
        return true;
    }
    return false;
}

void checkNewRange(vector<int> &rangeBegin, int nextSample, int endSample){
    if(nextSample != endSample){
        rangeBegin.push_back(nextSample);
    }
}

vector<int> getReadingsFromSequence(vector <int> sequence,void (*printPtr)(vector<int>,vector<int>,vector<int>)){
    sort(sequence.begin(),sequence.end());
    vector<int> rangeBegin, rangeEnd, arrayOfCounts;
    int count;
    rangeBegin.push_back(sequence[0]);
    for (unsigned int i = 0; i<sequence.size(); i++){
        count++;
        if(!checkIfConsec(sequence[i],sequence[i+1])){
            arrayOfCounts.push_back(count);
            count = 0;
            rangeEnd.push_back(sequence[i]);
            checkNewRange(rangeBegin,sequence[i+1],*sequence.end());
        }
    }
    printPtr(rangeBegin,rangeEnd,arrayOfCounts);
    return arrayOfCounts;
}
