//
// Created by Jordan Bettencourt on 10/18/20.
//

#ifndef SOLARCAR_BRAKELIGHTS_H
#define SOLARCAR_BRAKELIGHTS_H
#include "stdbool.h"

bool brakeLightsKeepRunning;
int brakeThreshold;
void *brakeLightsThread(void *vargp);

#endif //SOLARCAR_BRAKELIGHTS_H
