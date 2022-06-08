#include "iostream"
#include "assert.h"
#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<int> values = {3, 3, 4, 5, 10, 11, 12};
//values.assign({3, 3, 5, 4, 10, 11, 12});
int count1 = 0;
bool flag = false;

void checkAndStartCount(){
    if (flag){
        count1++;
    }
}
void updateCount(int value,int &a, int &b){
    if (value==a){
        flag = true;
    }
    if(value==b){
        count1++;
        flag = false;
    }
    checkAndStartCount();
}

int getReadingsFromRange(int a ,int b){
    count1 = 0;
    for (long long unsigned int i = 0; i<values.size();i++){
        cout<<values[i]<<endl;
        updateCount(values[i],a,b);
    }
    cout<<endl;
    cout<<count1<<endl;
    return count1;
}
