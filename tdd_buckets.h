#include "iostream"
#include "assert.h"
#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<int> values = {3, 3, 4, 5, 10, 11, 12};

int count1 = 0;
bool flag = false;

void checkAndCountUp(){
    if (flag){
        count1++;
    }
}
void checkAndStopCount(int value,int &b){
    if(value==b){
        count1++;
        flag = false;
    }
}
void checkAndCount(int value,int &a, int &b){
    if (value==a){
        flag = true;
    }
    checkAndStopCount(value,b);
    checkAndCountUp();
}

int getReadingsFromRange(int a ,int b){
    count1 = 0;
    for (long long unsigned int i = 0; i<values.size();i++){
        checkAndCount(values[i],a,b);
    }
    cout<<"Count = "<<count1<<endl;
    return count1;
}
