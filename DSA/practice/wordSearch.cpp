// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<limits.h>

// using namespace std;
// bool Search(vector<vector<char>> word,string target){
//     int k=0;
//     for(int i=0;i<word.size();i++){
//         for(int j=0;j<word[0].size();j++){
//             if (word[i][j]==target[k]){
//                 k++;

//             }
//         }
//     }
    
// }
// int main(){
//     vector<vector<char>> word;
//     int row;
//     int cols;
//     cout<<"Enter the number of rows:";
//     cin>>row;
//     cout<<"Enter the number of cols:";
//     cin>>cols;
//     for(int i=0;i<row;i++){
//         vector<char> r;
//         for(int j=0;j<cols;j++){
//             char a;
//             cin>>a;
//             r.push_back(a);
//         }
//         word.push_back(r);
//     }
//     for(int i=0;i<row;i++){
//         for(int j=0;j<cols;j++){
//             cout<<word[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }
#include<bits/stdc++.h>
using namespace std;
bool check(vector<vector<char>> &mat,string &s,int r,int c,int idx)
{
    if (idx==s.size()) return true ;
    if (r<0||c<0||r>=mat.size()||c>=mat[0].size()||mat[r][c]!=s[idx])
    {
        return false;
    }
    char temp=mat[r][c];
    mat[r][c]='#';
    bool x=check(mat,s,r+1,c,idx+1)||check(mat,s,r-1,c,idx+1)||check(mat,s,r,c+1,idx+1)||check(mat,s,r,c-1,idx+1);
    mat[r][c] = temp;
    return x;
}
bool exist(vector<vector<char>> &mat,string s)
{
    int rows=mat.size(),cols=mat[0].size();
    for (int r=0;r<rows;r++)
    {
        for (int c=0;c<cols;c++)
        {
            if (check(mat,s,r,c,0)){
                return true;
            }
        }
    }
    return false;
}

int main()
{
    vector<vector<char>> mat = {{'T','E','E'},{'S','G','K'},{'T','E','L'}} ;
    string s = "ESEG";
    int ans = exist(mat,s) ;
    if(ans==1) cout<<"True" ;
    else if(ans==0) cout<<"False" ;
}
