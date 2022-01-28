
#include <stdio.h> 
int main(void)
 {​​​​​​​  

  int i;  

  char ch;  

  FILE *fptr;  

  fptr = fopen("studentdetails1.txt", "w");  
 if (fptr != NULL) {​​​​​​​

    printf("File created successfully!\n");

  }​​​​​​​

  else {​​​​​​​

    printf("Failed to create the file.\n");

   

    return -1;

  }​​​​​​​   // write data in file

  for (ch = 'A'; ch <= 'Z'; ch++) {​​​​​​​

    putc(ch, fptr);

  }​​​​​​​   // close connection

  fclose(fptr);   // reference

  printf("\nReference:\n");

  for (i = 0; i < 26; i++) {​​​​​​​

    printf("%d ", (i+1));

  }​​​​​​​

  printf("\n");

  for (i = 65; i <= 90; i++) {​​​​​​​

    // print character

    printf("%c", (i));    

    if (i - 65 >= 9) {​​​​​​​

      printf("  ");

    }​​​​​​​

    else {​​​​​​​

      printf(" ");

    }​​​​​​​

  }​​​​​​​

  printf("\n\n"); 

  // open file for reading

  fptr = fopen("studentdetails1.txt", "r");  
printf("Curr pos: %ld\n", ftell(fptr));  

  fseek(fptr, 0, 0); //SEEK_SET

  ch = getc(fptr);

  printf("1st char: %c\n", ch);  
 printf("Curr pos: %ld\n", ftell(fptr));  

  fseek(fptr, 4, 0); //0-seek set/1-seek cur/2 seek end

  ch = getc(fptr);

  printf("5th char: %c\n", ch); 
  printf("Curr pos: %ld\n", ftell(fptr));   // read 26th char in the file

  fseek(fptr, 25, 0);//SEEk_set

  ch = getc(fptr);

  printf("26th char: %c\n", ch); 
  printf("Curr pos: %ld\n", ftell(fptr));  

  printf("rewind\n");

  rewind(fptr);  
 printf("Curr pos: %ld\n", ftell(fptr));  

  fseek(fptr, 9, SEEK_SET);

  ch = getc(fptr);

  printf("10th char: %c\n", ch);  
 printf("Curr pos: %ld\n", ftell(fptr));   // read 15th char in the file

  fseek(fptr, 4, 1);    // move 4 bytes forward from current position

  ch = getc(fptr);

  printf("15th char: %c\n", ch);  
 printf("Curr pos: %ld\n", ftell(fptr));   // read 20th char in the file

  fseek(fptr, 4, SEEK_CUR); //seek_cur   // move 4 bytes forward from current position

  ch = getc(fptr);

  printf("20th char: %c\n", ch);  
 printf("Curr pos: %ld\n", ftell(fptr));   // close connection

  fclose(fptr);  
return 0;

}​​​​​​​



