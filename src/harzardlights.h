//
// Created by Jordan Bettencourt on 10/18/20.
//

#ifndef SOLARCAR_HARZARDLIGHTS_H
#define SOLARCAR_HARZARDLIGHTS_H

#include "stdbool.h"

bool harzardLightsKeepRunning;
void *hazardLightsThread(void *vargp);

#endif //SOLARCAR_HARZARDLIGHTS_H
