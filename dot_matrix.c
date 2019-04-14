 #include <reg51.h>
 void delay(unsigned int);
 void scroll();
 unsigned char i;
 
 
 void main(){
  while(1){
		scroll();
	}
}
void delay(unsigned int num)
	{
	   unsigned int i,j;
	   for(i=0;i<num;i++)
	   for(j=0;j<1275;j++);
	}
void scroll(){
 for(i=1;i<=1;i++){            // put i<=5 to scroll the display
			P2=~(0x01);
			P1=(0x08<<(i-1));       // to display first row			
			delay(1);		
			P2=~(0x02);
			P1=(0x0A<<i);  // to display second row
			delay(1);
			P2=~(0x04);
			P1=(0x11<<i);  // to display third row
			delay(1);
			P2=~(0x08);
			P1=(0x1F<<i);  // to display fourth row
			delay(1);
			P2=~(0x10);
			P1=(0x11<<i);  // to display fifth row
			delay(1);
			P2=~(0x20);
			P1=(0x11<<i);  // to display sixth row
			delay(1);
			P2=~(0x40);
			P1=(0x11<<i);  // to display seventh row
			delay(8);
	}
}