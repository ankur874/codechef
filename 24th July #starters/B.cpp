#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        double n=a+b;
        double p=(6-n);
        if(p<=0){
            cout<<"0";
        }else{
            cout<<fixed<<setprecision(6)<<p/6;
        }
        cout<<'\n';
    }
}