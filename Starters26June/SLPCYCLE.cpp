#include <bits/stdc++.h>
using namespace std;
int main()
{  ios_base::sync_with_stdio(0);
   cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int l, h;
        cin>>l>>h;
        string s;
        cin >> s;
        bool isSlept = false;
      set<int>v;
      for(int i=0;i<l;i++){
          int c=0;
          while(i<l&&s[i]=='0'){
              c++;
              i++;
          }
          if(c!=0)
          v.insert(c);
      }
      set<int>::iterator it;
      for(it=v.begin();it!=v.end();it++){
           if(v.find(h)!=v.end()){
               isSlept=true;
               break;
           }
           h=2*(h-*it);
           v.erase(it);

      }
      if(isSlept==true)
      cout<<"Yes";
      else{
          cout<<"No";
      }
      cout<<'\n';
    }
    return 0;
}