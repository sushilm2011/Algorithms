#include<bits/stdc++.h>
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
    string s = "AAABAAAAAABAAAAAAAAAAAA";
    vector<int> lps = _lps(s);
    for(vector<int>::iterator it=lps.begin(); it!=lps.end(); it++){
        cout<<(*it)<<" ";
    }
    cout<<endl;
	return 0;
}