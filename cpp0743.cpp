#include<bits/stdc++.h> 
using namespace std; 
int main(){ 
    int n;
    cin>>n; 
    cin.ignore(); 
    while(n--){ 
        string s; 
        getline(cin,s); 
        stringstream ss(s); 
        string v; 
        vector<string> vol; 
        while(ss >> v){ vol.push_back(v); } 
        for(int i = vol.size() - 1; i >= 0;i--){ 
            cout<<vol.at(i)<<" "; 
        } 
        cout<<endl; 
    } 
        return 0; 
}