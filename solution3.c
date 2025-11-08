void solution3(){
  int delay;
	while(1){
		for(delay = 0; delay <= 10000; delay += 50){
			GPIO_Write_Pin(GPIOA, PIN_6, LOW);
			GPIO_Write_Pin(GPIOA, PIN_7, HIGH);

			Delay_us(delay);

			GPIO_Write_Pin(GPIOA, PIN_6, HIGH);
			GPIO_Write_Pin(GPIOA, PIN_7, LOW);
			Delay_us(10000 - delay);
		}

		for(delay = 0; delay <= 10000; delay += 50){
			GPIO_Write_Pin(GPIOA, PIN_6, HIGH);
			GPIO_Write_Pin(GPIOA, PIN_7, LOW);

	     	Delay_us(delay);

			GPIO_Write_Pin(GPIOA, PIN_6, LOW);
			GPIO_Write_Pin(GPIOA, PIN_7, HIGH);
			Delay_us(10000 - delay);

		}
	}
}
