#include <bits/stdc++.h>

using namespace std;

int check(string s) {
	for (int i = 0; i < s.length(); i++){if (s[i] > '9' || s[i] < '0') return 0;}
			
	if (s.length() > 10)return 0;
	return 1;
}

int main() {
    ifstream file;
    file.open("DATA.in");
    long long dem = 0;
    while(1) {
        string s;
        file >> s;
        if(file.eof()) break;
        if(check(s)) dem += stoi(s);
    }
    file.close();
    cout << dem << endl;
    return 0;
}