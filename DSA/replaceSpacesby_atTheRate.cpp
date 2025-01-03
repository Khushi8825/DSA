#include<iostream>
#include<cstring>
using namespace std;
void replaceSpace(char list[]){
    int i=0;
    int n=strlen(list);
    for(i=0;i<n;i++){
        if(list[i]==' '){
            list[i]='@';
        }
    }
}
int main(){
    char sentence[100];
    cin.getline(sentence,100);

    replaceSpace(sentence);
    cout<<"printing sentence"<<endl<<sentence<<endl;


}