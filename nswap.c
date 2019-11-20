#include<stdio.h>

int main(void)
{
    int hold,i,j=0;
    int array[10]={1,2,3,4,5,6,7,8,9,10};
    for (i=0;i<5;i++)
    {
        hold=array[j+1];
        array[j+1]=array[j];
        array[j]=hold;
        j=j+2;
    }
    printf("{");
    for (i=0;i<10;i++)
    {
        printf("%d ",array[i]);
    }
    printf("}");
}
