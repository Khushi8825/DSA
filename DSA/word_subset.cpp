#include<iostream>
#include<vector>
#include<string>
using namespace std;
    // bool subset(string words1,string words2){
    //     if(words2.empty()) return false;
    //     int count=0;
    //     int i=0;
    //     int j=0;
    //     for(;i<words1.size();i++){
    //         if(j<words2.size()&&words2[j]==words1[i]){
    //             j++;
    //         }
             
    //     }
       
    //      if(j==words2.size()) return true;
    //     else return false;
        
    // }
    bool subset(const string& words1, const string& words2) {
    if (words2.empty()) return false;

    int j = 0;
    for (int i = 0; i < words1.size(); i++) {
        if (j < words2.size() && words1[i] == words2[j]) {
            j++; // Match hone par words2 ke pointer ko increment karo
        }
        if (j == words2.size()) return true; // Agar poora words2 match ho jaye
    }
    return false; // Agar match nahi ho paaya
}

    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
    vector<string> result;

    for (const string& word1 : words1/*int i=0;i<words2.size();i++*/) { // Har word1 ke liye
        bool isUniversal = true; // Assume karo ki yeh universal hai

        for (const string& word2 : words2) { // Sabhi words2 ke liye check karo
            if (!subset(word1, word2)) { // Agar subset fail ho gaya
                isUniversal = false; // Universal nahi hai
                break; // Loop se bahar niklo
            }
        }

        if (isUniversal) result.push_back(word1); // Agar universal hai to result me add karo
    }

    return result;
}

    // vector<string> wordSubsets(vector<string> words1, vector<string> words2) {
    //     vector<string> a;
    //    for(int i=0;i<words1.size();i++){
    //     bool isUniversal=true;
    //     //int count=0;
    //     for(int j=0;j<words2.size();j++){
    //         bool ans=subset(words1[i],words2[j]);
    //         if(!ans) isUniversal=false  ;//count++;
    //         break;
    //     }
    //     if(isUniversal) a.push_back(words1[i]);
    
    //    } 
    //    return a;
    // }
//using namespace std;
int main(){
    vector<string> words1{"apple","amazon","google","leetcode"};
    vector<string> words2{"lo","eo"};
    vector<string> a = wordSubsets(words1,words2);
    for(string i:a){
        cout<<i<<" ";
    }
}