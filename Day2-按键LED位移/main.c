#include <REGX52.H>


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

unsigned char LEDNum;
void main()
{
	P2 = 0xfe;
	while(1)
	{	
		//����1LED����
		if(~P3_1)
		{
			Delayxms(20);
			while(~P3_1);
			Delayxms(20);

			LEDNum++;
			if(LEDNum >= 8)
				LEDNum = 0;
			P2 = ~(0x01 << LEDNum);
			
		}
		//����2LED����
		if(~P3_0)
		{
			Delayxms(20);
			while(~P3_0);
			Delayxms(20);
			if(LEDNum == 0)
				LEDNum = 7;
			else
				LEDNum--;
			
			P2 = ~(0x01 << LEDNum);
		}
	}
	
}