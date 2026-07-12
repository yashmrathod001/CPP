#include<iostream>
using namespace std;
int main()
{
	int n=4521;
	int reminder, outp=0;
	for(int i=1;i<=n;i++)
	{
		reminder = n%10;
		n=n/10;
		outp+=(reminder*i);
		cout<<outp<<"\n";
	}
	return 0;
}
