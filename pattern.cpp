//pattern1 rectangle
#include <iostream>
using namespace std;
int main()
{
    int row, col;
    cout << "Enter the number of rows and coloumns: " << endl;
    cin >> row >> col;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
//Implement C++ program to print record of 5 students(roll no, PRN, Name, percentage) using class and object

#include <iostream>
#include <conio.h>
using namespace std;
class student
{
    int rno, gd;
    char name[10];
    float m1, m2, m3, m4;
    int perc;
    long prn;
    char grd;

public:
    void read_data();
    void compute();
    void display();
};
void student::read_data()
{
    cout << "\nEnter the student Roll number: ";
    cin >> rno;
    cout << "Enter the prn: ";
    cin >> prn;
    cout << "Enter the student Name: ";
    cin >> name;
    cout << "Enter the marks of all four: ";
    cin >> m1 >> m2 >> m3 >> m4;
}
void student::compute()
{
    perc = (m1 + m2 + m3 + m4) / 4;
    gd = perc / 10;
    switch (gd)
    {
    case 10:
    case 9:
        grd = 'A';
        break;
    case 8:
        grd = 'B';
        break;
    case 7:
        grd = 'C';
        break;
    case 6:
        grd = 'D';
    default:
        grd = 'F';
        break;
    }
}
void student::display()
{
    cout << "\n**************************\n";
    cout << "Details of" << name;
    cout << "\n**************************\n";
    cout << "\n PRN: " << prn;
    cout << "\n Name is " << name;
    cout << "\n Marks of subject 1 is " << m1;
    cout << "\n Marks of subject 2 is " << m2;
    cout << "\n Marks of subject 3 is " << m3;
    cout << "\n Marks of subject 4 is " << m4;
    cout << "\n Percentage aquired is: " << perc << "%";
    cout << "\n Grade: " << grd;
    cout << "\n****************************\n";
}
int main()
{
    student s[10];
    int n, i;
    cout << "Enter the number of students: ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        s[i].read_data();
    }
    for (i = 0; i < n; i++)
    {
        s[i].compute();
    }
    for (i = 0; i < n; i++)
    {
        s[i].display();
    }
    return 0;
}
//
#include <iostream>
using namespace std;
int main()
{
    int row, col;
    cout << "Enter the number of rows and coloumns";
    cin >> row >> col;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}
//Q2 hollow rectangle
#include <iostream>
using namespace std;
int main()
{
    int row, col;
    cout << "Enter the number of rows and coloumns: ";
    cin >> row >> col;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if (i == 1 || i == row || j == 1 || j == col)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
//q3 inverted pyramid
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
//Q4 half pyramid after 180 degree rotation
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= n - i)
                cout << " ";
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
    return 0;
} //

#include <iostream>
using namespace std;
int main()
{
    int row, col;
    cout << "Enter the rows and coloumns: " << endl;
    cin >> row >> col;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
//
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= n - i)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}
//
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}
//
#include <iostream>
using namespace std;
int main()
{
    int n, count = 1;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
    return 0;
}
//
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        int space = ((2 * n) - (2 * i));
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        int space = ((2 * n) - (2 * i));
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
//checking whether number is prime or not
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cout << "Enter no: " << endl;
    cin >> n;
    bool flag = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << "not prime!";
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "prime no.!";
    }
    return 0;
}
