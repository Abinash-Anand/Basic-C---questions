//2.2 If a five digit number is input through the keyboard write a program to reverse the number
#include <stdio.h>
int main()
{
    int n, d5, d4, d3, d2, d1;
    long int revnum;
    printf("Enter a five digit: ");
    scanf("%d", &n);
    d5 = (n % 10);
    n = (n / 10);
    d4 = (n % 10);
    n = (n / 10);
    d3 = (n % 10);
    n = (n / 10);
    d2 = (n % 10);
    n = (n / 10);
    d1 = (n % 10);
    revnum = (d5 * 10000 + d4 * 1000 + d3 * 100 + d2 * 10 + d1 * 1);
    printf("The reverse order of the 5 digit number is %d\n: ", revnum);
    return 0;
}

#include <stdio.h>
#include <conio.h>

int main()
{
    int marks;

    printf("Enter your marks between 0 to 100\n");
    scanf("%d", &marks);

    switch (marks / 10)
    {
    case 10:
    case 9:
        /* Marks between 90-100 */
        printf("Your Grade : A\n");
        break;
    case 8:
    case 7:
        /* Marks between 70-89 */
        printf("Your Grade : B\n");
        break;
    case 6:
        /* Marks between 60-69 */
        printf("Your Grade : C\n");
        break;
    case 5:
    case 4:
        /* Marks between 40-59 */
        printf("Your Grade : D\n");
        break;
    default:
        /* Marks less than 40 */
        printf("You failed\n");
    }

    getch();
    return 0;
}