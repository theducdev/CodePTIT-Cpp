#include <bits/stdc++.h>

using namespace std;


int main() {
    int t;
    cin >> t;
    cin.ignore(1);
    while(t--) {
        string s;
        getline (cin, s);
        int dem=1;
        for(int i=0;i<s.length();i++) {
            if(s[i]==' ' || s[i]=='\t' || s[i]=='\n') dem++;

        }
        cout <<dem<< endl;
    }
    
}


