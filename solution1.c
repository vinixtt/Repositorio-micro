void solution1(){
	  while (1){
		  Delay_us(150000);
		  GPIO_Write_Pin(GPIOA, PIN_6, LOW);
		  Delay_us(100000);
		  GPIO_Write_Pin(GPIOA, PIN_6, HIGH);
	  }
}
