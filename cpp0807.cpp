#include <bits/stdc++.h>

using namespace std;

int main() {
    fstream file;
    vector <int> x;
    set <int> y, z;
    file.open("DATA.in");
    int a;
    while( file >> a ) x.push_back(a);
    for (int i = 2; i <= x[0] + 1; i++) y.insert(x[i]);
    for (int i = x[0] + 2; i <= x[0] + x[1] + 1; i++) z.insert(x[i]);
    for (auto it = y.begin(); it != y.end(); it++) {
        if(z.count(*it) != 0) cout << *it <<" ";
    }
    file.close();
}