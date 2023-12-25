#include "Delay.h"
#include "lightOn.h"




void main()
{
	int i = 1;
	for(;i < 9;i++)
	{
		lightOn(i,i);
		Delay(100);
	}
	
//	while(1)
//	{
//	
//	}
}