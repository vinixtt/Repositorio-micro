void solution2(){
	  while (1){
		  Delay_us(1000000);

		  GPIO_Write_Pin(GPIOA, PIN_6, HIGH);
		  Delay_us(500000);
		  GPIO_Write_Pin(GPIOA, PIN_6, LOW);

		  Delay_us(1000000);

		  GPIO_Write_Pin(GPIOA, PIN_6, HIGH);
		  Delay_us(500000);
		  GPIO_Write_Pin(GPIOA, PIN_6, LOW);

		  Delay_us(500000);

		  GPIO_Write_Pin(GPIOA, PIN_6, HIGH);
		  Delay_us(500000);
		  GPIO_Write_Pin(GPIOA, PIN_6, LOW);
	  }
}
