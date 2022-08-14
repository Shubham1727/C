#include <stdio.h>

int main()
{
    float physics, chemistry, maths;
    float total;
    printf("Enter your physics marks\n");
    scanf("%f", &physics);

    printf("Enter your chemistry marks\n");
    scanf("%f", &chemistry);

    printf("Enter your maths marks\n");
    scanf("%f", &maths);

    total = (physics + chemistry + maths) / 3;

    if (total < 40 || physics < 33 || chemistry < 33 || maths < 33)
    {
        printf("Your final percentage is %f and you are failed", total);
    }
    else
    {
        printf("Your final percentage is %f and you are passed", total);
    }

    return 0;
}