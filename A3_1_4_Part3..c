#pragma config(Sensor, in1,    LineFollower,   sensorLineFollower)
#pragma config(Sensor, in2,    Potentiometer,  sensorPotentiometer)
#pragma config(Sensor, in3,    Light,          sensorReflection)
#pragma config(Sensor, dgtl1,  LimitSwitch,    sensorTouch)
#pragma config(Sensor, dgtl2,  BumpSwitch,     sensorTouch)
#pragma config(Sensor, dgtl12, green,          sensorLEDtoVCC)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()

{
	clearTimer(T1);// turns light on
	while ( time1(T1) < 20000) // loop for 20 seconds
		turnLEDOn(green);// green LED turns on
	wait(2);// waits 2 seconds
	turnLEDOff(green);//green LED turns off
	wait(2);// waits 2 seconds

}
