#include<iostream>
using namespace std;
int main()
{
	int sr = 0,n,i=-1;
	cout<<"enter a number : ";
	cin>> n;
	
	for(int i=1;i<=n;i++)
	{
		if(i<3)
		{
			cout<<i-1<<" ,";
		}
		if(i>2){
			sr = (i-2)+(i-1);
		}
	}
	return 0;
}
