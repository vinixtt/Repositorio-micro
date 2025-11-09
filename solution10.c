void solution10(){
	 const uint8_t mask[16]={
	   0b00111111, //0
	   0b00000110, //1
	   0b01011011, //2
	   0b01001111, //3
	   0b01100110, //4
	   0b01101101, //5
	   0b01111101, //6
	   0b00000111, //7
	   0b01111111, //8
	   0b01101111, //9
	   0b01110111, //A
	   0b01111100, //B
	   0b00111001, //C
	   0b01011110, //D
	   0b01111001, //E
	   0b01110001  //F
	 };

	void printDisplay(int display, int value){
	    GPIO_Write_Pin(GPIOE, 7, LOW);
	    GPIO_Write_Pin(GPIOE, 8, LOW);

	    GPIO_Write_Port(GPIOA, mask[value]);

	    if (display == 0)
	        GPIO_Write_Pin(GPIOE, 7, HIGH); // Dozen
	    else if(display == 1){
	        GPIO_Write_Pin(GPIOE, 8, HIGH); // Unit
		      Delay_us(50);
	    }
	}

	 while (1){
	    for (int dozen = 0; dozen < 16; dozen++){
	       for (int unit = 0; unit < 16; unit++){
	          int counter = 0;
	          while (counter < 1000){
	              printarDisplay(0, dozen);
	              printarDisplay(1, unit);
	              Delay_us(100);
	              counter++;
	          }
	       }
	    }
	 }
}
