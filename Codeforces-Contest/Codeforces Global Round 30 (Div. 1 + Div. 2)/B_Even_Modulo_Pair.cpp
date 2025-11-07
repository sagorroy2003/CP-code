// ------------------------------------------------------------------
//            Author: SAGOR ROY
//            Date: 07 November 2025 (Friday) | 11:27
// ------------------------------------------------------------------

// problem link : https://codeforces.com/contest/2164/problem/B

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
    ll n;
    cin >> n;
    vll v(n);
    ll even_cnt = 0; // take a counter to count even number 
    vll odd;
    ll a = -1, b = -1;

    for (auto &i : v)
    {
        cin >> i;
        if (i % 2 == 0)
        {
            even_cnt++;
            if (a == -1)
            {
                a = i;
                continue;
            }
            b = i;
        }
        else
        {
            odd.pb(i);
        }
    }

    // srt(odd);

    if (even_cnt >= 2) // if there are 2 even number the y % x always be even 
    {
        cout << a << " " << b << en;
        return;
    }
    else if (even_cnt == 1) // if there are 1 even number we check with other odd number 
    {
        // maybe even odd pair will work
        for (int i = 0; i < odd.size(); i++)
        {
            if ((max(odd[i], a) % min(odd[i], a)) % 2 == 0) // this min max is tricky like for v ={1,2} 
            {                                               // a will be a=2 so if i don't compare it will calculate 1 % 2 which is wrong. so i did this min max check 
                cout << min(odd[i], a) << " " << max(odd[i], a) << en;
                return;
            }
        }

        // maybe 2 odd will be answer
        for (int i = 0; i < odd.size() - 1; i++)
        {
            for (int j = i + 1; j < odd.size(); j++)
            {
                if ((odd[j] % odd[i]) % 2 == 0)
                {
                    cout << odd[i] << " " << odd[j] << en;
                    return;
                }
            }
        }

        cout << -1 << en;
        return;
    }
    else
    {
        // maybe two odd will be answer
        for (int i = 0; i < odd.size() - 1; i++)
        {
            for (int j = i + 1; j < odd.size(); j++)
            {
                if ((odd[j] % odd[i]) % 2 == 0)
                {
                    cout << odd[i] << " " << odd[j] << en;
                    return;
                }
            }
        }

        cout << -1 << en;
        return;
    }
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