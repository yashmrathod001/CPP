/*
#include<iostream>
using namespace std;
int main()
{
    int a ;
    float b ;
    char c ;
    cout<<"enter a integer vaue ";
    cin>>a ;
    cout<<"enter a float value ";
    cin>> b ;
    cout<<" enter a charactor ";
    cin>>c;

    cout<<"int:"<<a<<", float :"<< b << ",charactor :"<< c ;
    return 0;
}*/
#include<iostream>
using namespace std;
int main()
{
    int a , b , temp ;
    cout<<"enter the values of a and b ";
    cin>> a >> b ;
    cout<< "before swiping a = " << a << "and b = "<<b ;
    temp = a ;
    a = b ;
    b = temp;
    cout<<"after swiping  a = " << a << " and b = " << b ;
    return 0;
    }