#include <iostream>


using namespace std;


int main () {
    int t;
    cin >> t;
    while(t--) {
    string n;
    cin >> n;
    int dem=0;
    int m = n.length();
    for ( int i=0; i<m; i++) {
        if ( n[i] - n[i+1] ==1 || n[i+1]-n[i]==1) dem++;
    }
    if (dem==m-1) cout << "YES"<< endl;
    else cout << "NO" << endl;
    }
}