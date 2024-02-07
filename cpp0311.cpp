#include<bits/stdc++.h> 
using namespace std; 
int main(){ 
    int t; 
    cin>>t; 
    while(t--){ 
        string s; 
        cin>>s; 
        map<char,int> mp; 
        char max; 
        int dem=0; 
        for(int i=0;i<s.length();i++){ 
            mp[s[i]]++; 
            if(mp[s[i]]>dem){ 
                max=s[i]; 
                dem=mp[s[i]]; 
            } 
        } 
        if(mp[max]-1>s.length()-mp[max]){ cout<<0<<endl; } 
        else cout<<1<<endl; 
    } 
}