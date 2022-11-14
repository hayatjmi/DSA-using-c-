#include <stdio.h>
#include <conio.h>
int main()
{
    int n ;
    scanf("%d",&n);
    int x = n-1;
    int y = n;
    for (int i = 0; i <= n; i++)
    {

        for (int j = 0; j < n ; j++)
        {
            printf(" ");
        }

        for (int k = y ; k > x;k-- )
        {
            printf("#");
        }
        x--;
        n--;
        printf("\n");
    }
}