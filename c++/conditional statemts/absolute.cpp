#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n >= 0)
        cout << n;
    else
        cout << -n;

    // alternative method
    //  if(n<0) n=-n;
    //  cout<<n;
}