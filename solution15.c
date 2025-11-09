void solution15(){
	while(1){
		if(!GPIO_Read_Pin(GPIOE, 4) && GPIO_Read_Pin(GPIOE, 3)){
			while(!GPIO_Read_Pin(GPIOE, 4)){
				if(!GPIO_Read_Pin(GPIOE, 4) && !GPIO_Read_Pin(GPIOE, 3)){
					GPIO_Write_Pin(GPIOA, 6, LOW);
					Delay_ms(500);
          
					if(GPIO_Read_Pin(GPIOE, 3) || GPIO_Read_Pin(GPIOE, 4)){
						break;
					}
				}
			}
		}
		GPIO_Write_Pin(GPIOA, 6, HIGH);
		Delay_ms(500);
	}
}
