#include<iostream>
using namespace std;
int main(){
    // float f=10.5;
    // float p=2.5;
    // float* ptr=&f;
    // (*ptr)++;
    // cout<<(*ptr)<<" "<< f <<" "<< p;
   
    // int *ptr=0;
    // int a=10;
    // *ptr = a;
    // cout<< *ptr <<endl;
    
    // int arr[] = {4,5,6,7};
    // int* p=(arr+1);
    // cout<<arr<<endl;
    // cout<<p<<endl;
    // cout<<*p<<endl;
    // cout<< *arr+9;
    // return 0;
    
    // char b[] = "xyz";
    // char *c= &b[0];
    // cout << c << endl;
    

    // char s[] = "hello";
    // char* p = s;
    // cout<< s[0]<<" "<<p[0];


    // char arr[20];
    // int i;
    // for(i=0; i < 10; i++){
    //     *(arr + i ) = 65 + i;

    // }
    // *(arr + i) = '\0';
    // cout << arr;
    // return 0;
    

    // char * ptr;
    // char str[]= "abcdefg";
    // ptr = str;
    // ptr += 5;
    // cout<< ptr << endl;

    // int num[5];
    // int * p;
    // p = num;
    // *p = 10;
    // p = &num[2];
    // *p = 20;
    // p--;
    // *p = 30;
    // p = num +3;
    // *p = 40;
    // p = num;
    // *(p + 4) = 50;
    // for(int n = 0; n<5; n++){
    //     cout<<num[n]<<",";
    // }
    // return 0;


//     char st[] = "ABCD";
//     for(int i = 0; st[i] != '\0'; i++){
//         cout<< st[i] << *(st)+i << *(st+i) << i[st] << endl;
//     }
//  return 0;


float arr[5] = {12.5,10.0,13.5,90.5,0.5};
float *ptr1 = &arr[0];
float *ptr = ptr1 + 3;
cout<< *ptr <<" ";
cout<< ptr - ptr1;
return 0;


    // int a=7;
    // int b=17;
    // int* c=&b;
    // *c=7;
    // cout<< a << " " << b << endl;

}