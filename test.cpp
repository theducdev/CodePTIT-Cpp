#include<bits/stdc++.h> 

using namespace std; 

int main(){ 
	int t; cin>>t; 
	while(t--){ 
		long n1,n2,n3; cin>>n1>>n2>>n3; 
		long long a[n1],b[n2],c[n3]; 
		for(long i=0;i<n1;i++) cin>>a[i]; 
		for(long i=0;i<n2;i++) cin>>b[i]; 
		for(long i=0;i<n3;i++) cin>>c[i]; 
		long i=0,j=0; 
		vector<long long> giao; 
		vector<long long> giao_final; 
		while(i<n1 && j<n2){ 
			if(a[i] == b[j]) { 
				giao.push_back(a[i]); 
				i++;j++; 
			} 
			else if(a[i]>b[j]){ 
				j++; 
			} 
			else { 
				i++; 
			} 
		} 
		i=0; j=0; 
		while(i<giao.size() && j<n3){ 
			if(giao[i]==c[j]) { 
				giao_final.push_back(c[j]); 
				i++;j++; 
			} 
			else if(giao[i] < c[j]){ 
				i++; 
			} 
			else { 
				j++; 
			} 
		} 
		if(giao_final.size() <1) cout<<-1; 
		else for(long i=0;i<giao_final.size();i++) cout<<giao_final[i]<<" "; 
		cout<<endl; 
	} 
}