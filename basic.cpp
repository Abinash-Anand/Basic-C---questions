// 2) Write a Program to Print Integer Number Entered by User
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cout << n << endl;
    return 0;
}
// 3) Write a Program to Add Two Integer Numbers Entered by User
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    cout << "addition of two number: " << a + b << endl;
}
// 4) Write a program where the user is asked to enter two integers(divisor and dividend) and the quotient and the remainder of their division is computed.(Both divisor and dividend should be integers.)
#include <iostream>
using namespace std;
int main()
{
    int divisor, dividend, quotient = 0, remainder = 0;
    cout << "Enter divisor and dividend:" << endl;
    cin >> divisor >> dividend;
    quotient = dividend / divisor;
    remainder = dividend % divisor;
    cout << "The quotient and the remainder is: " << quotient << " " << remainder << endl;
}
// 5) Write a Program to Find Size of int, float, double and char in your computer
#include <iostream>
using namespace std;
int main()
{
    int i;
    float f;
    double d;
    char c;
    cout << "size of int: " << sizeof(i) << endl
         << "size of float: " << sizeof(f) << endl
         << "size of double: " << sizeof(d) << endl
         << "size of char: " << sizeof(c) << endl;
    return 0;
}
// 6) Write a Program to Swap Two Numbers
#include <iostream>
using namespace std;
int main()
{
    int a, b, temp1;
    a = 1;
    b = 3;
    temp1 = a;
    a = b;
    b = temp1;
    cout << "Swapped value of a and b is: " << a << " " << b;
    return 0;
}
// 7) Write a Program to Find ASCII Value of a Character
#include <iostream>
using namespace std;
int main()
{
    char A;
    cin >> A;
    cout << "ASCII value of A is: " << int(A) << endl;
}
// 8) Write a Program to Multiply two decimal Numbers entered by User
#include <iostream>
using namespace std;
int main()
{
    float a, b;
    cin >> a >> b;
    cout << "Multiplication of a and b is: " << a * b << endl;
}