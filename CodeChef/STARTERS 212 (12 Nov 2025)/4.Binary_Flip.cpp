// ------------------------------------------------------------------
//            Author: SAGOR ROY
//            Date: 12 November 2025 (Wednesday) | 21:35
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
### 💡 Logic / Approach

**Problem:** Find the minimum flips required to make the count of substring `11`
            greater than or equal to the count of substring `00`.

**Solution:**
1. First, count the existing occurrences of `00` ($C_0$) and `11` ($C_1$).
2. If $C_1 \ge C_0$, no operations are needed (Answer = 0).
3. If not, we calculate the "gap" between them.
4. Since flipping a specific bit can effectively close the gap by 2
    (by removing a `00` and potentially creating a `11`),
    we use a formula to find the minimum moves: `(C0 - C1 + 1) / 2`.*/

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int c0 = 0, c1 = 0;

    for (int i = 0; i < n - 1; i++)
    {
        if ((s[i] == s[i + 1]) && s[i] == '0')
            c0++;
        if ((s[i] == s[i + 1]) && s[i] == '1')
            c1++;

        // if(s[i] == s[i+1]){
        // 	if(s[i] == '')
        // }
    }

    if (c1 >= c0)
    {
        cout << 0 << en;
        return;
    }

    int ans = (c0 - c1 + 1) / 2;
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