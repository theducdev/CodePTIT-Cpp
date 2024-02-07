#include<bits/stdc++.h>

using namespace std;

void sothuannghich(string s) {
    int check=1;
    int z=s.length();
    for(int i=0;i<z;i++) {
        if(s[i]!=s[z-(i+1)]) check=0;
    }
    if(check==0) cout << "NO";
    else cout << "YES";
}

int main () {
    int t;
    cin >> t;
    while(t--) {
        cin.ignore();
        string s;
        cin >> s;
        for (int i=0;i<s.length();i++) {
            s[i]=tolower(s[i]);
        }
        for (int i=0;i<s.length();i++) {
            if(s[i]=='a'|| s[i]=='b' || s[i] == 'c') s[i]='2';
            if(s[i]=='d'|| s[i]=='e' || s[i] == 'f') s[i]='3';
            if(s[i]=='g'|| s[i]=='h' || s[i] == 'i') s[i]='4';
            if(s[i]=='j'|| s[i]=='k' || s[i] == 'l') s[i]='5';
            if(s[i]=='m'|| s[i]=='n' || s[i] == 'o') s[i]='6';
            if(s[i]=='p'|| s[i]=='q' || s[i] == 'r' || s[i] == 's') s[i]='7';
            if(s[i]=='t'|| s[i]=='u' || s[i] == 'v') s[i]='8';
            if(s[i]=='w'|| s[i]=='x' || s[i] == 'y' || s[i] == 'z') s[i]='9';
        
        }

        sothuannghich(s);
        cout << endl;
    }

}
