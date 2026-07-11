#include<iostream>
using namespace std;

int main()
{
	int arr[5] ;
	cout<<"enter 5 element of the array \n";
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	cout<<"the array is arr = [";
	
	
	for(int i=0;i<5;i++)
	{
		cout<<", "<<arr[i];
	}
	cout<<"]\n";
	
	int minimum = arr[0];
	int maximum = arr[0];
	for(int i=0;i<5;i++)
	{
		if(arr[i]<minimum)
		{
			minimum = arr[i];
		}
		if(arr[i]>maximum)
		{
			maximum = arr[i];
		}
	}
	

	cout<<"the minimum number is "<<minimum;
	
	cout<<" \nthe maximum number is "<<maximum;
	
	return 0;

}
