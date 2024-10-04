
// 1281. Subtract the Product and Sum of Digits of an Integer

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    int sum = 0, prod = 1;
    while (n != 0)
    {
        int digit = n % 10;
        sum += digit;
        prod *= digit;
        n = n / 10;
    }
    cout << (prod - sum) << endl;
}