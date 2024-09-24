#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    struct date{
        int date;
        int month;
        int year;
    };
    struct date a;
    a.date=7;
    a.month=05;
    a.year=2005;

    struct date b;
    b.date=8;
    b.month=07;
    b.year=2006;

    struct date c;
    c=b;

    printf("comaprison of date c and b\n"); //we have copied the dates of b into c
    bool flag=true;
    if(c.date!=b.date) flag=false;
    if(c.month!=b.month) flag=false;
    if(c.year!=b.year) flag=false;
    if(flag==true) printf("dates are same\n");
    else printf("dates are different\n");


    printf("camparison of date a and b\n");
    bool fl=true;
    if(a.date!=b.date) fl=false;
    if(a.month!=b.month) fl=false;
    if(a.year!=b.year) fl=false;
    if(fl==true) printf("dates are same\n");
    else printf("dates are different");

    return 0;

}
