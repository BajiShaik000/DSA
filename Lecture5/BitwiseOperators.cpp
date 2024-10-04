#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int b = 6;

    cout << "a&b " << (a & b) << endl;
    cout << "a|b " << (a | b) << endl;
    cout << "~a " << (~a) << endl;
    cout << "a^b " << (a ^ b) << endl;

    // left shift and right shift -- padding is always 0 for positive numbers and for negative numbers it depends on compiler
    cout << (17 >> 1) << endl;
    cout << (17 >> 2) << endl;
    cout << (19 << 1) << endl;
    cout << (21 << 2) << endl;

    // pre and post increment & decrement operators
    int i = 7;
    cout << (++i) << endl;
    cout << (i++) << endl;
    cout << (i--) << endl;
    cout << (--i) << endl;
}