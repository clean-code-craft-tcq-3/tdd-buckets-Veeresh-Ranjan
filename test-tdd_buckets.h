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
}
void testCode2(){
    vector<int> seqences = {1146,1265,4562,1366,1457};
    vector<int> result = {3,3,-1,3,4};
    int (*funcptr)(int);
    funcptr = &getCurrentInAmps12bit;
    assert(getCurrentFromSensor(seqences,funcptr) == result);
    seqences = {0,341,685,900,1023,1024,3452};
    result = {0,1,2,2,2,3,8};
    assert(getCurrentFromSensor(seqences,funcptr) == result);
    funcptr = &getCurrentInAmps10Bit;
    seqences = {0,511,102,1022};
    result = {15,0,12,15};
    assert(getCurrentFromSensor(seqences,funcptr) == result);
}
