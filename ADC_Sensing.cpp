#include "ADC_Sensing.h"

bool isSensorValueValid12Bit(int sensorValue){
    if(sensorValue >= LOWER_LIMIT_OF_12BIT_SENOSOR && sensorValue < UPPER_LIMIT_OF_12BIT_SENOSOR)
        return true;
    else
        return false;
}
bool isSensorValueValid10Bit(int sensorValue){
    if(sensorValue >= LOWER_LIMIT_OF_10BIT_SENOSOR && sensorValue < UPPER_LIMIT_OF_10BIT_SENOSOR)
        return true;
    else
        return false;
}
int getCurrentInAmps12bit(int sensorValue){
    if(isSensorValueValid12Bit(sensorValue)){
        int currentInAmps;
        currentInAmps = round(10 * float(sensorValue) / 4094);
        return currentInAmps;
    }
    return ERROR;
}
int getCurrentInAmps10Bit(int sensorValue){
    if(isSensorValueValid10Bit(sensorValue)){
        int currentInAmps;
        currentInAmps = abs(round(15 * (float(sensorValue-511) / 511)));
        return currentInAmps;
    }
    return ERROR;
}

vector<int> getCurrentFromSensor(vector<int> sequences,int (*funcptr)(int)){
    vector<int> currentInAmps;
    vector<int>::iterator itr;
    for(itr = sequences.begin();itr<sequences.end();itr++){
        currentInAmps.push_back(funcptr(*itr));
    }
    return currentInAmps;
}
