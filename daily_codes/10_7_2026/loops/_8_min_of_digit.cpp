#include<iostream>
using namespace std;
int main()
{
	int n , digit,min ,max;
	cout<< "enter a number :";
	cin>> n ;
	
	min = 9; max = 0;
	while(n>0)
	{
		digit = n%10;
		if(digit > max)
		{
		max = digit; 
		}
		if(digit<min)
		{
			min = digit;
		}
		n=n/10;
	}
	cout<<"\n the min = "<<min<<" and max = "<<max;
	return 0;
}
