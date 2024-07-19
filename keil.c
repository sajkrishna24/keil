//LED
#include<LPC214X.h>
void delay(unsigned int count);
int main()
{
       IODIR0 |=(1<<2);
	   while(1)
	   {
	   IOSET0 |=(1<<2);
		 delay(10000);
	   IOCLR0 |=(1<<2);
		 delay(10000);
	   }
}
void delay(unsigned int count)
{
	unsigned int i;
	for(i=0;i<count;i++);
}
