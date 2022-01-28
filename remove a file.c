#include<stdio.h>
int main()
{

    int del=remove("remove a file");
    if(!del)
    {

        printf("the file is removed successfully");
    }
    else
    {

        printf("the file is not removed");
    }
}
