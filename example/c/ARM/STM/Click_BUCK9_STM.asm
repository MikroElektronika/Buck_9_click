_systemInit:
;Click_BUCK9_STM.c,34 :: 		void systemInit()
SUB	SP, SP, #4
STR	LR, [SP, #0]
;Click_BUCK9_STM.c,36 :: 		mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_PWM_PIN, _GPIO_OUTPUT );
MOVS	R2, #0
MOVS	R1, #6
MOVS	R0, #0
BL	_mikrobus_gpioInit+0
;Click_BUCK9_STM.c,37 :: 		Delay_100ms();
BL	_Delay_100ms+0
;Click_BUCK9_STM.c,38 :: 		}
L_end_systemInit:
LDR	LR, [SP, #0]
ADD	SP, SP, #4
BX	LR
; end of _systemInit
_applicationInit:
;Click_BUCK9_STM.c,40 :: 		void applicationInit()
SUB	SP, SP, #4
STR	LR, [SP, #0]
;Click_BUCK9_STM.c,42 :: 		buck9_gpioDriverInit( (T_BUCK9_P)&_MIKROBUS1_GPIO );
MOVW	R0, #lo_addr(__MIKROBUS1_GPIO+0)
MOVT	R0, #hi_addr(__MIKROBUS1_GPIO+0)
BL	_buck9_gpioDriverInit+0
;Click_BUCK9_STM.c,43 :: 		buck9_deviceEnable(_BUCK9_DEVICE_DISABLE);
MOVS	R0, __BUCK9_DEVICE_DISABLE
BL	_buck9_deviceEnable+0
;Click_BUCK9_STM.c,44 :: 		Delay_100ms();
BL	_Delay_100ms+0
;Click_BUCK9_STM.c,45 :: 		}
L_end_applicationInit:
LDR	LR, [SP, #0]
ADD	SP, SP, #4
BX	LR
; end of _applicationInit
_applicationTask:
;Click_BUCK9_STM.c,47 :: 		void applicationTask()
SUB	SP, SP, #4
STR	LR, [SP, #0]
;Click_BUCK9_STM.c,49 :: 		buck9_deviceEnable(_BUCK9_DEVICE_ENABLE);
MOVS	R0, __BUCK9_DEVICE_ENABLE
BL	_buck9_deviceEnable+0
;Click_BUCK9_STM.c,50 :: 		Delay_ms( 5000 );
MOVW	R7, #34559
MOVT	R7, #915
NOP
NOP
L_applicationTask0:
SUBS	R7, R7, #1
BNE	L_applicationTask0
NOP
NOP
NOP
;Click_BUCK9_STM.c,51 :: 		buck9_deviceEnable(_BUCK9_DEVICE_DISABLE);
MOVS	R0, __BUCK9_DEVICE_DISABLE
BL	_buck9_deviceEnable+0
;Click_BUCK9_STM.c,52 :: 		Delay_ms( 5000 );
MOVW	R7, #34559
MOVT	R7, #915
NOP
NOP
L_applicationTask2:
SUBS	R7, R7, #1
BNE	L_applicationTask2
NOP
NOP
NOP
;Click_BUCK9_STM.c,53 :: 		}
L_end_applicationTask:
LDR	LR, [SP, #0]
ADD	SP, SP, #4
BX	LR
; end of _applicationTask
_main:
;Click_BUCK9_STM.c,55 :: 		void main()
;Click_BUCK9_STM.c,57 :: 		systemInit();
BL	_systemInit+0
;Click_BUCK9_STM.c,58 :: 		applicationInit();
BL	_applicationInit+0
;Click_BUCK9_STM.c,60 :: 		while (1)
L_main4:
;Click_BUCK9_STM.c,62 :: 		applicationTask();
BL	_applicationTask+0
;Click_BUCK9_STM.c,63 :: 		}
IT	AL
BAL	L_main4
;Click_BUCK9_STM.c,64 :: 		}
L_end_main:
L__main_end_loop:
B	L__main_end_loop
; end of _main
