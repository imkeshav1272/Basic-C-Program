#include <iostream>
using namespace std;
int main()
{
    int n, sum;
    cout << "enter a no : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << sum;
}