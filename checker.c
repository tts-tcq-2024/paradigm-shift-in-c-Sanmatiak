#include <stdio.h>
int batteryIsOk(float temperature, float soc, float chargeRate) {
    int isTemperatureOk = (temperature >= 0 && temperature <= 45);
    int isSocOk = (soc >= 20 && soc <= 80);
    int isChargeRateOk = (chargeRate <= 0.8);
    
    if (!isTemperatureOk) {
        printf("Temperature out of range!\n");
    }
    if (!isSocOk) {
        printf("State of Charge out of range!\n");
    }
    if (!isChargeRateOk) {
        printf("Charge Rate out of range!\n");
    }

    return (isTemperatureOk && isSocOk && isChargeRateOk);

