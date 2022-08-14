#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("sample.txt", "r"); // for reading the file
    // ptr = fopen("sample.txt", "w"); // for writing the file
    // At a time ek hi cheej chl skti hai yaa read kro yaa write kro
    return 0;
}