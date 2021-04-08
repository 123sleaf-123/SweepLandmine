#include <stdio.h>
void Setlm (int *lm[30][16]);//A function aims at seting landmines on the table
void Swplm (int *lm, int *sight, int *num);//A function is the core algorithm to sweep land mines
void spylm (int *lm, int *sight, int *num);
void Paint (int *lm[30][16]);

void Setlm (int *lm[30][16])
{
    int i,j;
    while(1){
        scanf("%d,%d",&i,&j);
        if(i < 0 || i > 1000 || j < 0 || j > 1000){
            break;
        }
        while(10 == getchar());
        lm[i][j] = 1;
    }
}

void Paint (int *lm[30][16])
{
    int i=0,j=0;
    while (j >= 0)
    {
        while (i < 1001)
        {
            if(lm[i][j] == 0){
                printf(" ");
            }
            else{
                printf("*");
            }
            ++i;
        }
        printf("\n");
        ++j;
    }
}

int main (void)
{
    int *lm[30][16];
    int *sight[30][16];
    int *num[30][16];
    Setlm(lm[30][16]);

    return 0;
}