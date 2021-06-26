#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        while(a<b){
            a=a*10;
        }
        if(a%b==0||a%b==1){
            cout<<"Yes";
        }
        else{
            cout<<"No";
        }
        cout<<'\n';
    }
    return 0;
}