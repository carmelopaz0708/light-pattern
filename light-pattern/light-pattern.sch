EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A 11000 8500
encoding utf-8
Sheet 1 1
Title "light-pattern"
Date "2021-09-22"
Rev "1.0.1"
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L MCU_Module:Arduino_UNO_R2 Arduino_UNO_R2
U 1 1 614A8BA5
P 2300 3200
F 0 "Arduino_UNO_R2" V 2300 3200 50  0000 C CNN
F 1 "Arduino_UNO_R2" H 2300 4289 50  0001 C CNN
F 2 "Module:Arduino_UNO_R2" H 2300 3200 50  0001 C CIN
F 3 "https://www.arduino.cc/en/Main/arduinoBoardUno" H 2300 3200 50  0001 C CNN
	1    2300 3200
	1    0    0    -1  
$EndComp
$Comp
L Device:LED led4
U 1 1 614B8A7F
P 2850 5700
F 0 "led4" H 2850 5800 50  0000 C CNN
F 1 "BLU" H 2850 5600 50  0000 C CNN
F 2 "" H 2850 5700 50  0001 C CNN
F 3 "~" H 2850 5700 50  0001 C CNN
	1    2850 5700
	0    -1   -1   0   
$EndComp
$Comp
L Device:LED led5
U 1 1 614B8A89
P 3250 5700
F 0 "led5" H 3250 5800 50  0000 C CNN
F 1 "ORA" H 3250 5600 50  0000 C CNN
F 2 "" H 3250 5700 50  0001 C CNN
F 3 "~" H 3250 5700 50  0001 C CNN
	1    3250 5700
	0    -1   -1   0   
$EndComp
$Comp
L power:GND #PWR01
U 1 1 614C46D8
P 1650 6350
F 0 "#PWR01" H 1650 6100 50  0001 C CNN
F 1 "GND" H 1655 6177 50  0000 C CNN
F 2 "" H 1650 6350 50  0001 C CNN
F 3 "" H 1650 6350 50  0001 C CNN
	1    1650 6350
	1    0    0    -1  
$EndComp
$Comp
L Device:R_Small_US R1
U 1 1 614CECA3
P 1650 6100
F 0 "R1" V 1550 6050 50  0000 L CNN
F 1 "1K" V 1750 6050 50  0000 L CNN
F 2 "" H 1650 6100 50  0001 C CNN
F 3 "~" H 1650 6100 50  0001 C CNN
	1    1650 6100
	1    0    0    -1  
$EndComp
$Comp
L Device:R_Small_US R2
U 1 1 614D3FFB
P 2050 6100
F 0 "R2" V 1950 6050 50  0000 L CNN
F 1 "220" V 2150 6050 50  0000 L CNN
F 2 "" H 2050 6100 50  0001 C CNN
F 3 "~" H 2050 6100 50  0001 C CNN
	1    2050 6100
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR03
U 1 1 614D4B57
P 2050 6350
F 0 "#PWR03" H 2050 6100 50  0001 C CNN
F 1 "GND" H 2055 6177 50  0000 C CNN
F 2 "" H 2050 6350 50  0001 C CNN
F 3 "" H 2050 6350 50  0001 C CNN
	1    2050 6350
	1    0    0    -1  
$EndComp
$Comp
L Device:R_Small_US R3
U 1 1 614D7B98
P 2450 6100
F 0 "R3" V 2350 6050 50  0000 L CNN
F 1 "220" V 2550 6050 50  0000 L CNN
F 2 "" H 2450 6100 50  0001 C CNN
F 3 "~" H 2450 6100 50  0001 C CNN
	1    2450 6100
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR06
U 1 1 614D7EEE
P 2450 6350
F 0 "#PWR06" H 2450 6100 50  0001 C CNN
F 1 "GND" H 2455 6177 50  0000 C CNN
F 2 "" H 2450 6350 50  0001 C CNN
F 3 "" H 2450 6350 50  0001 C CNN
	1    2450 6350
	1    0    0    -1  
$EndComp
$Comp
L Device:R_Small_US R4
U 1 1 614D8EA4
P 2850 6100
F 0 "R4" V 2750 6050 50  0000 L CNN
F 1 "10K" V 2950 6050 50  0000 L CNN
F 2 "" H 2850 6100 50  0001 C CNN
F 3 "~" H 2850 6100 50  0001 C CNN
	1    2850 6100
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR08
U 1 1 614D919C
P 2850 6350
F 0 "#PWR08" H 2850 6100 50  0001 C CNN
F 1 "GND" H 2855 6177 50  0000 C CNN
F 2 "" H 2850 6350 50  0001 C CNN
F 3 "" H 2850 6350 50  0001 C CNN
	1    2850 6350
	1    0    0    -1  
$EndComp
$Comp
L Device:R_Small_US R5
U 1 1 614DFFBF
P 3250 6100
F 0 "R5" V 3150 6050 50  0000 L CNN
F 1 "330" V 3350 6050 50  0000 L CNN
F 2 "" H 3250 6100 50  0001 C CNN
F 3 "~" H 3250 6100 50  0001 C CNN
	1    3250 6100
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR09
U 1 1 614E1AFC
P 3250 6350
F 0 "#PWR09" H 3250 6100 50  0001 C CNN
F 1 "GND" H 3255 6177 50  0000 C CNN
F 2 "" H 3250 6350 50  0001 C CNN
F 3 "" H 3250 6350 50  0001 C CNN
	1    3250 6350
	1    0    0    -1  
$EndComp
$Comp
L Device:LED led6
U 1 1 614E1F51
P 3650 5700
F 0 "led6" H 3650 5800 50  0000 C CNN
F 1 "BLU" H 3650 5600 50  0000 C CNN
F 2 "" H 3650 5700 50  0001 C CNN
F 3 "~" H 3650 5700 50  0001 C CNN
	1    3650 5700
	0    -1   -1   0   
$EndComp
$Comp
L Device:R_Small_US R6
U 1 1 614E1F5B
P 3650 6100
F 0 "R6" V 3550 6050 50  0000 L CNN
F 1 "10K" V 3750 6050 50  0000 L CNN
F 2 "" H 3650 6100 50  0001 C CNN
F 3 "~" H 3650 6100 50  0001 C CNN
	1    3650 6100
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR011
U 1 1 614E1F65
P 3650 6350
F 0 "#PWR011" H 3650 6100 50  0001 C CNN
F 1 "GND" H 3655 6177 50  0000 C CNN
F 2 "" H 3650 6350 50  0001 C CNN
F 3 "" H 3650 6350 50  0001 C CNN
	1    3650 6350
	1    0    0    -1  
$EndComp
$Comp
L Device:LED led7
U 1 1 614EE748
P 4050 5700
F 0 "led7" H 4050 5800 50  0000 C CNN
F 1 "GRN" H 4050 5600 50  0000 C CNN
F 2 "" H 4050 5700 50  0001 C CNN
F 3 "~" H 4050 5700 50  0001 C CNN
	1    4050 5700
	0    -1   -1   0   
$EndComp
$Comp
L Device:LED led8
U 1 1 614EE752
P 4450 5700
F 0 "led8" H 4450 5800 50  0000 C CNN
F 1 "YLW" H 4450 5600 50  0000 C CNN
F 2 "" H 4450 5700 50  0001 C CNN
F 3 "~" H 4450 5700 50  0001 C CNN
	1    4450 5700
	0    -1   -1   0   
$EndComp
$Comp
L Device:R_Small_US R7
U 1 1 614EE75C
P 4050 6100
F 0 "R7" V 3950 6050 50  0000 L CNN
F 1 "220" V 4150 6050 50  0000 L CNN
F 2 "" H 4050 6100 50  0001 C CNN
F 3 "~" H 4050 6100 50  0001 C CNN
	1    4050 6100
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR013
U 1 1 614EE766
P 4050 6350
F 0 "#PWR013" H 4050 6100 50  0001 C CNN
F 1 "GND" H 4055 6177 50  0000 C CNN
F 2 "" H 4050 6350 50  0001 C CNN
F 3 "" H 4050 6350 50  0001 C CNN
	1    4050 6350
	1    0    0    -1  
$EndComp
$Comp
L Device:R_Small_US R8
U 1 1 614EE770
P 4450 6100
F 0 "R8" V 4350 6050 50  0000 L CNN
F 1 "220" V 4550 6050 50  0000 L CNN
F 2 "" H 4450 6100 50  0001 C CNN
F 3 "~" H 4450 6100 50  0001 C CNN
	1    4450 6100
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR015
U 1 1 614EE77A
P 4450 6350
F 0 "#PWR015" H 4450 6100 50  0001 C CNN
F 1 "GND" H 4455 6177 50  0000 C CNN
F 2 "" H 4450 6350 50  0001 C CNN
F 3 "" H 4450 6350 50  0001 C CNN
	1    4450 6350
	1    0    0    -1  
$EndComp
$Comp
L Device:LED led9
U 1 1 614EE784
P 4850 5700
F 0 "led9" H 4850 5800 50  0000 C CNN
F 1 "RED" H 4850 5600 50  0000 C CNN
F 2 "" H 4850 5700 50  0001 C CNN
F 3 "~" H 4850 5700 50  0001 C CNN
	1    4850 5700
	0    -1   -1   0   
$EndComp
$Comp
L Device:R_Small_US R9
U 1 1 614EE78E
P 4850 6100
F 0 "R9" V 4750 6050 50  0000 L CNN
F 1 "1K" V 4950 6050 50  0000 L CNN
F 2 "" H 4850 6100 50  0001 C CNN
F 3 "~" H 4850 6100 50  0001 C CNN
	1    4850 6100
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR016
U 1 1 614EE798
P 4850 6350
F 0 "#PWR016" H 4850 6100 50  0001 C CNN
F 1 "GND" H 4855 6177 50  0000 C CNN
F 2 "" H 4850 6350 50  0001 C CNN
F 3 "" H 4850 6350 50  0001 C CNN
	1    4850 6350
	1    0    0    -1  
$EndComp
$Comp
L Device:LED led1
U 1 1 614F6306
P 1650 5700
F 0 "led1" H 1650 5800 50  0000 C CNN
F 1 "RED" H 1650 5600 50  0000 C CNN
F 2 "" H 1650 5700 50  0001 C CNN
F 3 "~" H 1650 5700 50  0001 C CNN
	1    1650 5700
	0    -1   -1   0   
$EndComp
$Comp
L Device:LED led2
U 1 1 614F709A
P 2050 5700
F 0 "led2" H 2050 5800 50  0000 C CNN
F 1 "YLW" H 2050 5600 50  0000 C CNN
F 2 "" H 2050 5700 50  0001 C CNN
F 3 "~" H 2050 5700 50  0001 C CNN
	1    2050 5700
	0    -1   -1   0   
$EndComp
$Comp
L Device:LED led3
U 1 1 614F74E7
P 2450 5700
F 0 "led3" H 2450 5800 50  0000 C CNN
F 1 "GRN" H 2450 5600 50  0000 C CNN
F 2 "" H 2450 5700 50  0001 C CNN
F 3 "~" H 2450 5700 50  0001 C CNN
	1    2450 5700
	0    -1   -1   0   
$EndComp
Wire Wire Line
	1650 2800 1800 2800
Wire Wire Line
	1650 2900 1800 2900
Wire Wire Line
	1650 3000 1800 3000
Wire Wire Line
	1650 3100 1800 3100
Wire Wire Line
	1650 3200 1800 3200
Wire Wire Line
	1650 3300 1800 3300
Wire Wire Line
	1650 3400 1800 3400
Wire Wire Line
	1650 3500 1800 3500
Wire Wire Line
	1650 5400 1650 5550
Wire Wire Line
	1650 5850 1650 6000
Wire Wire Line
	1650 6200 1650 6350
Wire Wire Line
	2050 5400 2050 5550
Wire Wire Line
	2050 5850 2050 6000
Wire Wire Line
	2050 6200 2050 6350
Wire Wire Line
	2450 5400 2450 5550
Wire Wire Line
	2450 5850 2450 6000
Wire Wire Line
	2450 6200 2450 6350
Wire Wire Line
	2850 5400 2850 5550
Wire Wire Line
	2850 5850 2850 6000
Wire Wire Line
	2850 6200 2850 6350
Wire Wire Line
	3250 5400 3250 5550
Wire Wire Line
	3250 5850 3250 6000
Wire Wire Line
	3250 6200 3250 6350
Wire Wire Line
	3650 5400 3650 5550
Wire Wire Line
	3650 5850 3650 6000
Wire Wire Line
	3650 6200 3650 6350
Wire Wire Line
	4050 5400 4050 5550
Wire Wire Line
	4050 5850 4050 6000
Wire Wire Line
	4050 6200 4050 6350
Wire Wire Line
	4450 5400 4450 5550
Wire Wire Line
	4450 5850 4450 6000
Wire Wire Line
	4450 6200 4450 6350
Wire Wire Line
	4850 5400 4850 5550
Wire Wire Line
	4850 5850 4850 6000
Wire Wire Line
	4850 6200 4850 6350
$Comp
L power:GND #PWR04
U 1 1 61512393
P 2300 4550
F 0 "#PWR04" H 2300 4300 50  0001 C CNN
F 1 "GND" H 2305 4377 50  0000 C CNN
F 2 "" H 2300 4550 50  0001 C CNN
F 3 "" H 2300 4550 50  0001 C CNN
	1    2300 4550
	1    0    0    -1  
$EndComp
Wire Wire Line
	2200 4300 2200 4400
Wire Wire Line
	2200 4400 2300 4400
Wire Wire Line
	2300 4400 2300 4300
Wire Wire Line
	2400 4300 2400 4400
Wire Wire Line
	2400 4400 2300 4400
Connection ~ 2300 4400
Wire Wire Line
	2300 4400 2300 4550
Wire Wire Line
	2500 2200 2500 2100
$Comp
L Device:R_Small_US R_SW1
U 1 1 61525E49
P 3550 2950
F 0 "R_SW1" V 3450 2800 50  0000 L CNN
F 1 "10K" V 3650 2900 50  0000 L CNN
F 2 "" H 3550 2950 50  0001 C CNN
F 3 "~" H 3550 2950 50  0001 C CNN
	1    3550 2950
	1    0    0    -1  
$EndComp
Wire Wire Line
	3550 2250 3550 2100
Wire Wire Line
	2500 2100 3550 2100
$Comp
L power:GND #PWR010
U 1 1 6152A3AA
P 3550 3200
F 0 "#PWR010" H 3550 2950 50  0001 C CNN
F 1 "GND" H 3555 3027 50  0000 C CNN
F 2 "" H 3550 3200 50  0001 C CNN
F 3 "" H 3550 3200 50  0001 C CNN
	1    3550 3200
	1    0    0    -1  
$EndComp
Wire Wire Line
	3550 3200 3550 3050
$Comp
L Switch:SW_Push sw_triggerUp1
U 1 1 61532EBA
P 4000 2450
F 0 "sw_triggerUp1" H 4000 2400 50  0000 C CNN
F 1 "SW_Push" H 4000 2644 50  0001 C CNN
F 2 "" H 4000 2650 50  0001 C CNN
F 3 "~" H 4000 2650 50  0001 C CNN
	1    4000 2450
	0    -1   -1   0   
$EndComp
$Comp
L Device:R_Small_US R_SW2
U 1 1 615334E2
P 4000 2950
F 0 "R_SW2" V 3900 2800 50  0000 L CNN
F 1 "10K" V 4100 2900 50  0000 L CNN
F 2 "" H 4000 2950 50  0001 C CNN
F 3 "~" H 4000 2950 50  0001 C CNN
	1    4000 2950
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR012
U 1 1 61533833
P 4000 3200
F 0 "#PWR012" H 4000 2950 50  0001 C CNN
F 1 "GND" H 4005 3027 50  0000 C CNN
F 2 "" H 4000 3200 50  0001 C CNN
F 3 "" H 4000 3200 50  0001 C CNN
	1    4000 3200
	1    0    0    -1  
$EndComp
Wire Wire Line
	3550 2650 3550 2750
$Comp
L Switch:SW_Push sw_triggerDown1
U 1 1 61533F79
P 4450 2450
F 0 "sw_triggerDown1" H 4450 2400 50  0000 C CNN
F 1 "SW_Push" H 4450 2644 50  0001 C CNN
F 2 "" H 4450 2650 50  0001 C CNN
F 3 "~" H 4450 2650 50  0001 C CNN
	1    4450 2450
	0    -1   -1   0   
$EndComp
$Comp
L Device:R_Small_US R_SW3
U 1 1 61533F83
P 4450 2950
F 0 "R_SW3" V 4350 2800 50  0000 L CNN
F 1 "10K" V 4550 2900 50  0000 L CNN
F 2 "" H 4450 2950 50  0001 C CNN
F 3 "~" H 4450 2950 50  0001 C CNN
	1    4450 2950
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR014
U 1 1 61533F8D
P 4450 3200
F 0 "#PWR014" H 4450 2950 50  0001 C CNN
F 1 "GND" H 4455 3027 50  0000 C CNN
F 2 "" H 4450 3200 50  0001 C CNN
F 3 "" H 4450 3200 50  0001 C CNN
	1    4450 3200
	1    0    0    -1  
$EndComp
$Comp
L Switch:SW_Push sw_triggerRandom1
U 1 1 615362EE
P 4900 2450
F 0 "sw_triggerRandom1" H 4900 2400 50  0000 C CNN
F 1 "SW_Push" H 4900 2644 50  0001 C CNN
F 2 "" H 4900 2650 50  0001 C CNN
F 3 "~" H 4900 2650 50  0001 C CNN
	1    4900 2450
	0    -1   -1   0   
$EndComp
$Comp
L Device:R_Small_US R_SW4
U 1 1 615362F8
P 4900 2950
F 0 "R_SW4" V 4800 2800 50  0000 L CNN
F 1 "10K" V 5000 2900 50  0000 L CNN
F 2 "" H 4900 2950 50  0001 C CNN
F 3 "~" H 4900 2950 50  0001 C CNN
	1    4900 2950
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR017
U 1 1 61536302
P 4900 3200
F 0 "#PWR017" H 4900 2950 50  0001 C CNN
F 1 "GND" H 4905 3027 50  0000 C CNN
F 2 "" H 4900 3200 50  0001 C CNN
F 3 "" H 4900 3200 50  0001 C CNN
	1    4900 3200
	1    0    0    -1  
$EndComp
Wire Wire Line
	3550 2100 4000 2100
Wire Wire Line
	4000 2100 4000 2250
Connection ~ 3550 2100
Wire Wire Line
	4000 2100 4450 2100
Wire Wire Line
	4450 2100 4450 2250
Connection ~ 4000 2100
Wire Wire Line
	4450 2100 4900 2100
Wire Wire Line
	4900 2100 4900 2250
Connection ~ 4450 2100
Wire Wire Line
	3000 3200 2800 3200
Wire Wire Line
	3000 3300 2800 3300
Wire Wire Line
	3000 3400 2800 3400
Wire Wire Line
	3000 3500 2800 3500
Wire Wire Line
	4000 2650 4000 2750
Wire Wire Line
	4000 3050 4000 3200
Wire Wire Line
	4450 2650 4450 2750
Wire Wire Line
	4450 3050 4450 3200
Wire Wire Line
	4900 2650 4900 2750
Wire Wire Line
	4900 3050 4900 3200
Wire Wire Line
	3400 2750 3550 2750
Connection ~ 3550 2750
Wire Wire Line
	3550 2750 3550 2850
Wire Wire Line
	3850 2750 4000 2750
Connection ~ 4000 2750
Wire Wire Line
	4000 2750 4000 2850
Wire Wire Line
	4300 2750 4450 2750
Connection ~ 4450 2750
Wire Wire Line
	4450 2750 4450 2850
Wire Wire Line
	4750 2750 4900 2750
Connection ~ 4900 2750
Wire Wire Line
	4900 2750 4900 2850
$Comp
L Switch:SW_Push sw_triggerAll1
U 1 1 614AAAD7
P 3550 2450
F 0 "sw_triggerAll1" H 3550 2400 50  0000 C CNN
F 1 "SW_Push" H 3550 2644 50  0001 C CNN
F 2 "" H 3550 2650 50  0001 C CNN
F 3 "~" H 3550 2650 50  0001 C CNN
	1    3550 2450
	0    -1   -1   0   
$EndComp
Text Label 1650 2800 2    50   ~ 0
A_D2
Text Label 1650 5400 2    50   ~ 0
A_D2
Text Label 1650 2900 2    50   ~ 0
A_D3
Text Label 1650 3000 2    50   ~ 0
A_D4
Text Label 1650 3100 2    50   ~ 0
A_D5
Text Label 1650 3200 2    50   ~ 0
A_D6
Text Label 1650 3300 2    50   ~ 0
A_D7
Text Label 1650 3400 2    50   ~ 0
A_D8
Text Label 1650 3500 2    50   ~ 0
A_D9
Text Label 3000 3200 0    50   ~ 0
A_A0
Text Label 3000 3300 0    50   ~ 0
A_A1
Text Label 3000 3400 0    50   ~ 0
A_A2
Text Label 3000 3500 0    50   ~ 0
A_A3
Text Label 3400 2750 2    50   ~ 0
A_A0
Text Label 3850 2750 2    50   ~ 0
A_A1
Text Label 4300 2750 2    50   ~ 0
A_A2
Text Label 4750 2750 2    50   ~ 0
A_A3
Text Label 2050 5400 2    50   ~ 0
A_D3
Text Label 2450 5400 2    50   ~ 0
A_D4
Text Label 2850 5400 2    50   ~ 0
A_D5
Text Label 3250 5400 2    50   ~ 0
A_D6
Text Label 3650 5400 2    50   ~ 0
A_D7
Text Label 4050 5400 2    50   ~ 0
A_D8
Text Label 4450 5400 2    50   ~ 0
A_D9
Text Label 4850 5400 2    50   ~ 0
A_D10
Wire Wire Line
	1650 3600 1800 3600
Text Label 1650 3600 2    50   ~ 0
A_D10
NoConn ~ 1800 2600
NoConn ~ 1800 2700
NoConn ~ 2800 2600
NoConn ~ 2800 2800
NoConn ~ 2800 3000
NoConn ~ 2200 2200
NoConn ~ 2400 2200
NoConn ~ 1800 3700
NoConn ~ 1800 3800
NoConn ~ 1800 3900
NoConn ~ 2800 3700
NoConn ~ 2800 3600
$Comp
L power:PWR_FLAG #FLG02
U 1 1 614F378E
P 5600 5800
F 0 "#FLG02" H 5600 5875 50  0001 C CNN
F 1 "PWR_FLAG" H 5600 5973 50  0000 C CNN
F 2 "" H 5600 5800 50  0001 C CNN
F 3 "~" H 5600 5800 50  0001 C CNN
	1    5600 5800
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR05
U 1 1 614F3B9A
P 5600 6000
F 0 "#PWR05" H 5600 5750 50  0001 C CNN
F 1 "GND" H 5605 5827 50  0000 C CNN
F 2 "" H 5600 6000 50  0001 C CNN
F 3 "" H 5600 6000 50  0001 C CNN
	1    5600 6000
	1    0    0    -1  
$EndComp
Wire Wire Line
	5600 5800 5600 6000
Text Notes 3900 1950 0    50   ~ 10
SWITCH CONTROL
Text Notes 3250 5200 0    50   ~ 10
LED ARRAY
$EndSCHEMATC
