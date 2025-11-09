void solution7(){
	for(int i = 0; i < 8; i++){
		if(i - 1 < 0){
      GPIO_Write_Pin(GPIOE, i, HIGH);
		}
    
    GPIO_Write_Pin(GPIOE, i, HIGH);
    Delay_ms(100);
  	GPIO_Write_Pin(GPIOE, i-1 , LOW);
	}

	for(int i = 8; i > 0; i--){
		if(i-1 < 0){
       GPIO_Write_Pin(GPIOE, i, LOW);
		}
    
    GPIO_Write_Pin(GPIOE, i-1, HIGH);
    Delay_ms(100);
  	GPIO_Write_Pin(GPIOE, i , LOW);
	}
}
