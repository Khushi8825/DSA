#include <iostream>
#include <stack>
using namespace std;
void insertAtEnd(stack<int> &s,int &ans,int top){
    if(s.empty()){
        s.push(ans);
        return;
    }
    int temp=s.top();
    s.pop();
    insertAtEnd(s,ans,top-1);
    s.push(temp);
}

int main() {
    stack<int> myStack;
    int n, element;

    cout << "How many elements do you want to push into the stack? ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; ++i) {
        cin >> element;
        myStack.push(element);
    }
    int top = n-1; 
    
    int topelement=myStack.top();
    myStack.pop();
    //int top=myStack.size()-1;
    insertAtEnd(myStack,topelement,n-1);
    while(!myStack.empty()){
        if(myStack.empty()){
            cout<<"stack is empty"<<endl;
        }
        cout<<myStack.top()<<" ";
        myStack.pop();
        top--;
    }
}