#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
       string a;
       cin>>a;
       string temp0=a;
       string temp1=a;
       temp0.insert(1,"0");
       temp1.insert(0,"1");
       ll t0=atoi(temp0.substr(0,3).c_str());
       ll t1=atoi(temp1.substr(0,3).c_str());
       if(t0<t1){
           cout<<temp0;
       }
       else{
           cout<<temp1;
       }
       cout<<'\n';
    }
    return 0;
}