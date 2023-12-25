#include <REGX52.H>

void Delay(unsigned int xms)		//@11.0592MHz
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

//nums[n]表示数字n
unsigned int nums []  = {0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};
//	第index个LED灯亮数字num
void lightOn(unsigned char index,unsigned char num)
{
	P2_2 = 1;
	P2_3 = 0;
	P2_4 = 0;
	switch(index)
	{
		case 1:
			P2_2 = 0;
			P2_3 = 0;
			P2_4 = 0;
			break;
		case 2:
			P2_2 = 1;
			P2_3 = 0;
			P2_4 = 0;
			break;
		case 3:
			P2_2 = 0;
			P2_3 = 1;
			P2_4 = 0;
			break;
		case 4:
			P2_2 = 1;
			P2_3 = 1;
			P2_4 = 0;
			break;
		case 5:
			P2_2 = 0;
			P2_3 = 0;
			P2_4 = 1;
			break;
		case 6:
			P2_2 = 1;
			P2_3 = 0;
			P2_4 = 1;
			break;
		case 7:
			P2_2 = 0;
			P2_3 = 1;
			P2_4 = 1;
			break;
//		case 8:
//			P2_2 = 1;
//			P2_3 = 1;
//			P2_4 = 1;
//			break;
		default:
			P2_2 = 1;
			P2_3 = 1;
			P2_4 = 1;
			break;
	}
	P0 = nums[num];
}

void main()
{
	int i = 1;
	for(;i < 9;i++)
	{
		lightOn(i,i);
		Delay(1);
	}
	
//	while(1)
//	{
//	
//	}
}