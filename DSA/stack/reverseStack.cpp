#include <iostream>
#include <stack>
using namespace std;
void reverse(stack<int> &s,int &ans){
    if(s.empty()){
        s.push(ans);
        return;
    }
    int temp=s.top();
    s.pop();
    reverse(s,ans);
    s.push(temp);
}
void helper(stack<int> &s){
    //int top=s.size()-1;
    if(s.empty()){
        return;
    }
    int ans = s.top();
    s.pop();
    helper(s);
    reverse(s,ans);
   
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
    //int size=myStack.size()-1;
    helper(myStack);
    while(!myStack.empty()){
        cout<<myStack.top()<<" ";
        myStack.pop();

    }
    cout<<endl;

    
}