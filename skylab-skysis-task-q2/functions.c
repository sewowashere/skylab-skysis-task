#include <stdbool.h>
#include <stdio.h>

#include "functions.h"


void TVStatusChange(Device *device) {
    device->Status = !device->Status;
    printf("\tTV status changed successfully: %s\n", device->Status ? "ON" : "OFF");
}

void AirCondStatusChange(Device *device) {
    device->Status = !device->Status;
    printf("\tAir conditioner status changed successfully: %s\n", device->Status ? "ON" : "OFF");
}

void RadioStatusChange(Device *device) {
    device->Status = !device->Status;
    printf("\tRadio status changed successfully: %s\n", device->Status ? "ON" : "OFF");
}

void PhoneStatusChange(Device *device) {
    device->Status = !device->Status;
    printf("\tPhone status changed successfully: %s\n", device->Status ? "ON" : "OFF");
}