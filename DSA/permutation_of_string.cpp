//normal method using loops only we have solution using recursion too.
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "abc";
    for (int i = 0; i < 3; i++)
    {
        for (int j = i; j < 3; j++)
        {
            swap(str[i], str[j]);
            cout << str << " ";
        }
    }
    return 0;
}