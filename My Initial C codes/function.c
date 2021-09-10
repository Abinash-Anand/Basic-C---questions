//Q1 Write a C program to calculate the area and circumference of circle
#include <stdio.h>

int main()
{
    float area_of_circle, circumference, r, pi = 3.14;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    area_of_circle = (pi * (r * r));
    circumference = (2 * pi * r);
    printf("\nThe area of circle is: %6.01f cm2 and\nThe circumference of circle is:%6.01f cm", area_of_circle, circumference);
    return 0;
}
//Q2 write a program to convert temp from degree celcius to fahrenheit
#include <stdio.h>
int main()
{
    float temp_fahren, temp_cel;
    printf("Enter the temperature of your environment: ");
    scanf("%f", &temp_cel);
    //converting celcius into fahrenheit temp
    temp_fahren = (temp_cel * 9 / 5) + 32;
    printf("The temperature of the environment is %6.01f F", temp_fahren);
}
//Q3 Write a program to print all the ASCII value table(values and associated charaters)
#include <stdio.h>
int main()
{
    printf("The ASCII CODE:\n ");
    for (int i = 0; i <= 255; i++)
    {
        printf("%c = %d\n", i, i);
    }
    return 0;
}
//Q4 write a program to find the smallest Element in array
#include <stdio.h>
int main()
{
    int arr[] = {10, 11, 7, 20, 6};
    int length = sizeof(arr) / sizeof(arr[0]);
    int min = arr[0];
    for (int i = 0; i < length; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    printf("Smallest element present in given array: %d\n", min);
    return 0;
}
//Q5 write a program to reverse the string without using string function
#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    int i, len;
    char c;

    printf("Enter the string you want to reverse : \n");
    gets(str);

    len = strlen(str);
    for (i = len - 1; i >= 0; i--)
    {
        c = str[i];
        printf("%c", c);
    }
    return 0;
}
//Q6 Write a program to find the sum of natural numbers using recursion
#include <stdio.h>
int sum(int x);
int main()
{
    int n;
    printf("Enter the value of n \n");
    scanf("%d", &n);
    printf("sum of first n natural numbers is %d \n", sum(n));
    return 0;
}
int sum(int x)
{
    if (x == 0)
        return 0;
    else if (x == 1)
        return 1;
    else
        return (x + sum(x - 1));
}
//Q7 write a program to store book information using structure.(book id, book title,price)
#include <stdio.h>
#include <string.h>
struct book
{
    int id;
    char title[100];
    int price;
};
int main()
{
    struct book b1, b2, b3;

    printf("Enter the id, title and price of book 1 \n");
    scanf("%d %s %d", &b1.id, strcpy(b1.title, "%s"), &b1.price);

    printf("Enter the id, title and price of book 2 \n");
    scanf("%d %s %d", &b2.id, strcpy(b2.title, "%s"), &b2.price);

    printf("Enter the id, title and price of book 3 \n");
    scanf("%d %s %d", &b3.id, strcpy(b3.title, "%s"), &b3.price);

    printf("The id, title and price of book 1 is %d, %s, %d!!\n", b1.id, b1.title, b1.price);
    printf("The id, title and price of book 2 is %d, %s, %d!!\n", b2.id, b2.title, b2.price);
    printf("The id, title and price of book 3 is %d, %s, %d!!\n", b3.id, b3.title, b3.price);

    return 0;
}
//Q8 write a program to print the following pattern
#include <stdio.h>
int main()
{
    int n, i, j, k;
    n = 7;
    for (i = n; i >= 1; i--)
    {
        for (j = i; j <= n; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }
    return 0;
}
#include <stdio.h>
//function prototype
void morning();
void afternoon();
void evening();
int main()
{
    //function call
    morning();
    afternoon();
    evening();
    return 0;
}

void morning()
{
    printf("Good morning!\n");
}
void afternoon()
{
    printf("good afternoon\n");
}
void evening()
{
    printf("good evening\n");
}
#include <stdio.h>
#include <math.h>
int area_square(int a);
int main()
{
    area_square(5);
    printf("The area of the square is: %d", area);
    return 0;
}
int area_square(int a)
{
    int area;
    area = (a * a);
    return area;
}