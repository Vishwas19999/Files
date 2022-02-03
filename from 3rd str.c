#include <stdio.h>
#include <stdlib.h>
int main()
{
struct Employee
    {
        char name[10];
        char designation[10];
    };
struct details
    {
        char id[20];
        char branch[20];
    };
struct admin
    {
        struct Employee emp[3];
        struct details det[3];
    };
struct admin a;
FILE *fptr,*fptr1;
int i;
fptr = fopen("employee1.txt", "r");
if(fptr==NULL)
    {
        printf("Unable to open\n");
        exit(1);
    }
printf("Employee Details : \n");
for(i =0;i<3;i++)
 {
     fscanf(fptr,"%s\n%s\n", a.emp[i].name,a.emp[i].designation);
     printf("name=%s\n",a.emp[i].name);
     printf("designation=%s\n",a.emp[i].designation);
     printf("\n");
 }
 fptr1 = fopen("details1.txt","r");
    if(fptr1==NULL)
    {
        printf("Unable to open\n");
        exit(1);
    }
printf("Details are: \n");
for(i=0;i<4;i++)
    {
        fscanf(fptr1, "%s\n%s\n", a.det[i].id,a.det[i].branch);
        printf("id=%s\n ",a.det[i].id);
        printf("branch=%s\n",a.det[i].branch);
        printf("\n");
    }

     FILE *fp;
    fp = fopen("studandcourse.txt", "w");
if(fp==NULL)
    {
        printf("Unable to open\n");
        exit(1);
    }
//printf("Employee Details : \n");
for(i =0;i<3;i++)
 {
     fprintf(fp,"name=%s\ndesination=%s\n", a.emp[i].name,a.emp[i].designation);
printf("\n");
 }
 //printf("\n");
 for(i =0;i<4;i++)
 {
     fprintf(fp,"id=%s\nbranch=%s\n", a.det[i].id,a.det[i].branch);

 }
 return 0;
}

//// fclose(fptr);
//// fclose(fptr1);
// //return 0;
//
//// FILE *fptr=fopen("employee1.txt","r");
////FILE *fptr1=fopen("details1.txt","r");
// /* FILE *fptr2 = fopen("empanddetails.txt", "w");
//  char c;
//  if (fptr2==NULL  )
//  {
//
//      printf("cannot open files!");
//      exit(0);
//  }
//  //c=fgetc(fptr);
//  while(c=fgetc(fptr)!=EOF)
//  {
//      fputc(c,fptr1);
//      //c=fgetc(fptr);
//  }
//  if (fptr2==NULL  )
//  {
//
//      printf("cannot open files!");
//      exit(0);
//  }
//  c=fgetc(fptr1);
//  while(c=fgetc(fptr1)!=EOF)
//  {
//      fputc(c,fptr2);
//     // c=fgetc(fptr1);
//  }*/
//
//
//  /* while ((c = fgetc(fptr)) != EOF)
//      fputc(c, fptr2);
//
//   while ((c = fgetc(fptr1)) != EOF)
//      fputc(c, fptr2);
//
//     // printf("merged employee1.txt and details1.txt into studandcourse.txt");*/
//     // fclose(fptr);
// //fclose(fptr1);
// //fclose(fptr2);
//return 0;
//}
