#include<stdio.h>

int main(){
    int i=5;
    printf("%d\n", i++);
    // i++ --> Pehle print fer increment
    // ++i --> Pehle increment fer print
    // Same goes for --i and i-- but yeh decrement operator hai
    printf("%d\n", i);
    printf("%d\n", ++i);
    i+=10; // --> This increments i by 10 i.e => i=i+10
    printf("%d\n", i);
    return 0;
}