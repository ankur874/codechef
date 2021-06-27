#include<bits/stdc++.h>
using namespace std;
typedef long l;
int main(){
   ios_base::sync_with_stdio(0);
   cin.tie(nullptr);
   l n,q;
   cin>>n>>q;
   l *arr=new l[n+1];
   for(int i=1;i<=n;i++){
       cin>>arr[i];
   }
   while (q--)
   {
       int qt;
       cin>>qt;
       if(qt==1){
           int l,r,x;
           cin>>l>>r>>x;
           for(int i=l;i<=r;i++){
             arr[i]+=pow(x+i-l,2);
           }
       }
       else if(qt==2){
          int y;
          cin>>y;
          cout<<arr[y]<<'\n';
       }
       
   }
   return 0;
   
}