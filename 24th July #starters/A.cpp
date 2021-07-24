#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int r1,b1,c1,r2,b2,c2;
        cin>>r1>>b1>>c1>>r2>>b2>>c2;
        int a,b;
        if(r1>r2){
            a++;
        }else{
            b++;
        }
        if(b1>b2){
            a++;
        }else{
            b++;
        }
        if(c1>c2){
            a++;
        }else{
            b++;
        }
        if(a>b){
            cout<<"A";
        }
        else{
            cout<<"B";
        }
        cout<<'\n';
    }
}