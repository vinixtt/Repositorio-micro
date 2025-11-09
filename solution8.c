void solution8(){
	GPIO_Write_Pin(GPIOE, PIN_0, HIGH); // First red LED ON
	GPIO_Write_Pin(GPIOE, PIN_5, HIGH); // Second green LED ON

	Delay_ms(2000);

	GPIO_Write_Pin(GPIOE, PIN_5, LOW); // Second green LED OFF
	GPIO_Write_Pin(GPIOE, PIN_4, HIGH); // Second yellow LED ON

	Delay_ms(2000);

	GPIO_Write_Pin(GPIOE, PIN_4, LOW); // Second yellow LED OFF
	GPIO_Write_Pin(GPIOE, PIN_3, HIGH); // Second red LED ON
  
	GPIO_Write_Pin(GPIOE, PIN_0, LOW); // First red LED OFF
	GPIO_Write_Pin(GPIOE, PIN_2, HIGH); // First green LED ON

	Delay_ms(2000);

	GPIO_Write_Pin(GPIOE, PIN_2, LOW); // First green LED OFF
	GPIO_Write_Pin(GPIOE, PIN_1, HIGH); // First yellow LED ON

	Delay_ms(2000);

	GPIO_Write_Pin(GPIOE, PIN_1, LOW); // First yellow LED OFF
	GPIO_Write_Pin(GPIOE, PIN_3, LOW); // Second red LED OFF
}
