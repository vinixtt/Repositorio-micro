void solution4(){
    int button1 = GPIO_Read_Pin(GPIOA, PIN_0);
    int button2 = GPIO_Read_Pin(GPIOE, PIN_3);
    int button3 = GPIO_Read_Pin(GPIOE, PIN_4);

    if (button1 == HIGH){
                GPIO_Write_Pin(GPIOA, PIN_2, HIGH);
                GPIO_Write_Pin(GPIOA, PIN_3, LOW);
                GPIO_Write_Pin(GPIOA, PIN_4, LOW);
                Delay_ms(200);
    }

    if (button2 == LOW){
                GPIO_Write_Pin(GPIOA, PIN_2, LOW);
                GPIO_Write_Pin(GPIOA, PIN_3, HIGH);
                GPIO_Write_Pin(GPIOA, PIN_4, LOW);
                Delay_ms(200);
    }
    if (button3 == LOW){
              GPIO_Write_Pin(GPIOA, PIN_2, LOW);
        	  GPIO_Write_Pin(GPIOA, PIN_3, LOW);
              GPIO_Write_Pin(GPIOA, PIN_4, HIGH);
              Delay_ms(200);
    }
}
