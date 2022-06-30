#include "tdd_test.h"

void testCode3(){
    void (*printPtr)(vector<int>,vector<int>,vector<int>);
    printPtr = printOnConsole;
    vector<int> seqences = {1146,1265,4562,1366,1457};
    vector<int> current = {3,3,3,4};
    vector<int> result;
    int (*funcptr)(int);
    funcptr = &getCurrentInAmps12bit;

    assert(getCurrentFromSensor(seqences,funcptr) == current);
    result = getCurrentFromSensor(seqences,funcptr);
    printFlag = false;
    vector<int> readings = {4};
    assert(getReadingsFromSequence(result,printPtr) == readings);
    assert(printFlag == true);

    seqences = {0,341,685,900,1023,1024,3452};
    current = {0,1,2,2,2,3,8};
    assert(getCurrentFromSensor(seqences,funcptr) == current);
    result = getCurrentFromSensor(seqences,funcptr);
    printFlag = false;
    readings = {6,1};
    assert(getReadingsFromSequence(result,printPtr) == readings);
    assert(printFlag == true);

    funcptr = &getCurrentInAmps10Bit;
    seqences = {0,511,102,1022};
    current = {15,0,12,15};
    assert(getCurrentFromSensor(seqences,funcptr) == current);
    result = getCurrentFromSensor(seqences,funcptr);
    printFlag = false;
    readings = {1,1,2};
    assert(getReadingsFromSequence(result,printPtr) == readings);
    assert(printFlag == true);

}
int main(){
    testCode();
    testCode2();
    testCode3();
    cout<<"All Assertions passed"<<endl;
}
