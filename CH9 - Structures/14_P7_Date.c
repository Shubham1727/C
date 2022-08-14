#include <stdio.h>

typedef struct Calendar
{
    int date, month, year;
} Date;

void Display(Date d)
{
    printf("The date is %d/%d/%d\n", d.date, d.month, d.year);
}

int DateCompare(Date d1, Date d2)
{
    if (d1.year > d2.year)
    {
        return 1;
    }
    else if (d1.year < d2.year)
    {
        return 2;
    }
    else if (d1.year == d2.year)
    {
        if (d1.month > d2.month)
        {
            return 1;
        }
        else if (d1.month < d2.month)
        {
            return 2;
        }
        else if (d1.month == d2.month)
        {
            if (d1.date > d2.date)
            {
                return 1;
            }
            else if (d1.date < d2.date)
            {
                return 2;
            }
        }
    }
    else
    {
        return 0;
    }
}

int main()
{
    Date d1, d2;
    int c;

    printf("Enter the date: ");
    scanf("%d", &d1.date);
    printf("Enter the month: ");
    scanf("%d", &d1.month);
    printf("Enter the year: ");
    scanf("%d", &d1.year);

    printf("Enter the date: ");
    scanf("%d", &d2.date);
    printf("Enter the month: ");
    scanf("%d", &d2.month);
    printf("Enter the year: ");
    scanf("%d", &d2.year);

    Display(d1);
    Display(d2);

    c = DateCompare(d1, d2);

    if (c == 1)
    {
        printf("%d/%d/%d comes after %d/%d/%d", d1.date, d1.month, d1.year, d2.date, d2.month, d2.year);
    }
    else if (c == 2)
    {
        printf("%d/%d/%d comes after %d/%d/%d", d2.date, d2.month, d2.year, d1.date, d1.month, d1.year);
    }
    else
    {
        printf("The dates are same");
    }

    return 0;
}