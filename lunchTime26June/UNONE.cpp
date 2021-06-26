#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>odd;
        vector<int>even;
        while(n--){
            int temp;
            cin>>temp;
            if(temp&1){
                odd.push_back(temp);
            }
            else{
               even.push_back(temp);
            }
        }
        vector<int>finalAns;
        int i=0,j=0;
        while(i<even.size()){
            finalAns.push_back(even[i]);
            i++;
        }
        while(j<odd.size()){
            finalAns.push_back(odd[j]);
            j++;
        }
        for(int i=0;i<finalAns.size();i++){
            cout<<finalAns[i]<<" ";
        }
        cout<<'\n';
    }
    return 0;
}