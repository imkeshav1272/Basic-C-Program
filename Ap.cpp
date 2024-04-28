#include <iostream>
using namespace std;
int main ()
{
    int n;
    cout << "enter the value of n =";
    cin >> n;
    int ap;
    for (int i = 4; i <= 3*n +1; i +=3 )
    {
        cout << i << " ";
    }
}