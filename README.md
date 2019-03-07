![MikroE](http://www.mikroe.com/img/designs/beta/logo_small.png)

---

# BUCK9 Click

- **CIC Prefix**  : BUCK9
- **Author**      : Katarina Perendic
- **Verison**     : 1.0.0
- **Date**        : dec 2018.

---

### Software Support

We provide a library for the BUCK9 Click on our [LibStock](https://libstock.mikroe.com/projects/view/2687/buck-9-click) 
page, as well as a demo application (example), developed using MikroElektronika 
[compilers](http://shop.mikroe.com/compilers). The demo can run on all the main 
MikroElektronika [development boards](http://shop.mikroe.com/development-boards).

**Library Description**

Library carries functions related to GPIO pins control of the Buck 9 click board. 
The library includes function for enable or disable device.

Key functions :

- ``` void buck9_deviceEnable(uint8_t state) ``` - Function for enable or disable device

**Examples Description**

The application is composed of three sections :

- System Initialization - Sets PWM pin as OUTPUT
- Application Initialization - Initialization driver init and disable device
- Application Task - (code snippet) -  Enable and Disable device every 5000 ms.

- For the test buck 9 click :
  User can connect from 3v3 or 5v to 36V on the input(VIN) and when enable the device get 3v3 or 5v voltage on the output(VOUT).
  On the VOUT connect the load to 3A.


```.c
void applicationTask()
{
     buck9_deviceEnable(_BUCK9_DEVICE_ENABLE);
     Delay_ms( 5000 );
     buck9_deviceEnable(_BUCK9_DEVICE_DISABLE);
     Delay_ms( 5000 );
}
```

The full application code, and ready to use projects can be found on our 
[LibStock](https://libstock.mikroe.com/projects/view/2687/buck-9-click) page.

Other mikroE Libraries used in the example:

- GPIO

**Additional notes and informations**

Depending on the development board you are using, you may need 
[USB UART click](http://shop.mikroe.com/usb-uart-click), 
[USB UART 2 Click](http://shop.mikroe.com/usb-uart-2-click) or 
[RS232 Click](http://shop.mikroe.com/rs232-click) to connect to your PC, for 
development systems with no UART to USB interface available on the board. The 
terminal available in all Mikroelektronika 
[compilers](http://shop.mikroe.com/compilers), or any other terminal application 
of your choice, can be used to read the message.

---
---
