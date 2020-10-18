//
// Created by Jordan Bettencourt on 10/18/20.
//

#ifndef SOLARCAR_TURNSIGNALS_H
#define SOLARCAR_TURNSIGNALS_H

#include "stdbool.h"

bool turnSignalKeepRunning;
double turnSignalThreshold; // in seconds i.e. 1.5 = 1.5 seconds = 1.5Hz
void *turnSignalThread(void *vargp);

#endif //SOLARCAR_TURNSIGNALS_H
