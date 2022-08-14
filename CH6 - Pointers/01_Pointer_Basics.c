#include <stdio.h>

int main()
{
    int i = 8;
    int *j;
    j = &i; // j me i ka address stored hai
    int **k;
    k = &j; // k me j ka address stored hai
    // int ***l;
    // l=&k;

    printf("Address of i = % u\n", &i);
    printf("Address of i = % u\n", j);
    printf("Address of j = % u\n", &j);
    printf("Address of j = % u\n", k);
    printf("Address of k = % u\n", &k);
    printf("Value of i = % d\n", i);
    printf("Value of i = % d\n", *(&i));
    printf("Value of i = % d\n", *j);
    printf("Value of i = % d\n", *(*k));
    printf("Value of j = % d\n", *k);
    printf("Value of i = % d\n", **(&j));

    return 0;
}