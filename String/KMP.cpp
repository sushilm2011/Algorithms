#include <bits/stdc++.h>
using namespace std;

vector<int> _lps(string s){
    int i=1, len = 0;
    int n = s.length();
    vector<int> lps;
    lps.push_back(len);
    while(i<n){
        if(s[i] == s[len]){
            len++;
            lps.push_back(len);
            i++;
        }else{
            if(len!=0){
                len = lps[len-1];
            }else{
                lps.push_back(len);
                i++;
            }
        }
    }
    return lps;
}

int main(){
    string text;
    string pattern;
    cin>>text;
    cin>>pattern;
    vector<int> lps = _lps(pattern);
    int n = text.length(), i=0, j=0;
    while(i<n){
        if(text[i] == pattern[j]){
            i++;
            j++;
        }else{
            if(j==0){
                i++;
            }else
                j = lps[j-1];
        }
        if(j==pattern.length()){
            cout<<"Found "<<i-j<<endl;
            j = lps[j-1];
        }
    }
    return 0;
}
