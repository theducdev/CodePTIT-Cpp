#include <bits/stdc++.h>
#include <string.h>

using namespace std;


void tinhtich(string s1, string s2) {
    int lena = s1.length();
    int lenb = s2.length();
    string a = s1;
    string b = s2;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    vector <long long> m(lena + lenb);
    for (int i = 0; i < lena; i++) {
        for (int j = 0; j < lenb; j++) {
            m[i + j] = m[i+j] + (a[i] - '0')*(b[j] - '0');
        }
    }

    string c = "";
    for (int i = 0; i < m.size(); i++) {
        int nho = m[i] / 10;
        int chuso = m[i] % 10;
        m[i+1]+=nho;
        c = to_string(chuso) + c;
    }

    while(c.length() > 1 && c[0] == '0') c = c.substr(1);
    cout << c << endl;
}
    
int main() {
    int t; cin >> t;
    cin.ignore();
    while(t--) {
        string a, b;
        cin >> a >> b;
        tinhtich(a, b);
    }
}