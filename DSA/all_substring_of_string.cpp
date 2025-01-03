#include <iostream>
#include <string>

using namespace std;

void printSubstrings(const string &s) {
    int n = s.length(); 
    cout<<n;
  for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j <= n; ++j) {
          
            // Print the substring from index i to j
            cout << s.substr(i, j - i) << endl;
        }
    }
}

int main() {
    string s = "anshu";  
    printSubstrings(s);      
    return 0;
}