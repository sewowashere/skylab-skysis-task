#include <stdbool.h>
#include <stdio.h>

#include "functions.h"


int main() {
    Device SevvalsTV = {false, TVStatusChange};
    Device SevvalsRadio = {true, RadioStatusChange};
    Device SevvalsAirConditioner = {false, AirCondStatusChange};
    Device SevvalsPhone = {true, PhoneStatusChange};

    printf("\n\t\tDevice Status:\n");
    printf("TV: %s\n", SevvalsTV.Status ? "ON" : "OFF");
    printf("Radio: %s\n", SevvalsRadio.Status ? "ON" : "OFF");
    printf("Air Conditioner: %s\n", SevvalsAirConditioner.Status ? "ON" : "OFF");
    printf("Phone: %s\n", SevvalsPhone.Status ? "ON" : "OFF");


    printf("\n\tStatus changing...\n\n");
    SevvalsTV.StatusChange(&SevvalsTV);
    SevvalsRadio.StatusChange(&SevvalsRadio);
    SevvalsAirConditioner.StatusChange(&SevvalsAirConditioner);
    SevvalsPhone.StatusChange(&SevvalsPhone);

    
    printf("\n\n\t\tUpdated Status:\n");
    printf("TV: %s\n", SevvalsTV.Status ? "ON" : "OFF");
    printf("Radio: %s\n", SevvalsRadio.Status ? "ON" : "OFF");
    printf("Air Conditioner: %s\n", SevvalsAirConditioner.Status ? "ON" : "OFF");
    printf("Phone: %s\n", SevvalsPhone.Status ? "ON" : "OFF");


    return 0;
}