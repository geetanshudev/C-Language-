//this program takes input integer and gives output into binary//
//author==geetanshu dev//
//date==21-11-2022//
#include<stdio.h>
void convertBinary(int _decimal, int _binary[]) {  
int i;    
for(i=0;_decimal>0;i++)    
{    
	_binary[i]=_decimal%2;    
	_decimal=_decimal/2;    
}    
printf("\nBinary of Given Number is=");    
for(i=i-1;i>=0;i--)    
{    
	printf("%d", _binary[i]);    	
}      
}  

  int main() {
// Write C code here
int binNum[20];
int n;
printf("enter any number= ");
scanf("%d",&n);
convertBinary(n, binNum);
return 0;
}

