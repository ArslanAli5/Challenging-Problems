#include<stdio.h>

int main(void)
{
    int i,size,num;
    int pos=0,neg=0,zero=0,even=0,odd=0;
    printf("Enter the numbers of elements in array: ");
    scanf("%d",&size);
    int array[10]={1,3,5,5,0,-8,7,0,4,-3};
    printf("\nEnter the elements: ");
    for (i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    for (i=0;i<size;i++)
    {
        if (array[i]%2==0)
        {
            even++;
        }
        if (array[i]%2!=0)
        {
            odd++;
        }
        if (array[i]>0)
        {
            pos++;
        }
        if (array[i]<0)
        {
            neg++;
        }
        if (array[i]==0)
        {
            zero++;
        }
    }
    
    printf("\nPositive==%d\nNegative==%d\nEven==%d\nOdd==%d\nZero==%d",pos,neg,even,odd,zero);
}
