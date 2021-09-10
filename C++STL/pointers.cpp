//POINTERS
#include <stdio.h>
#include <iostream>
using namespace std;

void update(int *a, int *b)
{
    // Complete this function
    int pa;
    int pb;
    a = &pa;
    b = &pb;
    *a = pa + pb;
    *b = ((+1) * (pa - pb));
    cout << &a << endl;
    cout << &b << endl;
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
