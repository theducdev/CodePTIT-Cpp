#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[101][101];
int x[8] = {-1 ,-1 ,-1 ,0 ,0, 1, 1, 1};
int y[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

void dfs(int i, int j) {
    for(int k = 0; k < 8; k++) {
        a[i][j] = 0;
        int i1 = i +  x[k];
        int j1 = j + y[k];
        if(i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && a[i1][j1] == 1) {
            dfs(i1, j1);
        }
    }

}

int main() {
    int t; cin >> t;
    while(t--) {
        cin >> n >> m;
        for (int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(a[i][j]) {
                    cnt ++;
                    dfs(i, j);
                }
            }
        }
        cout << cnt << endl;
    }
}