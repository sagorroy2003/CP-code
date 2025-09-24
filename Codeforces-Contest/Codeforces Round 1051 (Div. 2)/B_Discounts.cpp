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

#define input(v)    \
	for (auto &i : v) \
		cin >> i;
#define output(v)   \
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

void solve_A()
{
	int n; cin >> n;
	vi v(n);
	input(v);
	int cnt = 0;
	int a = n;
	for(int i=0; i<n; i++){
		if(v[i] == n){
			v[i] = v[i] - 1;
		}
	}

	for(int i=0; i<n-1; i++){
		if(v[i] == v[i+1]){
			yes;
			return;
		}
	}

	no;
	
}

void solve_B()
{
	
    ll n, k;
    cin >> n >> k;

    deque<ll> pro(n);
    input(pro);          
    vll vou(k);
    input(vou);          

    ll cost = 0;
    ll mini = LLONG_MAX;

    srt(vou);             
    rsrt(pro);            

    for (int i = 0; i < vou.size(); i++) {
        int picked = 0;   // track how many items taken this round
        for (int j = 0; j < vou[i] && !pro.empty(); j++) {
            ll x = pro.front();   
            cost += x;
            mini = min(mini, x);
            pro.pop_front();
            picked++;
        }

        if (picked == vou[i] ) {
            cost -= mini;
        }
        if (pro.empty()) {
            break;
        }
        mini = LLONG_MAX;         
    }

    for (auto it : pro) {
        cost += it;
    }

    cout << cost << en;

	
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
		solve_B();
	}

	return 0;
}