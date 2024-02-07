#include<bits/stdc++.h>

using namespace std;
struct DoanhNghiep{
	string ma; int stt;
	string ten, lop, ns;
	float gpa;
};


void nhap(DoanhNghiep A[], int n) {
        for(int i=0; i<n;i++) {
        A[i].stt=i+1;
        cin.ignore();
        getline(cin, A[i].ten); 
        cin >> A[i].lop;
        cin >> A[i].ns;
        cin >> A[i].gpa;
        A[i].ma="B20DCCN";
        
}
}
void chuan_hoa_ten(string s){  
    stringstream ss(s);
	string temp,a;
    while (ss >> temp)
    {   a=temp;
	    a[0]=toupper(a[0]);
        for(int i=1;i<a.length();i++) {
            a[i]=tolower(a[i]);

        }
        cout << a << " ";
        
    }
	
}

void chuan_hoa_ns(string s){
    int i=0;
    stringstream ss(s);
    string date[3], token;
    while(getline(ss, token, '/'))
        date[i++] = token;
    cout<<setfill('0')
        <<setw(2)<<date[0]<<'/'
        <<setw(2)<<date[1]<<'/'
        <<setw(4)<<date[2]<<' ';
}
void in(DoanhNghiep A[], int n) {
    for(int i=0;i<n;i++) {
    cout << A[i].ma;
	if(A[i].stt < 10) cout << "00" << A[i].stt << " ";
    else cout << "0" << A[i].stt << " ";
    chuan_hoa_ten(A[i].ten);
    cout <<A[i].lop << " ";
    chuan_hoa_ns(A[i].ns);
    cout << fixed << setprecision(2) << A[i].gpa << endl;
    }

}

bool cmp1(DoanhNghiep a, DoanhNghiep b) {
    return a.gpa > b.gpa;
}

void sapxep( DoanhNghiep A[], int n ) {
        // for(int i=0;i<n;i++) {
        // for(int j=1+i;j<n-1;j++) {
		// 	if(A[i].gpa < A[j].gpa){
		// 		ThiSinh s = A[i];
		// 		A[i] = A[j];
		// 		A[j] = s;
		// 	}

		// }

	
    
		// }
        sort(A, A+n, cmp1);
}


int main(){
    struct DoanhNghiep ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}






