void solution9(){
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

	while(1){
		for(int i = 0; i < 16; i++){
			GPIO_Write_Port(GPIOA, mask[i]);
			Delay_ms(500);
		}
		for(int i = 15; i >= 0; i--){
			GPIO_Write_Port(GPIOA, mask[i]);
			Delay_ms(500);
		}
	}
}
