// //1) Write a Program to Check Whether Number is Even or Odd
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "The number is Even!" << endl;
    }
    else
    {
        cout << "Number is odd!" << endl;
    }
}
// 2) Write a Program to Check Whether a Character is Vowel or Consonant.
#include <iostream>
using namespace std;
int main()
{
    char c;
    bool LowercaseVowel, UppercaseVowel;
    cin >> c;
    if (LowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'))
    {
        cout << "vowel" << endl;
    }
    else if (UppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'))
    {
        cout << "vowel" << endl;
    }
    else if (!isalpha(c))
    {
        cout << "Error----> c is not an alphabet!" << endl;
    }
    else
    {
        cout << "It is a consonent!" << endl;
    }
}
// // 3) Write a Program to Find Largest Number Among Three Numbers entered by users
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter numbers: " << endl;
    cin >> a >> b >> c;
    if (a > b && a > c)
    {
        cout << "a is the largest number: " << a << endl;
    }
    else if (b > a && b > c)
    {
        cout << "b is the largest number: " << b << endl;
    }
    else if (c > a && c > b)
    {
        cout << "c is the largest number: " << c << endl;
    }
}
//4) Write a Program which accepts coefficients of a quadratic equation from the user and displays the roots (both real and complex roots depending upon the discriminant).
#include <iostream>
using namespace std;
int main()
{
}
//5) Write a Program to Check whether a year entered by user is Leap Year or not
#include <iostream>
using namespace std;
int main()
{
    /*logic
    
    
    */
}