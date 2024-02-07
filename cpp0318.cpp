#include<bits/stdc++.h> 

using namespace std; 

int check1(string s) {
    if (s[5]!='6' && s[5]!='8') return 0;
    if (s[6]!='6' && s[6]!='8') return 0;
    
    if (s[7]!='6' && s[7]!='8') return 0;
    
    if (s[9]!='6' && s[9]!='8') return 0;
    
    if (s[10]!='6' && s[10]!='8') return 0;
    return 1;
}
 


int main() { 
    int t;
    cin >> t;
    cin.ignore();
    while(t--) {
        string s;
        cin >>s;
        int check=0;
        if(s[5]<s[6] && s[6]<s[7] &&s[7]<s[9] &&s[9]<s[10]) check=1;
        if(s[6]==s[7] && s[6]==s[5] &&s[9]==s[10] &&s[7]==s[9]) check=1;
        if(s[5]==s[6] && s[6]==s[7]  &&s[9]==s[10]) check=1;
        if(check1(s)==1) check =1;
        if(check==1) cout << "YES";
        else cout << "NO";
        cout << endl;


    }
        
} 
    