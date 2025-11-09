void solution11(){
	LCD_Init(4, 20);
	LCD_Display_ON();
	LCD_Clear();
	LCD_Cursor_OFF();
	LCD_Blink_OFF();

	char string[20];

	LCD_Write_String(1, 1, "Message1");
	LCD_Write_String(2, 1, "Message2");
	LCD_Write_String(3, 1, "Message3");

	for(int i = 10; i != 0; i--){
		sprintf(string, "%d", i);
		LCD_Write_String(4, 1, string);
		Delay_ms(500);
		LCD_Write_String(4, 1, "          ");
	}
}
