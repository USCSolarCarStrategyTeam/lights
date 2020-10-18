//
// Created by Jordan Bettencourt on 10/18/20.
//

#include <stdio.h>
#include "togglelights.h"

void toggleBrakeLights(bool on) {
    if(on) {
        brakeLightLeft = true;
        brakeLightRight = true;
        printf("Brakes on\n");
    } else {
        brakeLightLeft = false;
        brakeLightRight = false;
        printf("Brakes off\n");
    }
}
void toggleTurnSignalLeft(bool on) {
    if(on) {
        frontLeftTurnSignal = true;
        rearLeftTurnSignal = true;
        printf("Left turn signal on\n");
    } else {
        frontLeftTurnSignal = false;
        rearLeftTurnSignal = false;
        printf("Left turn signal off\n");
    }
}

void toggleTurnSignalRight(bool on) {
    if(on) {
        frontRightTurnSignal = true;
        rearRightTurnSignal = true;
        printf("Right turn signal on\n");
    } else {
        frontRightTurnSignal = false;
        rearRightTurnSignal = false;
        printf("Right turn signal off\n");
    }
}

void toggleHazards(bool on) {
    if(on) {
        frontRightTurnSignal = true;
        rearRightTurnSignal = true;
        frontLeftTurnSignal = true;
        rearLeftTurnSignal = true;
        printf("Right turn signal on\n");
    } else {
        frontRightTurnSignal = false;
        rearRightTurnSignal = false;
        frontLeftTurnSignal = false;
        rearLeftTurnSignal = false;
        printf("Right turn signal off\n");
    }
}

void toggleHeadlights(bool on) {
    if(on) {
        leftHeadlight = true;
        rightHeadlight = true;
        printf("Headlights on\n");
    } else {
        leftHeadlight = false;
        rightHeadlight = false;
        printf("Headlights off\n");
    }
}

void toggleFaultSignal(bool on) {
    if(on) {
        faultSignal = true;
        printf("Fault signal on\n");
    } else {
        faultSignal = false;
        printf("Fault signal off\n");
    }
}