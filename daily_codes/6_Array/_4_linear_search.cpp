#include<iostream>
using namespace std;
int main()
{
	// linear search
	int arr[8] = { 1,2,3,5,4,69,8,9};
	int target = 8;
	for(int i=0;i<8;i++)
	{
		if(arr[i]==target)
		{
			cout<<"the index is " << i;
			break;
		}
	}
	return 0;
}
