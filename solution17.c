void solution17(){
  int delay = 500;

	while(1){
		GPIO_Write_Pin(GPIOE, PIN_0, HIGH);
		Delay_us(delay);
		GPIO_Write_Pin(GPIOE, PIN_0, LOW);
		Delay_us(20000 - delay);

		if(!GPIO_Read_Pin(GPIOE, PIN_3) && delay != 2500){
			delay += 50;
		}
		if(!GPIO_Read_Pin(GPIOE, PIN_4) && delay != 500){
			delay -= 50;
		}
	}
}
