#pragma config(Sensor, dgtl12, green,          sensorLEDtoVCC)
#pragma config(Motor,  port2,           rightMotor,    tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           leftMotor,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           servoMotor,    tmotorServoStandard, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
turnLEDOff(green); //LED Off
wait(1);  //Wait time
turnLEDOn(green);  //LED On
wait(1);//wait
turnLEDOff(green);
wait(1);//wait
turnLEDOn(green);
wait(1);
turnLEDOff(green);


}
