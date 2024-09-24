#include<stdio.h>
int main(){
    FILE* fptr;
    int i,n;
    char str[100];
    char fname[20]="khushi.txt";
    char str1;
    printf("\n write multiple lines in text file and read the file:\n");
    printf("input the number of lines to be written:");
    scanf("%d",&n);
    printf("\n::my name is khushi::\n");
    fptr=fopen(fname,"w");
    for(i=0;i<n+1;i++){
        fgets(str,sizeof str,stdin);
        fputs(str,fptr);

    }
    fclose(fptr);
    fptr=fopen(fname,"r");
    printf("the content of file is %s:\n",fname);
    str1=fgetc(fptr);
    while(str1!=EOF)
    {
        printf("%c",str1);
        str1=fgetc(fptr);
    }
    printf("\n\n");
    fclose(fptr);
    return 0;
    }