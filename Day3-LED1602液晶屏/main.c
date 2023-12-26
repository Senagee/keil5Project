#include <REGX52.H>
#include "LCD1602.h"
#include "Delay.h"

int result = 0;
void main()
{
	LCD_Init();
	//LCD_ShowChar(1,1,'A');
	//LCD_ShowString(1,1,"Hello!");

	while(1)
	{
		result++;
		LCD_ShowNum(1,1,result,1);
		Delay(1000);
	}
}