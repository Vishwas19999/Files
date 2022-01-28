#include<stdio.h>
int main(void)
{
FILE *fptr;
char ch;
fptr=fopen("username1.txt","w");
printf("enter the name:");
while((ch=getchar())!='\n')
{
putc(ch,fptr);
}
fclose(fptr);
fopen("username1.txt","r");
printf("\nfile content;\n");
while((ch=getc(fptr))!=EOF)
{
printf("%c",ch);
}
printf("\nend of file:\n");
fclose(fptr);


}
