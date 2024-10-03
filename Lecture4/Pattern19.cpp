#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n - i + 1)
        {
            cout << j;
            j++;
        }
        int stars = 2 * i - 2;
        while (stars > 0)
        {
            cout << "*";
            stars--;
        }
        int k = n - i + 1;
        while (k > 0)
        {
            cout << k;
            k--;
        }
        cout << endl;
        i++;
    }
}