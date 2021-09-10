//making a simple basic calculator using switch
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Please enter the two numbers: " << endl;
    cin >> a >> b;
    char op;
    int c;
    cin >> op;
    switch (op)
    {
    case '+':
        c = a + b;
        cout << "The addition of the two numbers is: " << c << endl;
        break;
    case '-':
        c = a - b;
        cout << "The substraction of the 2 numbers is: " << c << endl;
        break;
    case '*':
        c = a * b;
        cout << "The multiplication of 2 numbers is: " << c << endl;
        break;
    case '/':
        c = a / b;
        cout << "The division of two numbers is: " << c << endl;
        break;
    }
    return 0;
}
//write a program to find whether an alphabet is a vowel or a consonants
#include <iostream>
using namespace std;
int main()
{
    char alpha;
    cout << "Input an alphabet: " << endl;
    cin >> alpha;
    switch (alpha)
    {
    case 'a':
        cout << "a is a vowel!";
        break;
    case 'A':
        cout << "A is a vowel!";
        break;
    case 'e':
        cout << "e is a vowel!";
        break;
    case 'E':
        cout << "E is a vowel!";
        break;
    case 'i':
        cout << "i is a vowel!";
        break;
    case 'I':
        cout << "I is a vowel!";
        break;
    case 'o':
        cout << "o is a vowel!";
        break;
    case 'O':
        cout << "O is a vowel!";
        break;
    case 'u':
        cout << "u is a vowel!";
        break;
    case 'U':
        cout << "U is a vowel!";
        break;
    case 'y':
        cout << "y is more considered as vowel than consonant but debate still going on!!";
        break;
    case 'Y':
        cout << "Y is more considered as vowel than consonant but debate still going on!!";
        break;
    default:
        cout << "It is a consonant!!";
    }
}
