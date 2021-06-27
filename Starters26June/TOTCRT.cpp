#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       map<string,int>m;
       int n;
       cin>>n;
       int t1=n*3;
       while(t1--){
            string s;
            int d;
            cin>>s>>d;
            if(m.count(s)>0){
               m[s]+=d;
            }
            else{
                m[s]=d;
            }
       }
       vector<int>ve;
       map<string,int>::iterator it;
       for(it=m.begin();it!=m.end();it++){
           ve.push_back(it->second);
       }
       sort(ve.begin(),ve.end());
       for(int i=0;i<ve.size();i++){
           cout<<ve[i]<<" ";
       }
       cout<<'\n';
    }
    return 0;
}