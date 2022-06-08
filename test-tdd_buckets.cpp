#include "iostream"
#include "assert.h"
#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<int> values = {3, 3, 4, 5, 10, 11, 12};
//values.assign({3, 3, 5, 4, 10, 11, 12});


int getReadingsFromRange(int a ,int b){
    int count = 0;
    bool flag = 0;
    for (long long unsigned int i = 0; i<values.size();i++){
        cout<<values[i]<<endl;
        if (values[i]==a){
            flag = true;
        }
        if(values[i]==b){
            count++;
            flag = false;
            break;
        }
        if (flag){
            count++;
        }
    }
    cout<<endl;
    cout<<count<<endl;
    return count;
}

int main(){
    assert(getReadingsFromRange(3,5)==4);
    assert(getReadingsFromRange(3,4)==3);
    assert(getReadingsFromRange(10,12)==3);
    assert(getReadingsFromRange(3,12)==7);
    assert(getReadingsFromRange(4,12)==5);
    cout<<"All Assertions passed"<<endl;
}
