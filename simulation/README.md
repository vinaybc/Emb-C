# All four Activities combined action

|ON|OFF|
|:--:|:--:|
|![Project_1](https://user-images.githubusercontent.com/65846052/116677707-25ef7180-a9c6-11eb-89a1-7b3fe7b61b39.png)|![Project_2](https://user-images.githubusercontent.com/65846052/116677779-3b649b80-a9c6-11eb-80a8-31198c4caed2.png)|


## Code 
```while(1){
	uint8_t Status;
	/* Turns LED ON if and only if both switches ButtonSensor and Heater are closed */
	Status=StatusOfLedActuator();
	if(Status==ON){
		Temperature=ReadADC(ADCchannel); /*reads sensor data from ADCChannel*/
		TempType=GeneratePWM(Temperature);/*Generates PWM according to data received from sensor*/
		USARTWriteString(TempType);/*Sends data to serial monitor*/
	}
}
```
