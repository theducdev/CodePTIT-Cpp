#include<iostream> 
using namespace std; 
int main() { 
    int i, t, n, p; 
    cin >> t; 
    while (t--) { 
        cin >> n >> p; 
        int count = 0, temp; i = 1; 
        while (p*i<=n) { 
            temp = p*i; 
            while (temp%p==0) { temp /= p; count++; } 
            i++; 
        } 
        cout << count << endl; 
    } 
}