#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    string email="";
    for(int i=0;i<s.length();i++) {
        if(s[i]>='A' && s[i]<='Z') s[i]=s[i]+32;      
    }
    s[0]-=32;
    for(int i=0;i<s.length();i++) {
        if(s[i]==' ') {
            s[i+1]-=32;
            
        }     
    }
    


    int t=0;
    for(int i=s.length()-1;i>=0;i--) {
        if(s[i]==' ') {
            t=i;
            break;
        }     
    }
    for(int i=0;i<t;i++) {
        cout << s[i];
}   
    cout << ",";
    for(int i=t;i<s.length();i++) {
       if(s[i]>='a' && s[i]<='z') s[i]=s[i]-32;     
       cout << s[i];
}   
}
    
    
    
    
    
    

