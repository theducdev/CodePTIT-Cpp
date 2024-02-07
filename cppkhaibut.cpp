#include <bits/stdc++.h>
#include <windows.h>



using namespace std;

int main() {
    int n;
    cin >> n;
    long long sum = 0;
    for (int i = 1; i <= n; i++) {
        if(i%2 == 0 ) cout << i << "." << " " << "carot iu chi !" << endl;
        else cout << i << "." << " " << "cun iu chi !" << endl;
    }
}
