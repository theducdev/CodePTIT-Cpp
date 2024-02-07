#include<iostream> 

using namespace std; 

int main(){ 
    int x; 
    cin>>x; 
    while(x--){ 
        int n, k; 
        cin>>n>>k; 
        int a[n*k]; 
        for(int i = 0 ; i < n*k ; i++){ 
            cin>>a[i]; 
        } 
        for(int i = 0 ; i < n*k -1 ; i++){ 
            for(int j = i + 1 ; j <n*k ; j++){ 
                if(a[i]>a[j]){ 
                    int t= a[i]; a[i]=a[j]; 
                    a[j]=t; 
                } 
            } 
        } 
        for(int i = 0 ; i < n * k ; i++){ 
            cout<<a[i]<<" "; 
        } 
        cout<<endl; 
    } 
}