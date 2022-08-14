#include <stdio.h>

typedef struct Bank_Details
{
    int Account_No;
    float Account_Balance;
    char name[50];
} BD;

int main()
{
    BD m1;
    printf("Enter the name of the account holder: ");
    gets(m1.name);
    printf("Enter the account number: ");
    scanf("%d", &m1.Account_No);
    printf("Enter the account balance: ");
    scanf("%f", &m1.Account_Balance);

    printf("%s\n", m1.name);
    printf("%d\n", m1.Account_No);
    printf("%f\n", m1.Account_Balance);
    return 0;
}