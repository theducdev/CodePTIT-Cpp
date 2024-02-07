#include <bits/stdc++.h>

using namespace std;

int main() {
    set<string> hop,giao1,giao2;
    string s;
    ifstream file;
    file.open("DATA1.in");
	while (file >> s) {
		for (int i = 0; i < s.length(); i++)
			s[i] = tolower(s[i]);
		giao1.insert(s);hop.insert(s);
	}
	file.close();

    file.open("DATA2.in");
	while (file >> s) {
		for (int i = 0; i < s.length(); i++)
			s[i] = tolower(s[i]);
		giao2.insert(s);hop.insert(s);
	}
	file.close();

     
    for (auto it : hop) { 
        cout << it << " ";
        
    }
    cout << endl;

    for(auto i = giao1.begin(); i != giao1.end(); i++) {
        if( giao2.count(*i) != 0) cout << *i << " ";
    }
}