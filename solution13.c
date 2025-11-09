void solution13(){
	 void setStep(int step){
	     switch(step){
	        case 1: GPIO_Write_Port(GPIOA, 0b0001); break;
	        case 2: GPIO_Write_Port(GPIOA, 0b1000); break;
	        case 3: GPIO_Write_Port(GPIOA, 0b0010); break;
	        case 4: GPIO_Write_Port(GPIOA, 0b0100); break;
	     }
	 }
  
	 int step = 1;
  
   for(int steps = 0; steps < 200; steps++){
	    acionar_passo(step);
	    step++;
     
	    if(step > 4){
	      step = 1;
	    }
	    Delay_us(3000);
	    for(int steps = 0; steps < 200; steps++){
	        acionar_passo(step);
	        step++;
     
	        if(step > 4){
	          step = 1;
	        }
	        Delay_us(3000);
	    }
	    Delay_ms(1000);
	    step = 4;
	    for(int steps = 0; steps < 200; steps++){
	        acionar_passo(step);
	        step--;
      
	        if(step < 1){
	        	step = 4;
	        }
	        Delay_us(3000);
	    }
   }
}
