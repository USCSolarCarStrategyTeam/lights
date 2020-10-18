//
// Created by Jordan Bettencourt on 10/18/20.
//

#ifndef SOLARCAR_FAULTSIGNAL_H
#define SOLARCAR_FAULTSIGNAL_H

#include "stdbool.h"

bool faultSignalKeepRunning;
void *faultSignalThread(void *vargp);

#endif //SOLARCAR_FAULTSIGNAL_H
