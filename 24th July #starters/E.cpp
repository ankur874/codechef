#include<bits/stdc++.h>
using namespace std;
int solve(int*arr,int n,int k,int j,int index){
    if(n<=0){
        return 0;
    }
    if(k<=0){
        return solve(arr,n-1,j,j,index+1)+arr[index];
    }
    int o2=solve(arr,n-1,k,j,index+1)+arr[index];
    int o1=solve(arr,n-1,k-1,j,index+1);
    return min(o1,o2);
}
int dpSol(int *arr,int n,int k){
    vector<vector<int>>dp(n+1,vector<int>(k+1,0));
    for(int i=1;i<=n;i++){
        dp[i][0]=dp[i-1][0]+arr[i-1];
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=k;j++){
            dp[i][j]=min((dp[i-1][j]+arr[i]),dp[i-1][j-1]);
        }
    }
    return dp[n][k];
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int*arr=new int[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<solve(arr,n,k,k,0)<<'\n';
    }
     return 0;
}