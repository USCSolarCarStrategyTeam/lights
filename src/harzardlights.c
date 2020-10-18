//
// Created by Jordan Bettencourt on 10/18/20.
//

#include <zconf.h>
#include <stdlib.h>
#include "togglelights.h"
#include "harzardlights.h"

int readHazardSwitch() {
    return rand() % 2;
}

void *hazardLightsThread(void *vargp) {
    harzardLightsKeepRunning = true;
    while(harzardLightsKeepRunning) {
        usleep(1000 * 20); // 20 ms sleep
        int on = readHazardSwitch();
        toggleHazards(on);
    }
    return NULL;
}