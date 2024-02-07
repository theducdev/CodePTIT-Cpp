#include <bits/stdc++.h>
using namespace std;
int n, m;
string a[101][101];
int x[4] = {-1 , 0 , 1, 0};
int y[8] = {0, 1, 0, -1};

void dfs(int i, int j) {
    a[i][j].clear();
    a[i][j] += "-1";
    for(int k = 0; k < 4; k++) {
        int i1 = i +  x[k];
        int j1 = j + y[k];
        if(i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && a[i1][j1] == "O") {
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

        
        for(int j = 0; j < m; j++) {
            if(a[0][j] == "O") dfs(0, j);
            if(a[n-1][j] == "O") dfs(n-1, j);
            }
        
        for(int i = 0;i < n;i++ ){
		    if(a[i][0] == "O") dfs(i,0);
		    if(a[i][n-1] == "O") dfs(i,n-1);
	    }
        
        for(int i = 0;i < n;i++){
		    for(int j = 0;j < m;j++){
			    if(a[i][j] == "O")cout<<"X ";
			    else if(a[i][j] == "-1")cout<<"O ";
			    else cout << "X ";
		    }
		cout << endl;
	    }
    }
}