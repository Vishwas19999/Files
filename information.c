#include<stdio.h>
#include<stdlib.h>
int main()
{
   int i=0,mv=0;
   char ch;
   printf("enter the margin value:");
   scanf("%d",&mv);
   FILE *fp=fopen("A","r");
   FILE *fp1=fopen("newfile.txt","w");
   while((ch=fgetc(fp))!=EOF)
   {
       fputc(ch,fp1);

   if(ch='\n')
   {
      i=0;
   }
   i++;
   if(i==mv)
   {
      while((ch=fgetc(fp))!=' ' && ch!='\n' && ch!='\t' && ch!='\0')
      {
           fputc(ch,fp1);
      }
      if(ch==' ' || ch=='\n')
      {
          fputc('\n',fp1);
          i=0;
      }

   }
}
fclose(fp);
fclose(fp1);
}
