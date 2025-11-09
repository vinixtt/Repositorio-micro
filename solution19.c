void solution19(){
	  uint32_t pulseTime = 0;
	  float distance = 0.0f;

	  GPIO_Write_Pin(GPIOA, 0, HIGH);
	  Delay_us(10);
	  GPIO_Write_Pin(GPIOA, 0, LOW);

	  while(GPIO_Read_Pin(GPIOA, 1) == LOW);

	  while(GPIO_Read_Pin(GPIOA, 1) == HIGH){
		  Delay_us(1);
		  pulseTime++;
	  }

	  distance = pulseTime / 58.0f;
	  if(pulseTime > 25000){
		  distance = -1.0f;
	  } else {
		  distance = pulseTime / 58.0f;
	  }

	  if(distance < 0){
		  GPIO_Write_Pin(GPIOA, 2, LOW);
	  }
	  else if(distance > 50.0f){
		  GPIO_Write_Pin(GPIOA, 2, LOW);
	  }
	  else if(distance >= 30.0f){
		  GPIO_Write_Pin(GPIOA, 2, HIGH);
		  Delay_ms(300);
		  GPIO_Write_Pin(GPIOA, 2, LOW);
		  Delay_ms(300);
	  }
	  else if(distance > 10.0f){
		  GPIO_Write_Pin(GPIOA, 2, HIGH);
		  Delay_ms(200);
		  GPIO_Write_Pin(GPIOA, 2, LOW);
		  Delay_ms(300);
	  } else {
		  GPIO_Write_Pin(GPIOA, 2, HIGH);
		  Delay_ms(100);
		  GPIO_Write_Pin(GPIOA, 2, LOW);
		  Delay_ms(300);
	  }
	  Delay_ms(500);
}
