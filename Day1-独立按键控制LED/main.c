#include <REGX52.H>

//x毫秒
void Delayxms(unsigned int xms)		//@11.0592MHz
{
	unsigned char i, j;

	while(xms)
	{
		i = 2;
		j = 199;
		do
		{
			while (--j);
		} while (--i);
		xms--;
	}
	
}

//第一个按钮控制第一个LED灯
void light1()
{
	while(1)
		{
			if(P3_1 == 0)
			{
				P2_0 = 0;
			}
			else 
			{
				P2_0 = 1;
			}
		}
}

//第1、2个按钮控制第1、2个LED灯
/*
void light2()
{
	while(1)
	{
		if(P3_1 == 0)
		{
			P2_0 = 0;
			P2_1 = 0;
		}
		else 
		{
			P2_0 = 1;
			P2_1 = 1;
		}
	}
}
*/

//防止按键的抖动
void light3()
{
	while(1)
	{
		if(P3_1 == 0)
		{
			Delayxms(20);	//等待电压平稳，防止抖动
			while(P3_1 == 0);	//等待松开按钮
			Delayxms(20);	//再次等待电压平稳
			
			P2_0 = ~P2_0;
		}
	}
}

void main()
{
	//light1();
	//light2();
	light3();
}