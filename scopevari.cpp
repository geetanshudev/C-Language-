//to test scope variable operartor//
#include<iostream>
using namespace std;
int a = 5;
int main ()
{
	int a = 1;
	cout<<"local variable ="<<a<<endl;
		cout<<"gloabal variable ="<< ::a <<endl;
	return 0 ;
	
}
