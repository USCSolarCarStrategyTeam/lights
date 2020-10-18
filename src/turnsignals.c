//
// Created by Jordan Bettencourt on 10/18/20.
//

#include <unistd.h>
#include <stdlib.h>
#include <time.h>
#include "turnsignals.h"
#include "togglelights.h"

int readTurnSignalLever() {
    return (rand() % 3) - 1;
}

clock_t lastUpdate;
void handleLightToggle() {
    int status = readTurnSignalLever();
    switch(status) {
        case -1:
            if((double)((double)(clock() - lastUpdate) / CLOCKS_PER_SEC) >= turnSignalThreshold) {
                lastUpdate = clock();
                toggleTurnSignalLeft(!frontLeftTurnSignal);
            }
            toggleTurnSignalRight(false);
            break;
        case 0:
            toggleTurnSignalLeft(false);
            toggleTurnSignalRight(false);
            break;
        case 1:
            if((double)((double)(clock() - lastUpdate) / CLOCKS_PER_SEC) >= turnSignalThreshold) {
                lastUpdate = clock();
                toggleTurnSignalRight(!frontRightTurnSignal);
            }
            toggleTurnSignalLeft(false);
            break;
        default: break;
    }
}

void *turnSignalThread(void *vargp) {
    turnSignalKeepRunning = true;
    lastUpdate = clock();
    while(turnSignalKeepRunning) {
        usleep(1000 * 20); // 20 ms sleep
        handleLightToggle();
    }
    return NULL;
}
