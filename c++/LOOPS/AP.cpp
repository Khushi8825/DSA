#include<iostream>
 using namespace std;
 int main(){
    int n;
    cout<<"terms upto which AP is required:"<<endl;
    cin>>n;
    int a;
    cout<<"first term of AP:"<<endl;
    cin>>a;
    int d;
    cout<<"common difference of AP";
    cin>>d;
    // for(int i=1;i<=n;i++){
    //     int b=1+(i-1)*2;
    //     cout<<b<<endl;
    // }

    // for(int i=1;i<=n;i++){
    //     int b=a+(i-1)*d;
    //     cout<<b<<endl;
    // }
    

    //not valid 
    //kyuki humme n terms chahiye thi or isse 
    //sirf n-1 terms mili.
    //ye sari AP ke liye work nhi krega.
    //tb use kro jb user se input nhi lena ho
    //  for(int i=a;i<=d*n+1;i+=d)
    //  {
    //     cout<<i<<" ";
    //  }

    // for(int i=1;i<=n;i++){
    //     cout<<a<<" ";
    //     a = a+d;
    // }
 }