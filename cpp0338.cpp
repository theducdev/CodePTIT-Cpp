#include<bits/stdc++.h> 

using namespace std; 
          
int main(){ 
    int t; cin >> t;
    while(t--) {
        string s;
        int k, cnt=0;
        cin >> s >> k;
        for (int i = 0; i < s.length();i++) {
                set <char> xaucon;
            for (int j = i; j < s.length(); j++) {
                xaucon.insert(s[j]);
                if(xaucon.size() == k ) cnt++;
                if ( xaucon.size() > k ) break;
            }
        }
        cout << cnt << endl;
    }
    
}