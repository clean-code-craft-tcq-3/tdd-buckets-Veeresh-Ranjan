#include<iostream>
#include<vector>
#include<cmath>
#include<assert.h>
using namespace std;

#define ERROR -1
#define LOWER_LIMIT_OF_12BIT_SENOSOR 0
#define UPPER_LIMIT_OF_12BIT_SENOSOR 4095
#define LOWER_LIMIT_OF_10BIT_SENOSOR 0
#define UPPER_LIMIT_OF_10BIT_SENOSOR 1023

bool isSensorValueValid12Bit(int);

bool isSensorValueValid10Bit(int);

int getCurrentInAmps12bit(int );

int getCurrentInAmps10Bit(int);

vector<int> getCurrentFromSensor(vector<int>,int (*)(int));

