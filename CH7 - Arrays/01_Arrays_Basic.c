#include <stdio.h>

int main()
{
    // int marks1, marks2, marks3, marks4; -->itne saare ek tarah ke variables bnana is tedious islie arrays use krte hai
    // marks1 = 87;
    // marks2 = 67;
    // marks3 = 97;
    // marks4 = 77;
    // Better way is arrays
    int marks[4];
    marks[0] = 87; // 0 se islie start kiya kyuki c language me index 0 se n-1 tk jaata hai
    marks[1] = 67;
    marks[2] = 97;
    marks[3] = 77;
    return 0;
}