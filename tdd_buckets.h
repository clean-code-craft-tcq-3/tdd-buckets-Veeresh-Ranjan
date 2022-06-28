#include "iostream"
#include "sstream"
#include "assert.h"
#include <bits/stdc++.h>
#include <vector>
#include "ADC_Sensing.h"
using namespace std;

bool printFlag = false;

void printOnConsole(string text,int value){
    printFlag = true;
    cout<<text<<value<<endl;
}

void checkThreeToFiveRange(int reading, int &threeToFiveCount){
    vector<int> range1 = {3,4,5};
    vector<int>::iterator itr;
    for(itr = range1.begin();itr<=range1.end();itr++){
        if(reading ==  *itr){
            threeToFiveCount++;
        }
    }
}

void checkTenToTwelveRange(int reading, int &tenToTwelveCount){
    vector<int> range2 = {10,11,12};
    vector<int>::iterator itr;
    for(itr = range2.begin();itr<=range2.end();itr++){
        if(reading ==  *itr){
            tenToTwelveCount++;
        }
    }
}

void getReadingsFromSequence(vector <int> sequence,void (*funcPtr)(string,int),int &threeToFiveCount,int &tenToTwelveCount){
    threeToFiveCount = tenToTwelveCount = 0;
    for (unsigned int i = 0; i<sequence.size(); i++){
        checkThreeToFiveRange(sequence[i],threeToFiveCount);
        checkTenToTwelveRange(sequence[i],tenToTwelveCount);
    }
    funcPtr("3-5, ",threeToFiveCount);
    funcPtr("10-12, ",tenToTwelveCount);
}
