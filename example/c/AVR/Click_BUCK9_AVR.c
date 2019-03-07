/*
Example for BUCK9 Click

    Date          : dec 2018.
    Author        : Katarina Perendic

Test configuration AVR :
    
    MCU              : ATMEGA32
    Dev. Board       : EasyAVR v7 
    AVR Compiler ver : v7.0.1.0

---

Description :

The application is composed of three sections :

- System Initialization - Sets PWM pin as OUTPUT
- Application Initialization - Initialization driver init and disable device
- Application Task - (code snippet) -  Enable and Disable device every 5000 ms.

- For the test buck 9 click :
  User can connect from 3v3 or 5v to 36V on the input(VIN) and when enable the device get 3v3 or 5v voltage on the output(VOUT).
  On the VOUT connect the load to 3A.

*/

#include "Click_BUCK9_types.h"
#include "Click_BUCK9_config.h"

void systemInit()
{
    mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_PWM_PIN, _GPIO_OUTPUT );
    Delay_100ms();
}

void applicationInit()
{
    buck9_gpioDriverInit( (T_BUCK9_P)&_MIKROBUS1_GPIO );
    buck9_deviceEnable(_BUCK9_DEVICE_DISABLE);
    Delay_100ms();
}

void applicationTask()
{
     buck9_deviceEnable(_BUCK9_DEVICE_ENABLE);
     Delay_ms( 5000 );
     buck9_deviceEnable(_BUCK9_DEVICE_DISABLE);
     Delay_ms( 5000 );
}

void main()
{
    systemInit();
    applicationInit();

    while (1)
    {
        applicationTask();
    }
}