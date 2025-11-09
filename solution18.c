void solution18(){
	const uint8_t mask[16] = {
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

	while(1){
     // Checks power for first keypad's line
		 GPIO_Write_Pin(GPIOD, PIN_0, LOW);
		 Delay_ms(5);
    
     // Column power flow control
		 if (!GPIO_Read_Pin(GPIOD, PIN_4)){
		    GPIO_Write_Port(GPIOA, mask[1]);
		 }
     else if (!GPIO_Read_Pin(GPIOD, PIN_5)){
				GPIO_Write_Port(GPIOA, mask[2]);
		 }
     else if (!GPIO_Read_Pin(GPIOD, PIN_6)){
				GPIO_Write_Port(GPIOA, mask[3]);
		 }
     else if (!GPIO_Read_Pin(GPIOD, PIN_7)){
				GPIO_Write_Port(GPIOA, mask[10]);
		 }
		 GPIO_Write_Pin(GPIOD, PIN_0, HIGH);

     // Checks power for second keypad's line
		 GPIO_Write_Pin(GPIOD, PIN_1, LOW);
		 Delay_ms(5);
    
		 // Column power flow control
     if (!GPIO_Read_Pin(GPIOD, PIN_4)){
				GPIO_Write_Port(GPIOA, mask[4]);
		 }
     else if (!GPIO_Read_Pin(GPIOD, PIN_5)){
				GPIO_Write_Port(GPIOA, mask[5]);
		 }
     else if (!GPIO_Read_Pin(GPIOD, PIN_6)){
				GPIO_Write_Port(GPIOA, mask[6]);
		 }
     else if (!GPIO_Read_Pin(GPIOD, PIN_7)){
				GPIO_Write_Port(GPIOA, mask[11]);
		 }
		 GPIO_Write_Pin(GPIOD, PIN_1, HIGH);

     // Checks power for third keypad's line
		 GPIO_Write_Pin(GPIOD, PIN_2, LOW);
		 Delay_ms(5);
		    
		 // Column power flow control
     if (!GPIO_Read_Pin(GPIOD, PIN_4)){
				GPIO_Write_Port(GPIOA, mask[7]);
		 } 
     else if (!GPIO_Read_Pin(GPIOD, PIN_5)){
				GPIO_Write_Port(GPIOA, mask[8]);
		 }
     else if (!GPIO_Read_Pin(GPIOD, PIN_6)){
				GPIO_Write_Port(GPIOA, mask[9]);
		 }
     else if (!GPIO_Read_Pin(GPIOD, PIN_7)){
				GPIO_Write_Port(GPIOA, mask[12]);
		 }
		 GPIO_Write_Pin(GPIOD, PIN_2, HIGH);

     // Checks power for fourth keypad's line
		 GPIO_Write_Pin(GPIOD, PIN_3, LOW);
		 Delay_ms(15);
		    
		 // Column power flow control		
     if (!GPIO_Read_Pin(GPIOD, PIN_4)){
				GPIO_Write_Port(GPIOA, mask[14]);
		 }
     else if (!GPIO_Read_Pin(GPIOD, PIN_5)){
				GPIO_Write_Port(GPIOA, mask[0]);
		 }
     else if (!GPIO_Read_Pin(GPIOD, PIN_6)){
				GPIO_Write_Port(GPIOA, mask[15]);
		 }
     else if (!GPIO_Read_Pin(GPIOD, PIN_7)){
				GPIO_Write_Port(GPIOA, mask[13]);
		 }
		 GPIO_Write_Pin(GPIOD, PIN_3, HIGH);
	}
}
