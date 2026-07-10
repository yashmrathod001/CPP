#include<iostream>
using namespace std;
int main()
{
	int n,count;
	cout<<"enter a number :\n";
	cin>>n;
	
	for( n=n;n>0;n=n/10)
	{
		count++;
	}
	cout<<count;
	return 0;
}
