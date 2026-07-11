#include<iostream>
using namespace std;
int main()
{
	// linear search
	int arr[8] = { 1,2,3,5,4,69,8,9};
	int start = 0, end =7;
	cout<<"before\n";
	for(int i=0;i<8;i++)
	{
		cout<<arr[i]<<",";
	}
	cout<<"\n[";
	while(start<end)
	{
		swap(arr[start],arr[end]);
		start++;
		end--;
	}
	cout<<"]";
	
	cout<<"after";
	cout<<"\n[";
	for(int i=0;i<8;i++)
	{
		cout<<arr[i]<<",";
	}
	cout<<"]";
	return 0;
}
