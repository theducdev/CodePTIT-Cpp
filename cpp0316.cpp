#include <bits/stdc++.h>

using namespace std;

long long rutgon(string s) {
    int sum = 0;
    for(int i=0;i<s.length();i++) {
        sum+=s[i]-'0';
    }
    if(sum<10) return sum;
    return (rutgon(to_string(sum)));
        
}
    



int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        cin >>s;
        if(rutgon(s)==9) cout <<"1";
        else cout << "0";
        cout << endl;
        
        

    }

}