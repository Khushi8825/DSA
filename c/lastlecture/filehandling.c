#include<stdio.h>
int main(){
    FILE* file=fopen("khushi.txt","r");
    char str[100];
    while(fgets(str,100,file)!=NULL)
    printf("%s",str);
    fclose(file);
    return 0;
}
