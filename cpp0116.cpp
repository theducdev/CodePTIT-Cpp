#include <bits/stdc++.h>

using namespace std;

int snt(int n) {
    if(n<2) return 0;
    for(int i=2;i<=sqrt(n);i++) {
        if(n%i==0) return 0;
    } return 1;
}





int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >>n;
        int a[n];
        for(int i=1;i<=n;i++) a[i]=i;
        for(int i=1;i<=n;i++) {
            if(a[i]==1) cout << "1" << " ";
            else if(a[i]%2==0) cout << "2" << " ";
            else if(snt(a[i])) cout << a[i] << " ";
            else for(int j=2;j<=sqrt(a[i]);j++) {
                if(a[i]%j==0 && snt(j)) {cout << j << " ";break;}

            }
        }
        cout << endl;
    }
}


