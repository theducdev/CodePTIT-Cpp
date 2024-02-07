#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream file;
    file.open("VANBAN.in");
    string s, tmp;
    set <string> output;
    while (file >> s) {
        stringstream ss(s);
        while(ss >> tmp) {
            string k;
            for (int i = 0; i < tmp.length(); i++) {
                k += tolower(tmp[i]);
            }
            output.insert(k);
        }
    }
    for (auto it : output) cout << it << endl;
    file.close();
}