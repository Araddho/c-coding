#include <stdio.h>
#include <string.h>
int main()
{
    FILE *file;
    char k[10000];
    int i;
    gets(k);
    scanf("%d",&i);
    file=fopen("file.txt.","a");
    if(file==NULL)
    {
        printf("the file could not be created");
    }
    else
    {
        printf("the file was created");
        fprintf(file, "%s , %d",k,i);
        fprintf(file,"\n");
        fclose(file);

    }
    return 0;

}
