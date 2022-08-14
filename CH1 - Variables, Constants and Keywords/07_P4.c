#include<stdio.h>

int main(){
    int P,R,Y,S;
    printf("Enter the principle interest\n");
    scanf("%d",&P);
    printf("Enter the rate\n");
    scanf("%d", &R);
    printf("Enter the years\n");
    scanf("%d", &Y);
    S=P*R*Y/100;
    printf("The value of principle interest is %d", S);
    return 0;
}