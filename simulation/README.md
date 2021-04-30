# All four Activities combined action

|ON|OFF|
|:--:|:--:|
|![Project_1](https://user-images.githubusercontent.com/65846052/116677329-b7121880-a9c5-11eb-97aa-5d588dd047cb.png)|![Project_2](https://user-images.githubusercontent.com/65846052/116677355-be392680-a9c5-11eb-85bf-b651c3a70e9b.png|

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
