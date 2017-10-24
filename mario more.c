#include<stdio.h>
#include<cs50.h>

int main (void)
{

    int Height;
    do
    {
        printf("Height:\n");
        Height = get_int( );
    }
    while(Height < 0 || Height > 23);

    for(int i = 0;i < Height; i++)
    {
    for(int s = - Height + 2; s<=-i;s++)
    {
    printf(" ");
    }
     for(int h = 0; h<=i; h++)
     {
         printf("#");
     }
    for(int t = Height - 1; t<=Height; t++)
    {
        printf(" ");
    }
     for(int j = 0; j<=i; j++)
     {
         printf("#");
     }
         printf("\n");
    }

}