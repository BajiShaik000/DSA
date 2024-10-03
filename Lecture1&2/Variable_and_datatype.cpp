#include <iostream>
using namespace std;

int main()
{
    int a = 123;
    cout << a << " " << sizeof(a) << endl;

    char ch = 'a';
    // char ch = 'ab' // this is not possible because you can't store multple characters in char data type
    cout << ch << " " << sizeof(ch) << endl;

    bool bl = true; // you can use 0, false , 1, true as values
    cout << bl << " " << sizeof(bl) << endl;

    float f = 1.2;
    cout << f << " " << sizeof(f) << endl;

    double d = 1.23;
    cout << d << " " << sizeof(d) << endl;

    // type casting

    int i = 'a'; // chat to num
    cout << i << endl;

    char ch1 = 99; // num to char
    cout << ch1 << endl;

    /* char ch2 = 123456; // In this case it won't store becuase it will exceed the character limit so it will store the last 8bits value and print it
    // cout << ch2 << endl;*/

    // signed and unsigned - default will signed
    unsigned int x = 2;
    cout << x << endl;

    unsigned int y = -5;
    cout << y << endl; // here output will give us a huge number because it will treat it as +ve num because of unsigned indication

}