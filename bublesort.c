#include<stdio.h>

int main(void)
{
    int i,j,hold,k=0;
    int array[10]={1,4,5,2,10,7,9,8,3,6};
    for (i=10;i>0;i--)
    {
        int swap_counter=0;
        for (j=0;j<i;j++)
        {
            if (array[j]>array[j+1])
            {
                hold = array[j];
                array[j]=array[j+1];
                array[j+1]=hold;
                swap_counter++;
            }
        }
        if (swap_counter==0)
        {
            break;
        }
    }
    for (i=0;i<10;i++)
    {
        printf("{%d ",array[i]);
    }

}
