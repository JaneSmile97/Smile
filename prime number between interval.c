#include <stdio.h>
int main()
{
    int l, h, i, fl;
    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &l, &h);

    while (l< h)
    {
        fl = 0;

        for(i = 2; i <= l/2; ++i)
        {
            if(l % i == 0)
            {
                fl = 1;
                break;
            }
        }

        if (fl == 0)
            printf("%d ", l);

        ++l;
    }

    return 0;
}
