#include<stdio.h>
#include<stdlib.h>
struct employees
{
 int id,age;
 char name[100];
};
int main()
{
    int n;
  struct employees  emp;
  FILE *fptr;
  char employees[100];
printf("enter filename:");
scanf("%s",employees);
  fptr=fopen("employees","w");
  if(fptr==NULL)
  {
  printf("Error opening file");
  exit(1);
  }
  for(n=0;n<5;n++)
  {

  printf("enter name:\n");
  scanf("%s",emp.name);
  printf("enter id:\n");
  scanf("%d",&emp.id);
  printf("enter age:\n");
  scanf("%d",&emp.age);
   printf("\n");
  fwrite(&emp, sizeof(struct employees),1,fptr);

  }


    //fprintf(fptr,"%s %d %d %s",emp.name,emp.id,emp.age);
fclose(fptr);



fptr=fopen("emp","r");
printf("\nemployees details:\n");
//fscanf(fptr,"%[^\n]s %d %d ",emp.name,&emp.id,&emp.agee);
for(n=0;n<5;n++)
{

fread(&emp, sizeof(struct employees),1,fptr);
  printf("name:%s\n",emp.name);
  printf("id:%d\n",emp.id);
  printf("age:%d\n",emp.age);


}
  printf("\nend of file\n");

fclose(fptr);
return 0;
}






