//
// Created by Jordan Bettencourt on 10/18/20.
//

#include <zconf.h>
#include <stdlib.h>
#include "headlights.h"
#include "togglelights.h"

int readSwitch() {
    return rand() % 2;
}

void *headlightThread(void *vargp) {
    headlightKeepRunning = true;
    while(headlightKeepRunning) {
        usleep(1000 * 20); // 20 ms sleep
        int on = readSwitch();
        toggleHeadlights(on);
    }
    return NULL;
}