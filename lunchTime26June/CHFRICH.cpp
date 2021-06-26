#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int a,b,x;
        cin>>a>>b>>x;
        cout<<(b-a)/x<<'\n';
    }
    return 0;
}