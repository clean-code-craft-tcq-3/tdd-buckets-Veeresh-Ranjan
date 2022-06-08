#include "iostream"
#include "assert.h"
#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<int> values = {3, 3, 4, 5, 10, 11, 12};
//values.assign({3, 3, 5, 4, 10, 11, 12});
int count1 = 0;
bool flag = false;

updateCount(int value,int &a, int &b){
    if (value==a){
        flag = true;
    }
    if(value==b){
        count1++;
        flag = false;
    }
    if (flag){
        count1++;
    }
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

int main(){
    assert(getReadingsFromRange(3,5)==4);
    assert(getReadingsFromRange(4,5)==2);
    assert(getReadingsFromRange(3,4)==3);
    assert(getReadingsFromRange(10,12)==3);
    assert(getReadingsFromRange(3,12)==7);
    assert(getReadingsFromRange(4,12)==5);
    cout<<"All Assertions passed"<<endl;
}
