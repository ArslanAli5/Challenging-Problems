#include<stdio.h>
#include<string.h>

int main(void)
{
    char strin[200];
    FILE *file;
    file = fopen("data.txt","w");
    if (!file)
    {
        printf("Sorry file cannot be opened");
    }
    else
    {
        if (fgets(strin,200,file)!=NULL)
        {
            puts(strin);
        }
        printf("%s",strin);
        fclose(file);
    }

}
