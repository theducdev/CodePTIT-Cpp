#include <bits/stdc++.h>

using namespace std;
int main () {
    map <int, int> m;
    int a[10001];
    for(int x : a) {
        int t; cin >> t;
        m[t]++;
    }
    for (auto it : m) {
        cout << it.first << " " << it.second <<endl;
    }
    

}