#include <REGX52.H>

//x����
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

//��һ����ť���Ƶ�һ��LED��
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

//��1��2����ť���Ƶ�1��2��LED��
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

//��ֹ�����Ķ���
void light3()
{
	while(1)
	{
		if(P3_1 == 0)
		{
			Delayxms(20);	//�ȴ���ѹƽ�ȣ���ֹ����
			while(P3_1 == 0);	//�ȴ��ɿ���ť
			Delayxms(20);	//�ٴεȴ���ѹƽ��
			
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