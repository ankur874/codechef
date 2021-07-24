#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, l;
        cin >> n >> m >> l;
        int*colors=new int[n+1];
        while (m--)
        {
            int len;
            cin >> len;
            while (len--)
            {
                int temp;
                cin >> temp;
                colors[temp]=m;
            }
        }
        int *llist=new int[l];
       // vector<int> list(l);
       int ll=l;
       for(int i=0;i<l;i++){
           cin>>llist[i];
       }
       
        int res=1;
        for(int i=0;i<ll-1;i++){
           if(colors[llist[i]]!=colors[llist[i+1]]){
               res++;
           }
        }
        cout<<res<<'\n';
    }
}