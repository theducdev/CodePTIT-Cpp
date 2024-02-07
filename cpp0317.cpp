#include <iostream>
using namespace std;

int sothuannghich(string s) {
    int n=s.length();
    for (int i=0; i<s.length();i++) {
        if (s[i]!=s[n-1-i]) return 0;
    } return 1;
}

int chusochan(string s) {
    for (int i=0; i<s.length();i++) {
        if (s[i]%2!=0) return 0;
    } return 1;

}


int main(){ 
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        if (chusochan(s) && sothuannghich(s)) cout << "YES"<< endl;
        else cout << "NO"<< endl;
    }


}   