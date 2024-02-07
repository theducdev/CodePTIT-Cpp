#include <bits/stdc++.h>

using namespace std;


int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int check=0;
        for(int i=0;i<s.length();i++) {
            for(int j=0;j<s.length();j++) {
                if(s[i]==s[j]) check++;
            }  
            if(check==1) cout << s[i] ;
            check=0;
        }
        cout << endl;
    }
    
}


