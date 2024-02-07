#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream file;
    file.open("DATA.in");
    int x;
    map <int, int> so;
    while(file >> x) {
        so[x]++;
    }
    for(auto it : so ) {
        cout << it.first <<  " " << it.second << endl;
    }
    file.close();
    
}