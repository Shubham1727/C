#include <stdio.h>
#include <stdbool.h>
#include <string.h>
/*unsigned int euclid(unsigned int m, unsigned int n)
{
    unsigned int r;
    int opcount = 0;
    while (n != 0)
    {
        opcount++;
        r = m % n;
        m = n;
        n = r;
    }
    printf("couter = %d", opcount);
    return m;
}
int main()
{
    unsigned int m, n;
    printf("enter two no.s");
    scanf("%d", &m);
    scanf("%d", &n);
    printf("The series is %d", euclid(m, n));
}*/

void sieve(int n)
{
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i<= n; i += p)
            {
                prime[i] = false;
            }
        }
    }
    for (int p = 2; p <= n; p++)
    {
        if (prime[p])
        {
            printf("%d", p);
        }
    }
}
int main()
{
    int n = 30;
    //printf("enter n :");
    //scanf("%d", &n);
    printf("the prime nos are : %d", n);
    sieve(n);
    return 0;
}