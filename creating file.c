#include<stdio.h>
int main(void)
{
FILE *fptr;
char filename[20];
printf("enter filename:");
scanf("%s",filename);
fptr=fopen(filename,"w");
if(filename!='\0')
{
printf("file created successfully");
fclose(fptr);
}
else
{
printf("failed to create file");
}
}
