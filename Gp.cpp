#include<iostream>
using namespace std;

int main ()
{
    int n;
    cout << "enter the value of n =";
    cin >> n;
    int ap =4;
    //for gp  1,2,4,8......
    for (int i = 1; i <= n +1; i++ )
    
    {
      cout<<ap<<" ";
      ap=ap*2;
    }
}