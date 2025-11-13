// ------------------------------------------------------------------
//            Author: SAGOR ROY
//            Date: 12 November 2025 (Wednesday) | 20:33
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

/*
### Logic / Approach

**Problem:** Count how many pulse periods (`1`) occur *after* the first silence (`0`) has been observed.

**Solution:**
1. Initialize a flag `found_silence` to false.
2. Iterate through the binary string.
3. Once a `'0'` is encountered, set the flag to true.
4. For every `'1'` encountered **after** the flag is set, increment the answer counter.
5. This runs in **O(N)** time complexity.
*/

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int ans = 0;
    bool a = false;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            a = true;

        if (a && s[i] == '1')
            ans++;
    }

    cout << ans << en;
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