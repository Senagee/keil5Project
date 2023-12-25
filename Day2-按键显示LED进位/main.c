#include <REGX52.H>

//延时xms
void Delayxms(unsigned int xms)		//@11.0592MHz
{
	unsigned char i, j;
	while(xms--)
	{
		i = 2;
		j = 199;
		do
		{
			while (--j);
		} while (--i);
		
	}

}

//
void binaryRightShift()
{
	unsigned char LEDNum = 0;	//0~255 刚好对应8个位模拟寄存器
	while(1)
	{
		
		if(~P3_1)
		{
			Delayxms(20);
			while(~P3_1);
			Delayxms(20);
			
			LEDNum++;
			P2 = ~LEDNum;
		}
	}
}