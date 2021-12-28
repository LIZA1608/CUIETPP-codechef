// Problem Code: AMR15A

#include <stdio.h>

int main()
{

    int n;
    int even = 0, odd = 0;
    scanf("%d", &n);
    int a[n];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    if (even > odd)
    {
        printf("READY FOR BATTLE \n");
    }
    else
    {
        printf("NOT READY \n");
    }
    return 0;
}
