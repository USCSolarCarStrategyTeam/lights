//
// Created by Jordan Bettencourt on 10/18/20.
//

#ifndef SOLARCAR_TOGGLELIGHTS_H
#define SOLARCAR_TOGGLELIGHTS_H

#include <stdbool.h>

bool frontLeftTurnSignal, frontRightTurnSignal, rearLeftTurnSignal, rearRightTurnSignal, brakeLightLeft, brakeLightRight, leftHeadlight, rightHeadlight, faultSignal;

void toggleBrakeLights(bool on);
void toggleTurnSignalLeft(bool on);
void toggleTurnSignalRight(bool on);
void toggleHazards(bool on);
void toggleHeadlights(bool on);
void toggleFaultSignal(bool on);

#endif //SOLARCAR_TOGGLELIGHTS_H
