void solution5(){
	while (1){
	    int k1 = !GPIO_Read_Pin(GPIOE, PIN_4); // K1 STM button (pull-up)
	    int k2 = !GPIO_Read_Pin(GPIOE, PIN_3); // K2 STM button (pull-up)
	    int k3 = GPIO_Read_Pin(GPIOE, PIN_2);  // K3 STM button (pull-down)

	    if (k3) { 
	        GPIO_Write_Pin(GPIOA, PIN_6, HIGH);
	        GPIO_Write_Pin(GPIOA, PIN_7, HIGH);
	    }
	    else if (k1 && !k2) {
	        GPIO_Write_Pin(GPIOA, PIN_6, LOW);
	        GPIO_Write_Pin(GPIOA, PIN_7, HIGH);
	    }
	    else if (k2 && !k1) { 
	        GPIO_Write_Pin(GPIOA, PIN_7, LOW);
	        GPIO_Write_Pin(GPIOA, PIN_6, HIGH);
	    }
	    else {
	        GPIO_Write_Pin(GPIOA, PIN_6, HIGH);
	        GPIO_Write_Pin(GPIOA, PIN_7, HIGH);
	    }
	 }
}
