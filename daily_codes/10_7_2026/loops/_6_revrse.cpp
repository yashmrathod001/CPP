#include<iostream>
using namespace std;
int main()
{
	int n,count,rev,mod;
	cout<<"enter a number :\n";
	cin>>n;
	
		for( n=n;n>0;n=n/10)
	{
		count++;
	}
	rev=0;
	for(int i=0;i<count;i++)
	{
		
		mod = n%10;
		rev = (rev*10)+mod;
		n=n/10;
	}
	cout<<rev;


	return 0;
}
