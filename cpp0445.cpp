#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while(t--) {
        long long n;
        cin >>n;
        cin.ignore();
        long long s[n];
        for(long long i=0;i<n;i++ ) {
            cin >> s[i];
        } 
        sort(s,s+n);
        if(s[0]==s[1]) cout << "-1";
        else cout << s[0] << " " << s[1];
        cout << endl;
        

    }
}