#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        int n=2*(180+n);
        int n2=a+b;
        cout<<n-n2<<'\n'; 
    }
}