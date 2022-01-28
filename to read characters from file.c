#include<stdio.h>
int main(void)
{
FILE *fptr;
char ch,s[100],fHello[100];
int n;
fptr=fopen("Hello","w");
printf("enter the information:");
while((ch=getchar())!='\n')
{
putc(ch,fptr);
}
fclose(fptr);
fopen("Hello","r");
printf("file content:\n");
while((ch=getc(fptr))!=EOF)
{
printf("%c",ch);
}

fclose(fptr);


printf("\nenter the number of characters to read from the file u want:\n");
scanf("%d",&n);

printf("enter the name of file:\t");
scanf("%s",fHello);
fptr=fopen(fHello,"r");
if(fread(s,1,n,fptr)==n)
{

    s[n]='\0';
    puts(s);
}
fclose(fptr);
}




