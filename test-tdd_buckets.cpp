#include "tdd_buckets.h"

void testCode(){
    void (*funcPtr)(string,int);
    funcPtr = printOnConsole;
    vector<int> sequence1 = {3, 3, 5, 4, 10, 11, 12};
    int threeToFiveCount,tenToTwelveCount;
    printFlag = false;
    getReadingsFromSequence(sequence1,funcPtr,threeToFiveCount,tenToTwelveCount);
    assert(threeToFiveCount == 4);
    assert(tenToTwelveCount == 3);
    assert(printFlag == true);
    printFlag = false;
    sequence1 = {5, 4};
    getReadingsFromSequence(sequence1,funcPtr,threeToFiveCount,tenToTwelveCount);
    assert(threeToFiveCount == 2);
    assert(tenToTwelveCount == 0);
    assert(printFlag == true);
    printFlag = false;
    printFlag = false;
    sequence1 = {12, 11, 10, 10, 11};
    getReadingsFromSequence(sequence1,funcPtr,threeToFiveCount,tenToTwelveCount);
    assert(threeToFiveCount == 0);
    assert(tenToTwelveCount == 5);
    assert(printFlag == true);
    printFlag = false;
    printFlag = false;
    sequence1 = {3, 4, 4, 10, 10, 12};
    getReadingsFromSequence(sequence1,funcPtr,threeToFiveCount,tenToTwelveCount);
    assert(threeToFiveCount == 3);
    assert(tenToTwelveCount == 3);
    assert(printFlag == true);
    printFlag = false;
    printFlag = false;
    sequence1 = {3, 5, 10, 10, 11, 11 ,12};
    getReadingsFromSequence(sequence1,funcPtr,threeToFiveCount,tenToTwelveCount);
    assert(threeToFiveCount == 2);
    assert(tenToTwelveCount == 5);
    assert(printFlag == true);
    printFlag = false;
}

int main(){
    testCode();
    cout<<"All Assertions passed"<<endl;
}
