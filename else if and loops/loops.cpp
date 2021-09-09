//1) Write a Program to Calculate Sum of first N Natural Numbers (here value of N is Entered by user)
#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter the Natural number: " << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    cout << "The sum of first n natural numbers is: " << sum << endl;
}
//2) Write a Program to Find Factorial of a given number N (N is entered by user)
#include <iostream>
using namespace std;
int main()
{
    //logic
    //example factorial of 10 is --> 10*9*8*7*6*5*4*3*2*1
    int n, fact = 1;
    cout << "Enter the number: " << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    cout << "The factorial of given number is: " << fact << endl;
}
//3) Write a Program to Generate Multiplication Table of a number (entered by the user) using a for loop.
#include <iostream>
using namespace std;
int main()
{
    int n, total = 0;
    cout << "Ennter the number: " << endl;
    cin >> n;
    cout << "Table of: " << n << endl;

    for (int i = 1; i != 11; i++)
    {
        //structure of table--> n * i = total
        //                      1 * 1 = 1
        //                      1 * 2 = 2
        total = n * i;
        cout << n << "x" << i << "=" << total << endl;
    }
}
//4) Write a Program to Display Fibonacci Series upto nth term (n is entered by user)
#include <iostream>
using namespace std;
int main()
{
    // thoery-->fibonacci series = 1st number + 2nd number
    //                            =  0 + 1
    //                            =  1 + 1
    //                            =  1 + 2
    //                            =  2 + 3
    int fib = 0, n, tempValue, firstNum = 0, secNum = 1;
    cout << "Enter the number: " << endl;
    cin >> n;
    cout << "fibonacci series of given number is: " << n << endl;

    for (int i = 0; i <= n; i++)
    {
        fib = firstNum + secNum;
        firstNum = secNum;
        secNum = fib;
        cout << fib << " ";
    }
}
//6) Write a Program to Find GCD or HCF of two numbers entered by user
#include <iostream>
using namespace std;
int main()
{
}
//7) Write a Program to Find LCM of two numbers entered by user
#include <iostream>
using namespace std;
int main()
{
    //theory---> 10,20---> 2|10,20
    //                    2|5, 10
    //                   5|1, 2
    int num1, num2, max;
    cout << "Enter the two numbers: " << endl;
    cin >> num1 >> num2;
    max = (num1 > num2) ? num1 : num2;
    do
    {
        if (num1 % 2 == 0 && num2 % 2 == 0)
        {
            cout << "LCM = " << max;
            break;
        }
        else
        {
            ++max;
        }
    } while (true);
}
//) Write a Program to Reverse a given Number N by user
#include <iostream>
using namespace std;
int main()
{
    //n=25-->secPlace=n/10-->firstPlace= n%2
    int reversedNumber = 0, n, remainder;
    cout << "enter the number: " << endl;
    cin >> n;
    while (n != 0)
    {
        remainder = n % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        n /= 10;
    }
    cout << "Reversed Number = " << reversedNumber;
}
