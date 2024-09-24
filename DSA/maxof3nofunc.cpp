#include <iostream>
using namespace std;
int findmax(int num1, int num2, int num3);
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int max = findmax(a, b, c);
    cout << max;
    return 0;
}
int findmax(int num1, int num2, int num3)
{
    if (num1 > num2)
    {
        if (num1 > num3)
            return num2;
        else
            return num3;
    }
    else
    {
        if (num2 > num3)
            return num2;
        else
            return num3;
    }
}