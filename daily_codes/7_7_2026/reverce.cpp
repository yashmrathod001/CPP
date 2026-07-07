#include<iostream>
using namespace std;
int main()
{
	int n, mod , rev;
	cout<<"enter a number :";
	cin>> n;
	rev = 0 ; 
	while(n > 0)
	{
		mod = n % 10 ;
		rev =( rev*10 )+ mod ;
		n /= 10;	
	}
	cout<< rev;
	
	return 0;
}
