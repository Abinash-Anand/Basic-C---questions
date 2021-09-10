#include <stdio.h>
int main()
{
    int dis, qty;
    float rate, tot;
    printf("Enter the number of quantity and rate: ");
    scanf("%d %f", &qty, &rate);
    if (qty > 1000)
    {
        dis = 10;
        tot = (qty * rate) - (qty * rate * dis / 100);
        printf("Total expanse = Rs%f\n", tot);
    }
    else
    {
        dis = 0;
        tot = (qty * rate) - (qty * rate * dis / 100);
        printf("Total expanse = Rs%f\n", tot);
    }

    return 0;
}
//
#include <stdio.h>
int main()
{
    int n;
    printf("Enter an a number: ");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("The number %d is even number!", n);
    }
    else
    {
        printf("The number is odd");
    }
    return 0;
}
//
#include <stdio.h>
int main()
{
    int yr;
    printf("Enter the year:");
    scanf("%d", &yr);
    if (yr % 100 == 0)
    {
        if (yr % 400 == 0)
        {
            printf("leap year!");
        }
        else
        {
            printf("Not a leap year");
        }
    }
    else
    {
        if (yr % 4 == 0)
        {
            printf("leap year!");
        }
        else
        {
            printf("Not a leap year");
        }
    }
    return 0;
}
//
#include <stdio.h>
int main()
{
    int yr;
    printf("Enter the year: ");
    scanf("%d", &yr);
    if (yr % 100 == 0 && yr % 400 == 0 || yr % 4 == 0)
    {
        printf("leap year");
    }
    else
    {
        printf("not a leap year ");
    }
    return 0;
}