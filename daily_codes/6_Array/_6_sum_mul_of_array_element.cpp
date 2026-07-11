#include<iostream>
using namespace std;

int main()
{
	int arr[] = { 1,2,3,5,4,6,8,7};
		int sumarr = 0;
	for(int i=0;i<8;i++)
	{
		sumarr += arr[i]; 
	}
	cout<<"the sum of given array is" << sumarr;
	
	int mularr = 1;
	for(int i=0;i<8;i++)
	{
		mularr *= arr[i]; 
	}
	cout<<"the sum of given array is" << mularr;
	return 0;
}

