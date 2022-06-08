#include "tdd_buckets.h"

int main(){
    assert(getReadingsFromRange(3,5)==4);
    assert(getReadingsFromRange(4,5)==2);
    assert(getReadingsFromRange(3,4)==3);
    assert(getReadingsFromRange(10,12)==3);
    assert(getReadingsFromRange(3,12)==7);
    assert(getReadingsFromRange(4,12)==5);
    cout<<"All Assertions passed"<<endl;
}
