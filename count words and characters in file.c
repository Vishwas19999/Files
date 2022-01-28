#include<stdio.h>
#include<stdlib.h>
void main()
{
  FILE *fp;
  char ch;
  char fname[30];
  int words=0,characters=0;
  printf("enter filename to open:");
  scanf("%s",fname);
  fp=fopen(fname,"r");
  if(fp==NULL)
  {
   printf("error opening file");
  }

   while((ch=fgetc(fp))!=EOF)
   {
       characters++;
     if(ch==' ')
     {
       words++;
     }
   }
  if(characters>0)
  {
      words++;
  }
   printf("\n");
   printf("the number of words in a file are:%d\n",words);
   printf("the number of characters in a file are:%d\n",characters);

   fclose(fp);
   }

