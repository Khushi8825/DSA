// #include<iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cout << "enter the number of rows and columns"<< endl;
//     cin >> n>>m;
//     for(int row =0;row<n;row++){
//         if(row==0||row==n-1){
//             for(int col=0;col<m;col++){
//                 cout<<"* ";
//             }
//         }
//         else{
//             for(int col=0;col<m;col++)
//             {
//                 if(col==0){
//                     cout<<"* ";
//                 }
//                 else if(col==m-1){
//                     cout << "* ";
//                 }
//                 else{
//                     cout<<"  ";
//                 }
//             }
//         }
//         cout << endl;
//     }


//method 2

#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    for(int row=0;row<n;row++){
        for(int col=0;col<m;col++){
            if(row==0||row==n-1){
                cout<< "* ";
            }
            else{
                if(col==0||col==m-1)
                {
                    cout<<"* ";

                }
                else{
                    cout<<"  ";
                }
            }
        }
        cout<<endl;
    }
    
    }

    
    
    
    


