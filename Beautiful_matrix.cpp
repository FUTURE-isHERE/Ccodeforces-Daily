#include <bits/stdc++.h>
using namespace std;
// Coded by Legend ---->Bhavishya Chauhan

#define ll long long
#define fo(i, n) for (ll i = 0; i < n; i++)
#define rep(i, a, b) for (ll i = a; i < b; i++)
#define rep1(i, a, b) for (ll i = a; i <= b; i++)
#define vi vector<ll>
#define vvi vector<vi>
#define pi pair<int, int>
#define vpi vector<pi>
#define pb push_back
#define ff first
#define ss second
const int N = 1e5 + 10;
int a, b, c, x, y, z, m, n;

void solve()
{
    int arr[6][6], row, col;

    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j < 6; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
            {
                row = abs(3 - i);
                col = abs(3 - j);
                cout<<(row+col)<<endl;
            }
        }
    }

}

int main()
{
    int t = 1;
    // cin>>t;

    while (t--)
    {
        solve();
    }
    return 0;
}