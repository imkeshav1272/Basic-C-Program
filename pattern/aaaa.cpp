#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter side of sqare : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << (char)(i + 95) << " ";
        }
        cout << endl;
    }
}
