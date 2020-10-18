#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include "brakelights.h"
#include "unistd.h"
#include "turnsignals.h"
#include "headlights.h"
#include "faultsignal.h"
#include "harzardlights.h"

int main(){
    // Initialize stuff
    brakeThreshold = 49;
    turnSignalThreshold = 1.5;

    // Start threads
    pthread_t brakelight_thread_id;
    printf("Starting Brake Lights Thread\n");
    pthread_create(&brakelight_thread_id, NULL, brakeLightsThread, NULL);

    pthread_t turnSignal_thread_id;
    printf("Starting Turn Signal Thread\n");
    pthread_create(&turnSignal_thread_id, NULL, turnSignalThread, NULL);

    pthread_t headlight_thread_id;
    printf("Starting Headlight Thread\n");
    pthread_create(&headlight_thread_id, NULL, headlightThread, NULL);

    pthread_t faultsignal_thread_id;
    printf("Starting Fault Signal Thread\n");
    pthread_create(&faultsignal_thread_id, NULL, faultSignalThread, NULL);

    pthread_t hazardlights_thread_id;
    printf("Starting Hazard Lights Thread\n");
    pthread_create(&hazardlights_thread_id, NULL, hazardLightsThread, NULL);

    // Shutdown threads
    sleep(1);
    brakeLightsKeepRunning = false;
    turnSignalKeepRunning = false;
    headlightKeepRunning = false;
    faultSignalKeepRunning = false;
    harzardLightsKeepRunning = false;

    // Join the threads to ensure they return before we terminate the process.
    pthread_join(brakelight_thread_id, NULL);
    pthread_join(turnSignal_thread_id, NULL);
    pthread_join(headlight_thread_id, NULL);
    pthread_join(faultsignal_thread_id, NULL);
    pthread_join(hazardlights_thread_id, NULL);

    // Conclude
    printf("All Threads Stopped\n");
    exit(0);
}
