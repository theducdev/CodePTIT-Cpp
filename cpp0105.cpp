#include <iostream>
 
using namespace std;

int check(string n) {
    int l=n.length();
    for (int i=0; i<l;i++) {
        if(n[i] == '0' || n[i] == '6' || n[i] == '8') return 1;
        else return 0;
    } return 1;
}


int main () {
    int t;
    cin >> t;
    while(t--) {

    
    string n;
    cin >> n;
    if (check(n)==1) cout << "YES" << endl;
    else cout << "NO" << endl ;}
   
    
    
}