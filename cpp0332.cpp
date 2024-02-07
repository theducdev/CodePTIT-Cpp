#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    string email="";
    for(int i=0;i<s.length();i++) {
        if(s[i]>='A' && s[i]<='Z') s[i]=s[i]+32;      
    }
    int t=0;
    for(int i=s.length()-1;i>=0;i--) {
        if(s[i]==' ') {
            t=i;
            break;
        }     
    }
   
    for(int i=t+1;i<s.length();i++){
        cout << s[i];
    }
    cout << s[0];
    for(int i=0;i<t-1;i++){
        if(s[i]==' ') cout <<s[i+1];
    }
    cout << "@ptit.edu.vn";
    
    

}