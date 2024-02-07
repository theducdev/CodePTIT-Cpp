#include <bits/stdc++.h>

using namespace std;


int main() {
        string s,v;
        getline (cin, s);
        getline (cin, v);
        s.erase(s.find(v),v.length()+1);
        cout <<s<< endl;
}
    



