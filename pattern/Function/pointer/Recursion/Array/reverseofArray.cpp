#include <iostream>
using namespace std;
int main()
{
      int a[] = {12, 34, 5, 7, 8, 10};
      int n = sizeof(a) / 4;
      for (int i = 0; i < n; i++)
      {
            cout << a[i] << " ";
      }
      // reverse
      int i;
      int j = n - 1;
      while (i < j)
      {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;
            j--;
      }
      cout << endl;
      for (int i = 0; i < n; i++)
      {
            cout << a[i] << " ";
      }
}
