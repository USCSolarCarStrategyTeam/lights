//
// Created by Jordan Bettencourt on 10/18/20.
//

#ifndef SOLARCAR_HEADLIGHTS_H
#define SOLARCAR_HEADLIGHTS_H

#include "stdbool.h"

bool headlightKeepRunning;
void *headlightThread(void *vargp);

#endif //SOLARCAR_HEADLIGHTS_H
