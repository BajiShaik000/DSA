// 191. Number of 1 Bits

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    int setBits = 0;

    // while (n != 0)
    // {
    //     if (n & 1)
    //     {
    //         setBits++;
    //     }
    //     n >>= 1;
    // }
    for (int i = 0; i < 32; i++)
    {
        if ((n >> i) & 1)
        {
            setBits++;
        }
    }

    cout << setBits << endl;
}