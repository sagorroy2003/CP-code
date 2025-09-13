///                                   SAGOR ROY 2.0
#include <bits/stdc++.h>
using namespace std;

#define en endl
#define pi acos(-1.00)
#define ll long long
#define lld long double
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
// ll lcm(ll a, ll b)
// {
// 	return a / __gcd(a, b) * b;
// }

#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define srt(v) sort(v.begin(), v.end());
#define rsrt(v) sort(v.rbegin(), v.rend());
#define rev(v) reverse(v.begin(), v.end());
#define all(x) x.begin(), x.end()

#define input(v)      \
    for (auto &i : v) \
        cin >> i;
#define output(v)     \
    for (auto &i : v) \
        cout << i << " ";

#define pb push_back
#define pf push_front
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<ll>
#define vlld vector<lld>

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

int dx[4] = {-1, 1, -1, 1}, dy[4] = {-1, -1, 1, 1};

const int MOD = 1e9 + 7;
const int MAX = 1e5 + 5;

void solve_A() /// COULDN'T SOLVE this( i will try later)
{
    ll n;
    cin >> n;
    vll a(n);
    input(a);
    ll ans = 0;

    deque<ll> even, odd;

    for (ll i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
            even.push_back(a[i]);
        else
            odd.push_back(a[i]);
    }

    rsrt(even);
    rsrt(odd);
    rsrt(a);

    auto it = find(a.begin(), a.end(), odd[0]);
    if (it != a.end())
    {
        ans += odd[0];
        odd.erase(odd.begin());
        a.erase(it);
    }

    if (odd.size() == 0)
    {
        cout << 0 << en;
        return;
    }

    for (int i = 0; i < a.size(); i++)
    {
        //     if (a[i] % 2 == 0 &&)
        //     {
        //     }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    // #ifndef ONLINE_JUDGE
    // 	freopen("D:/CP/input.txt", "r", stdin);
    // 	freopen("D:/CP/output.txt", "w", stdout);
    // #endif

    int t;
    cin >> t;
    while (t--)
    {
        solve_A();
    }

    return 0;
}