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
        int a[n];
        for(int i=0;i<n;i++) cin >>a[i];
        for(int i=0;i<n;i++) {
            if(a[i]==0) cout << a[i] << " ";
            for(int j=2;j<=100;j++) {
            
            if(fibo(j)==a[i]) cout << a[i] << " ";
       
            }
        }    
        cout << endl;
    }


}

