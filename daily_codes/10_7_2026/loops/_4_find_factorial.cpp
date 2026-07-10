#include<iostream>
using namespace std;
int main()
{
	int n;
	int fact = 1 ;
	cout<<"enter a number to find the factorial";
	cin>>n;
	for(int i =1;i <=n;i++)
	{
		fact = fact * i;
	}
	cout<<"\n"<<fact;
	return 0;
}
