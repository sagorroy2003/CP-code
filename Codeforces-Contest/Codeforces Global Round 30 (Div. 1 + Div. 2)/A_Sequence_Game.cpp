// ------------------------------------------------------------------
//            Author: SAGOR ROY
//            Date: 06 November 2025 (Thursday) | 20:34
// ------------------------------------------------------------------

// Link : https://codeforces.com/contest/2164/problem/A

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
/*  we can pick two distinct indices i and j such that ai ≤ x and aj ≥ x.
    Then every turn, we either pick one number adjacent to ai
    and replace these two numbers with ai, or pick one number adjacent to aj
    and replace these two numbers with aj.
    Eventually only ai and aj will remain and we can obtain x by replacing them with x.
*/
void solve()
{
    ll n, x;
    cin >> n;
    vi v(n);
    input(v);
    cin >> x;

    ll minn = *min_element(all(v));
    ll mx = *max_element(all(v));

    cout << ((x >= minn && x <= mx) ? "YES" : "NO") << en;
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