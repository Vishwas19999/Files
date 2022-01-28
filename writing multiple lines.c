#include<stdio.h>
void main()
{
  char fname[20]="A";
  char str[30];
  char str1;
  FILE *fp;
  int n,i;

   printf("enter the number of lines:");
  scanf("%d",&n);
  fp=fopen(fname,"w");
  if(fp==NULL)
  {
    printf("error! opening file");

  }

  for(i=0;i<n+1;i++)
  {
  fgets(str,sizeof(str),stdin);
  fputs(str,fp);
  }
  fclose(fp);


fp=fopen(fname,"r");
  if(fp==NULL)
  {
    printf("error! opening file");

  }
  str1=fgetc(fp);
  while(str1!=EOF)
  {
      printf("%c",str1);
      str1=fgetc(fp);
  }
  printf("\n");

  fclose(fp);
  return 0;
}

