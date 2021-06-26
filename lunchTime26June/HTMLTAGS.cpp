#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        string tag;
        cin >> tag;
        bool isFault = false;
        if (tag.length() < 4)
        {
            cout << "Error";
        }
        else
        {
            if (tag[0] == '<' && tag[1] == '/' && tag[tag.length() - 1] == '>')
            {
                for (int i = 2; i <= tag.length() - 2; i++)
                {
                    if (tag[i] >= 97 && tag[i] <= 122 || tag[i] >= 48 && tag[i] <= 57)
                    {
                        continue;
                    }
                    else
                    {
                        isFault = true;
                    }
                }
                if (isFault)
                {
                    cout << "Error";
                }
                else
                {
                    cout << "Success";
                }
            }
            else
            {
                cout << "Error";
            }
        }
        cout << '\n';
    }
    return 0;
}