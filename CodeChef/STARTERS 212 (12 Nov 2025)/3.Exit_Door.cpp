// ------------------------------------------------------------------
//            Author: SAGOR ROY
//            Date: 12 November 2025 (Wednesday) | 20:56
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

**Problem:** People leave the room in decreasing order of their ID ($N$ down to $1$). 
            They choose the side (Left or Right) that disturbs the fewest people remaining in the row.

**Solution:**
1. Simulate the process starting from the person with the highest ID ($N$).
2. Find the current position of that person in the row.
3. Calculate the number of people to their left and to their right.
4. Add the minimum of the two values (`min(left, right)`) to the total disturbance count.
5. **Remove** that person from the row (simulating them leaving) and repeat for the next highest ID.*/

void solve()
{
    int n;
    cin >> n;
    vi v(n);
    input(v);

    int ans = 0;

    int a = n;

    while (a > 0)
    {

        if (v[0] == a || v.back() == a)
        {
            auto it = find(all(v), a);
            int idx = it - v.begin();

            int left = idx - 0;
            int right = (a - 1) - (idx);
            if (it != v.end())
            {
                v.erase(it);
            }
            a--;
            // continue;
        }
        else
        {
            auto it = find(all(v), a);
            int idx = it - v.begin();
            int left = idx - 0;
            int right = (a - 1) - (idx);
            if (it != v.end())
            {
                v.erase(it);
            }
            a--;
            ans += min(left, right);
        }
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