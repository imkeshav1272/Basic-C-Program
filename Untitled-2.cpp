#include <iostream>
using namespace std;

void swap(int& a, int& b)
{
    int t;
    t = a;
    a = b;
    b = t;
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swapAlternate(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
        else return;
    }
}


int main()
{
    int even[8] = { 5, 4, 3, 2, 6, 7, 8, 9 };
    int odd[5] = { 11, 23, 34, 54, 33 };

    

    
    printArray(even, 8);

    return 0;
}
