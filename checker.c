#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
bool isTemperatureOutOfRange(float temperature)
{
    if(temperature < 0 || temperature > 45)
    {
        printf("Temperature out of range!\n");
        return false; 
    }
    return true;
}
bool isSocOutOfRange(float soc)
{
    if(soc < 20 || soc > 80) 
    {
        printf("State of Charge out of range!\n");
        return false;
    }
    return true;
}
bool isChargeRateOutOfRange(float chargeRate)
{
    if(chargeRate > 0.8) 
    {
        printf("Charge Rate out of range!\n");
        return false;
    }
    return true;
}
bool batteryIsOk(float temperature, float soc, float chargeRate)
{
    return ((isTemperatureOutOfRange(temperature)) && (isSocOutOfRange(soc)) && (isChargeRateOutOfRange(chargeRate)));
}
int main() 
{
  assert(batteryIsOk(25, 70, 0.7) == true);
  assert(batteryIsOk(50, 85, 0) == false);
}

