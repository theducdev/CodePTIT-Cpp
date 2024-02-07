#include <bits/stdc++.h>
using namespace std;

void chuanhoa(string s, int n) {
    string chuan;
    for(int i=0; i < s.length(); i++) {
        s[i]=tolower(s[i]);
    }
    stringstream ss(s);
    string tmp;
    while (ss >> tmp) {
        tmp[0]=toupper(tmp[0]);
        chuan = chuan + tmp + " ";
    }
    chuan.erase(chuan.size()-1, 1); 
    if (n==1){ 
        while (chuan[chuan.size()-1]!=' ') chuan.erase(chuan.size()-1, 1); 
        chuan=tmp+" "+chuan; 
    } 
    else{ 
        stringstream t(chuan); 
        t>>tmp; 
        while (chuan[0]!=' ') chuan.erase(0,1); 
        chuan.erase(0,1); 
        chuan=chuan+" "+tmp; 
    } 
    cout<<chuan<<endl; 
}

int main() {
    int t; cin >> t;
    while(t--) {
        int n;
        string s;
        cin >> n;
        cin.ignore();
        getline(cin, s);
        chuanhoa(s, n);
        
    }
}