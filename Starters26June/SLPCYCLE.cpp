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
        vector<int>v;
        for(int i=0;i<l;i++){
          int c=0;
          while(i<l&&s[i]=='0'){
              c++;
              i++;
          }
          if(c!=0)
          v.push_back(c);
      }

     for(int i=0;i<v.size();i++){
         if(v[i]>=h){
             isSlept=true;
             break;
         }
         int temp=2*(h-v[i]);
         if(temp<h){
             h=temp;
         }
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