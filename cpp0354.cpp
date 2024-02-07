#include<bits/stdc++.h> 

using namespace std; 

int main() { 
    int t; 
    cin>>t; 
    while(t--) { 
        string s;
        cin >>s;
        int dem=0;
        for(int i=0;i<s.length();i++) {
            for(int j=0;j<=s.length();j++) {
                if(s[i]==s[j] && s[i]!=s[i+1]) dem++;
            }
            if(dem!=0) cout << s[i] << dem;
            dem=0;
        }
        cout << endl;
        } 
    }