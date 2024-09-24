 #include<iostream>
 using namespace std;
 int main(){
    int x;
    cout<<"Enter x";
    cin>>x;
    for(int i=2;i<=x/2;i++){
        if(x%i==0){
            cout<<"composite";
            break;
            
            
        }
        else{
            cout<<"prime";
        }
    }

 }