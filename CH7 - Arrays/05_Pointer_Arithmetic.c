#include <stdio.h>

int main()
{
    int i = 69;
    int *ptr;
    ptr = &i;
    printf("The value of ptr is %u\n", ptr);
    ptr++; // ptr=ptr+1
    printf("The value of ptr is %u\n", ptr);
    ptr--;
    printf("The value of ptr is %u\n", ptr);
    // ++ yaa -- krne ke baad 4 ka difference aarha mtlb system me integer ka size 4 bytes ka hai islie har baar 4 increment yaa decrement horha hai
    char c = 'a';
    char *ptrr;
    ptrr = &c;
    printf("The value of c is %c\n", c);
    printf("The value of ptrr is %u\n", ptrr);
    ptrr++;
    printf("The value of ptrr is %u\n", ptrr);
    ptrr--;
    printf("The value of ptrr is %u\n", ptrr);
    // char ke time 1 ka increment and decrement horha hai kyuki char ka size system me 1 byte hai
    return 0;
}