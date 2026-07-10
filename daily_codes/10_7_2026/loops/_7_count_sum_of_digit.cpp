#include<iostream>
using namespace std;
int main(){
	int n ;
	cout<< "enter a number :\n";
	cin>>n;
	
	int digit =0, mode = 0;
	while(n>0)
	{
		
		mode = n%10;
		digit = digit + mode;
		n = n/10;
	}
	cout<<digit;
	
}
