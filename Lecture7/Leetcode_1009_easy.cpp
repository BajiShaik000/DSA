// 1009. Complement of Base 10 Integer
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    int m = n;
    int mask = 0;
    int ans = 0;
    if (n == 0)
    {
        cout << ans << endl;
    }
    else
    {

        while (m != 0)
        {
            mask = (mask << 1) | 1;
            m >>= 1;
        }
        ans = (~n) & mask;
        cout << ans << endl;
    }
}