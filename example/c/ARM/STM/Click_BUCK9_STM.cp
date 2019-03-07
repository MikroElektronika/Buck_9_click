#line 1 "D:/Clicks_git/B/Buck_9_click/SW/example/c/ARM/STM/Click_BUCK9_STM.c"
#line 1 "d:/clicks_git/b/buck_9_click/sw/example/c/arm/stm/click_buck9_types.h"
#line 1 "c:/users/public/documents/mikroelektronika/mikroc pro for arm/include/stdint.h"





typedef signed char int8_t;
typedef signed int int16_t;
typedef signed long int int32_t;
typedef signed long long int64_t;


typedef unsigned char uint8_t;
typedef unsigned int uint16_t;
typedef unsigned long int uint32_t;
typedef unsigned long long uint64_t;


typedef signed char int_least8_t;
typedef signed int int_least16_t;
typedef signed long int int_least32_t;
typedef signed long long int_least64_t;


typedef unsigned char uint_least8_t;
typedef unsigned int uint_least16_t;
typedef unsigned long int uint_least32_t;
typedef unsigned long long uint_least64_t;



typedef signed long int int_fast8_t;
typedef signed long int int_fast16_t;
typedef signed long int int_fast32_t;
typedef signed long long int_fast64_t;


typedef unsigned long int uint_fast8_t;
typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long long uint_fast64_t;


typedef signed long int intptr_t;
typedef unsigned long int uintptr_t;


typedef signed long long intmax_t;
typedef unsigned long long uintmax_t;
#line 1 "d:/clicks_git/b/buck_9_click/sw/example/c/arm/stm/click_buck9_config.h"
#line 1 "d:/clicks_git/b/buck_9_click/sw/example/c/arm/stm/click_buck9_types.h"
#line 1 "d:/clicks_git/b/buck_9_click/sw/library/__buck9_driver.h"
#line 1 "c:/users/public/documents/mikroelektronika/mikroc pro for arm/include/stdint.h"
#line 57 "d:/clicks_git/b/buck_9_click/sw/library/__buck9_driver.h"
extern const uint8_t _BUCK9_DEVICE_ENABLE ;
extern const uint8_t _BUCK9_DEVICE_DISABLE ;
#line 78 "d:/clicks_git/b/buck_9_click/sw/library/__buck9_driver.h"
void buck9_gpioDriverInit( const uint8_t*  gpioObj);
#line 89 "d:/clicks_git/b/buck_9_click/sw/library/__buck9_driver.h"
void buck9_deviceEnable(uint8_t state);
#line 34 "D:/Clicks_git/B/Buck_9_click/SW/example/c/ARM/STM/Click_BUCK9_STM.c"
void systemInit()
{
 mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_PWM_PIN, _GPIO_OUTPUT );
 Delay_100ms();
}

void applicationInit()
{
 buck9_gpioDriverInit( ( const uint8_t* )&_MIKROBUS1_GPIO );
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
