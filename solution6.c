void solution6(){
	int aux = 0;
	
  while(1){
  	 GPIO_Write_Port(GPIOE, aux);
	   aux++;
	    
     if(aux == 255){
		   aux = 0;
	   }
	   Delay_ms(250);
	 }
}
