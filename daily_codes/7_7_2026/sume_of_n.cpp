// sum of n numbers 
#include<iostream>
using namespace std;
int main(){
	int n , sum ;
	cout<< " enter a number to find the sum of this number starting from 0 :";
	cin>> n;
	sum = 0;
	for(int i=1 ;i <=n ; i++)
	{
		sum= sum + i;
		
	}
	cout <<" the sum of number is "<< sum ;
	return 0;
}
