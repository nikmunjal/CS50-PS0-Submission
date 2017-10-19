#include<stdio.h>
#include<cs50.h>

int main (void)
{
    printf("Height:\n");
    int Height;
    do
    {
        Height = get_int( );
    }
    while(Height < 0 || Height > 23);

    for(int i = 0;i < Height; i++)
    {
    for(int s = -Height+2; s<=-i;s++)
    {
    printf(" ");
    }
     for(int h = -1; h<=i; h++)
     {
         printf("#");
     }
         printf("\n");
    }

}