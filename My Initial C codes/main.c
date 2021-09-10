#include <stdio.h>
#include <conio.h>
int main()
{
    int n, ans;
    printf("enter a number : ");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
    {
        ans = n * i;
        printf("%d x %d = %d\n", n, i, ans);
    }
    return 0;
}
Q2 : write a program of multiplication table 10 in reverse order
#include <stdio.h>
     int
     main()
{
    int ans;
    printf("The table of 10 in reverse order : ");
    for (int i = 10; i; i--)
    {
        ans = 10 * i;
        printf("\n10 x %d = %d\n", i, ans);
    }
    return 0;
}
//Programes on functions
#include <stdio.h>
void display1();
void display2();
void display3();
int main()
{
    display1();
    display2();
    display3();
    return 0;
}
void display1()
{
    printf("Good Morning\n");
}
void display2()
{
    printf("Good AfterNoon\n");
}
void display3()
{
    printf("Good Evening");
}
//Use library functions to print the area of a square with side a
#include <stdio.h>
#include <math.h>
int area_of_square(int a);
int main()
{
    area_of_square(area);
    return 0;
}
int area_of_square(int a)
{
    area = (a * a);
    printf("Area of square with side %d is : %dcm2", a, area);
}
/*chapter 1*/
//Calculate ramesh gross salary
#include <stdio.h>
int main()
{
    float hra, da, basic_salary, gorss_income = 0;
    printf("Enter the basic salary of Ramesh: ");
    scanf("%f", &basic_salary);
    hra = (0.2 * basic_salary);
    da = (0.40 * basic_salary);
    gorss_income = (basic_salary + hra + da);
    printf("Basic salary of Ramesh: %f", basic_salary);
    printf("Dearness allowence of Ramesh is: %f\n", da);
    printf("House rent allowence is: %f\n", hra);
    printf("The gross salary of Ramesh is: Rs %6.01f ", gorss_income);
    return 0;
}