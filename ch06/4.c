#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char ch = 'A';

    for(int i=0;i<6;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("%c",ch++);
        }
        printf("\n");
    }

    system("pause");
    return 0;
}
