#include <REGX52.H>

//��ʱxms
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
	unsigned char LEDNum = 0;	//0~255 �պö�Ӧ8��λģ��Ĵ���
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