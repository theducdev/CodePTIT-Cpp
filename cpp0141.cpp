#include<bits/stdc++.h>

using namespace std;

long long fibo(int n) {
    if (n==0) return 0;
    else if (n==1) return 1;
    else  {
    	long long f0=0, f1=1, fn;
    	for (int i=2; i<=n; i++) {
    		fn=f0+f1;
    		f0=f1;
    		f1=fn;
		}
		return fn;
	}
    
}



int main() {
    int t;
    cin >> t;
    while(t--) {
        long long  n,check=0;
        cin >> n;
        for(int i=1;i<=100;i++) {
        if(fibo(i)==n) check=1;
       
        }
        if(check==1 || n==0) cout << "YES";
        else cout << "NO";
        cout << endl;
    }


}

