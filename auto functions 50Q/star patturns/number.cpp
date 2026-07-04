#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a int :" << endl;
    cin >> n;

    for(int i=0; i < n ; i++)
    {
        for(int j = i-1 ; j < n; j++)
        {
            cout<< "  ";

        }
        for(int j =1 ; j <= i ; j++)
        {
            cout<< j << " ";
        }
        
        for(int j = 0 ; j <= i ; j++)
        {
            cout<< j+1 << " ";
        }
        
        cout<<"\n";
        
    }

    return 0;
}