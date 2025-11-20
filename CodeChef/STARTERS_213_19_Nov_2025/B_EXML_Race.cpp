// ------------------------------------------------------------------
//            Author: SAGOR ROY
//            Date: 19 November 2025 (Wednesday) | 20:35
// ------------------------------------------------------------------

#include <bits/stdc++.h>
using namespace std;

// --- Type Aliases ---
using ll = long long;
using lld = long double;
using pii = pair<int, int>;
using vi = vector<int>;
using vll = vector<ll>;

// --- Constants ---
const lld pi = acos(-1.0);
const int MOD = 1e9 + 7;
const int MAX = 1e5 + 5;

// --- Macros ---
#define en '\n'
#define endl '\n'
#define yes cout << "YES" << en
#define no cout << "NO" << en

#define srt(v) sort(v.begin(), v.end())
#define rsrt(v) sort(v.rbegin(), v.rend())
#define rev(v) reverse(v.begin(), v.end())
#define all(x) x.begin(), x.end()
#define pb push_back
#define pf push_front

#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a / __gcd(a, b) * b)

#define input(v)       \
    for (auto &it : v) \
        cin >> it;
#define output(v)      \
    for (auto &it : v) \
        cout << it << " ";

// --- Utility Functions ---
bool isPrime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

// ------------------------------------------------------------------
// ------------------- S O L V E -------------------
// ------------------------------------------------------------------

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> vp;

    for (int i = 1; i <= n; i++)
    {
        int d, t;
        cin >> d >> t;
        int sp = d / t;
        vp.push_back({sp, i});
    }

    srt(vp);
    int anss = vp.back().second;
    int ans = vp.back().first;

    for (int i = n - 2; i >= 0; i--)
    {
        if (vp[i].first == ans)
        {
            anss = vp[i].second;
        }
        else
            break;
    }

    cout << anss << en;
}

// ------------------------------------------------------------------
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    // #ifndef ONLINE_JUDGE
    // 	freopen("D:/CP/input.txt", "r", stdin);
    // 	freopen("D:/CP/output.txt", "w", stdout);
    // #endif

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}