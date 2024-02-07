#include<bits/stdc++.h>

using namespace std;

int main(){ 
    int t ; cin>>t ; 
    cin.ignore(); 
    while(t--){ 
        string s , x ; 
        getline(cin,s); 
        getline(cin,x); 
        set<string> se ; 
        set<string> s2 ; 
        stringstream ss(s); 
        stringstream ss1(x); 
        string temp ; 
        string tmp ; 
        while(ss>>temp){ 
            se.insert(temp); 
        } 
        while(ss1>>tmp){ s2.insert(tmp); } 
        for(string i : se){ 
            if(s2.find(i) == s2.end()){ 
                cout<<i<<" "; 
            } 
        } 
        cout<<endl; 
    }
}
