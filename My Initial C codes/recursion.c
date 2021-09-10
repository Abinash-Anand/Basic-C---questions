#include <stdio.h>
int factorial(int x);
int main()
{
    int a = 10;
    printf("The factorial of %d is %d\n", a, factorial(a));
    return 0;
}
int factorial(int x)
{
    printf("The factorial (%d) is called\n", x);
    if (x == 1 || x == 0)
    {
        return 1;
    }
    else
    {
        return x * factorial(x - 1);
    }
}
//
#include <stdio.h>
int avg(int x, int y, int z);
int main()
{
    int a, b, c;
    printf("enter the three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("The average of three numbers is %d", avg(a, b, c));

    return 0;
}
int avg(int x, int y, int z)
{
    int average;
    average = (x + y + z) / 3;
    return average;
}
//
#include <stdio.h>
float temp(float temp_cel);
int main()
{
    float temperature;
    printf("Enter the temp in celcius: ");
    scanf("%f", &temperature);
    printf("The temperature in fahrenheit is %f", temp(temperature));
    return 0;
}
float temp(float temp_cel)
{
    float temp_fahren;
    temp_fahren = (temp_cel * 9 / 5) + 32;
}
//
#include <stdio.h>
#include <math.h>
float force(float mass2);
int main()
{
    float m2;
    printf("Enter the values of  mass2\n: ");
    scanf("%f", &m2);
    printf("The force of attraction exerted by the earth on the object of mass m is %f N(m/kg)2\n", force(m2));
    return 0;
}
float force(float mass2)
{
    float force, gravity_G = 6.674 * pow(10, -11), mass1 = 5.972 * pow(10, 24), radius_e = 6371000;
    force = gravity_G * ((mass1 * mass2) / radius_e);
}
//
#include <stdio.h>
int main()
{
    int n1 = 0, n2 = 1, n3, i, number;
    printf("Enter the number of elements:");
    scanf("%d", &number);
    printf("\n%d %d", n1, n2);
    for (i = 2; i < number; ++i)
    {
        n3 = n1 + n2;
        printf(" %d", n3);
        n1 = n2;
        n2 = n3;
    }
    return 0;
}
//
#include <stdio.h>
float pi = 3.14;
float area(float radius);
float circumference(float radius);
void main()
{
    float radius;
    printf("Enter radius: ");
    scanf("%f", &radius);
    printf("Area of the circle is: %f\n", area(radius));
    printf("Circumference of the circle is: %f\n", circumference(radius));
}
float area(float radius)
{
    return pi * radius * radius;
}
float circumference(float radius)
{
    return 2 * pi * radius;
}
//
#include <stdio.h>
#include <string.h>
int main()
{
    char s1[100], s2[100];
    int i = 0, flag;
    printf("Please Enter 1st string: ");
    scanf("%s", &s1);
    printf("Please Enter 2nd string: ");
    scanf("%s", &s2);
    flag = 0;
    for (i = 0; s2[i] != '\0' && s1[i] != '\0'; i++)
    {
        if (s1[i] != s2[i])
        {

            flag = 1;
            break;
        }
    }

    if (flag == 0 && s2[i] == '\0' && s1[i] == '\0')
        printf("same");
    else
        printf("same no");

    return 0;
}
