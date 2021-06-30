#include <bits/stdc++.h>
using namespace std;
typ long long ll;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, h;
        cin >> n >> h;
        ll ans = INT_MIN;
        ll *pos = new int[n];
        ll *height = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> pos[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> height[i];
        }
        for (int i = 0; i < n; i++)
        {
            height[i] -= h;
            
        }
        for (int i = 0; i < n; i++)
        {
            if (pos[i] <= height[i])
            {
                ans = -1;
                break;
            }
             ans = max(ans, (pos[i] + height[i] + 2) / 2);
        }
        
        cout<<ans<<'\n';
    }
    return 0;
}