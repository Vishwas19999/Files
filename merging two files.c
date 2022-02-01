#include <stdio.h>
#include <stdlib.h>

int main()
{

   FILE *fp1 = fopen("to read a characters from file", "r");
   FILE *fp2 = fopen("writing and reading file", "r");


   FILE *fp3 = fopen("filename", "w");
   char c;

   if (fp1 == NULL || fp2 == NULL || fp3 == NULL)
   {
         puts("Could not open files");
         exit(0);
   }
   while ((c = fgetc(fp1)) != EOF)
      fputc(c, fp3);

   while ((c = fgetc(fp2)) != EOF)
      fputc(c, fp3);

   printf("Merged read characters from file and writing and reading file into filename");

   fclose(fp1);
   fclose(fp2);
   fclose(fp3);
   return 0;
}
