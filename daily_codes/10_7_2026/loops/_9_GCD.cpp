#include<iostream>
using namespace std;
int main()
{
	//Greatest common divisor
	int n1,n2,n ;
	int GCD=1, common=1;
	cout<<"enter two numbers :";
	cin>> n1>>n2;
	cout<<"\nthe given two numbers are "<<n1 <<"and "<<n2;	

	
	if(n1>n2){
		n=n1;
	}
	else{
		n=n2;
	}
	
	for(int i=1;i<n;i++)
	{
		if((n1/i)==0 && (n2/i)==0 )
		{
			cout<<"it works";
		}	
	}
	cout<<"\n"<<GCD;
	
	
	return 0;
}
