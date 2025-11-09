void solution12(){
	while(1){
		for(int i = 0; i < 2000; i++){
			GPIO_Write_Pin(GPIOA, 1, HIGH);
			GPIO_Write_Pin(GPIOA, 0, LOW);
			GPIO_Write_Pin(GPIOA, 6, HIGH);
			Delay_us(i);
			GPIO_Write_Pin(GPIOA, 6, LOW);
			Delay_us(2000 - i);
		}
		for(int i = 0; i < 2000; i++){
			GPIO_Write_Pin(GPIOA, 1, HIGH);
			GPIO_Write_Pin(GPIOA, 0, LOW);
			GPIO_Write_Pin(GPIOA, 6, HIGH);
			Delay_us(2000 - i);
			GPIO_Write_Pin(GPIOA, 6, LOW);
			Delay_us(i);
		}
		for(int i = 0; i < 2000; i++){
			GPIO_Write_Pin(GPIOA, 1, LOW);
			GPIO_Write_Pin(GPIOA, 0, HIGH);
			GPIO_Write_Pin(GPIOA, 6, HIGH);
			Delay_us(i);
			GPIO_Write_Pin(GPIOA, 6, LOW);
			Delay_us(2000 - i);
		}
		for(int i = 0; i < 2000; i++){
			GPIO_Write_Pin(GPIOA, 1, LOW);
			GPIO_Write_Pin(GPIOA, 0, HIGH);
			GPIO_Write_Pin(GPIOA, 6, HIGH);
			Delay_us(2000 - i);
			GPIO_Write_Pin(GPIOA, 6, LOW);
			Delay_us(i);
		}
	}
}
