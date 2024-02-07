#include <iostream>
using namespace std;

long long hieu(string s) {
    long long chan = 0, le = 0;
    for (int i=0; i<s.length();i++) {
        if (i%2==0) chan+=s[i]-48;
        else le+=s[i]-48;
    } return abs(chan-le);
}



int main(){ 
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        
        if (hieu(s)%11==0) cout << "1"<< endl;
        else cout << "0"<< endl;
    }


}   