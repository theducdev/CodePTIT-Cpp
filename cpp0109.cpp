#include <iostream>
#include <math.h>

using namespace std;

int check( long n) {
    int chan = 0, le = 0;
    while (n>0) {
        if((n%10)%2==0) chan++;
        else le++;
        n/=10;
    }
    if(le==chan) return 1;
    else return 0;
}
int main () {
    int n;
    int dem = 0;
    cin >> n;
    for (int i=pow(10, n-1); i<=pow(10, n)-1;i++) {
        if(check(i)) {
            cout << i << " ";
            dem ++;}
        if(dem==10) {
            cout << endl;
            dem =0;
        }  
    }
}