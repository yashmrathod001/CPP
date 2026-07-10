#include<iostream>
using namespace std;
void power();
int main()
{
	int n;
	cout<<"enter a number to find the power :";
	cin>>n;
	power();
	return 0;
}
void power()
{
	int pow = n*n;
	cout<<"\n"<<pow;
}

