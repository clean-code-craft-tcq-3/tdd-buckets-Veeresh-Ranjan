#include "test-tdd_buckets.h"

void testCode3(){
    void (*printPtr)(string,int);
    printPtr = printOnConsole;
    vector<int> seqences = {1146,1265,4562,1366,1457};
    vector<int> current = {3,3,-1,3,4};
    vector<int> result;
    int (*funcptr)(int);
    funcptr = &getCurrentInAmps12bit;

    assert(getCurrentFromSensor(seqences,funcptr) == current);
    result = getCurrentFromSensor(seqences,funcptr);
    int threeToFiveCount,tenToTwelveCount;
    printFlag = false;
    getReadingsFromSequence(result,printPtr,threeToFiveCount,tenToTwelveCount);
    assert(threeToFiveCount == 4);
    assert(tenToTwelveCount == 0);
    assert(printFlag == true);

    seqences = {0,341,685,900,1023,1024,3452};
    current = {0,1,2,2,2,3,8};
    assert(getCurrentFromSensor(seqences,funcptr) == current);
    result = getCurrentFromSensor(seqences,funcptr);
    printFlag = false;
    getReadingsFromSequence(result,printPtr,threeToFiveCount,tenToTwelveCount);
    assert(threeToFiveCount == 1);
    assert(tenToTwelveCount == 0);
    assert(printFlag == true);

    funcptr = &getCurrentInAmps10Bit;
    seqences = {0,511,102,1022};
    current = {15,0,12,15};
    assert(getCurrentFromSensor(seqences,funcptr) == current);
    result = getCurrentFromSensor(seqences,funcptr);
    printFlag = false;
    getReadingsFromSequence(result,printPtr,threeToFiveCount,tenToTwelveCount);
    assert(threeToFiveCount == 0);
    assert(tenToTwelveCount == 1);
    assert(printFlag == true);

}
int main(){
    testCode();
    testCode2();
    testCode3();
    cout<<"All Assertions passed"<<endl;
}
