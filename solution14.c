void solution14(){
	  void exibirHexPortA(uint8_t value) {GPIO_Write_Port(GPIOA, value);}
	  void exibirHexPortD(uint8_t value) {GPIO_Write_Port(GPIOD, value);}
  
	  uint32_t ledTime1 = 0;
  	uint32_t ledTime2 = 0;
    
  while(1){
    if (GPIO_Read_Pin(GPIOE, PIN_4) == 0){ 
  	  ledTime1 += 2000;
  	  while (GPIO_Read_Pin(GPIOE, PIN_4) == 0); // Locks until read pin 4
  	}
  	// Verifies K1 Button (LED2)
  	if (GPIO_Read_Pin(GPIOE, PIN_3) == 0){
  	  ledTime2 += 4000;
  	  while (GPIO_Read_Pin(GPIOE, PIN_3) == 0); // Locks until read pin 3
  	}
  	// Updates LED1
  	if (ledTime1 > 0){
  	  GPIO_Write_Pin(GPIOA, PIN_6, LOW);
  	  Delay_ms(100);
  	  ledTime1 -= 100;
  	} else {
  	  GPIO_Write_Pin(GPIOA, PIN_6, HIGH);
  	}
  	// Updates LED2
  	if (ledTime2 > 0){
  	  GPIO_Write_Pin(GPIOA, PIN_7, LOW);
  	  Delay_ms(100);
  	  ledTime2-= 100;
  	} else {
  	  GPIO_Write_Pin(GPIOA, PIN_7, HIGH);
	  }
  }
}
