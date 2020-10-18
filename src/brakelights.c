//
// Created by Jordan Bettencourt on 10/18/20.
//
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "brakelights.h"
#include "togglelights.h"

int readPressure() {
    return rand() % 1024;
}

void *brakeLightsThread(void *vargp) {
    brakeLightsKeepRunning = true;
    while(brakeLightsKeepRunning) {
        usleep(1000 * 20); // 20 ms sleep
        int pressure = readPressure();
        if(pressure > brakeThreshold)
            toggleBrakeLights(true);
        else
            toggleBrakeLights(false);
    }
    return NULL;
}
