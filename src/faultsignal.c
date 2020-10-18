//
// Created by Jordan Bettencourt on 10/18/20.
//

#include <zconf.h>
#include <stdlib.h>
#include "togglelights.h"
#include "faultsignal.h"

int readFaultSignal() {
    return rand() % 2;
}

void *faultSignalThread(void *vargp) {
    faultSignalKeepRunning = true;
    while(faultSignalKeepRunning) {
        usleep(1000 * 20); // 20 ms sleep
        int on = readFaultSignal();
        toggleFaultSignal(on);
    }
    return NULL;
}
