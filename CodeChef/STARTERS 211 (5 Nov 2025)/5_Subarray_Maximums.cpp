/* 
#OBSERVATION:    CREDIT: atulya03(CC)

if the value is 0 in beginning then it means that for 
all windows max of that win should not be equal to the 
length of that window which is not possible as for 1 ,
1 will exists and for the n being the size of the 
string s n will exist in the array

# i create an array to store numbers in ascending order
from 1 to n, n being the size of the string

#APPROACH:

since my array is already ascending order so it will always 
satisfy the condition or rule of s[i]==1 that at least one 
win will contain the max to be itself (wherever s[i] == 1)
However if s[i] is zero then i have a problem problem is let us 
assume this array 1 2 3 , and the string 1 0 1 so 
at the index 1 or position 2 , what i need to do? 
I need for all the win of size 2 max should not be 2 ,
but this is not happening so my most simple approach is
just to swap 2 with the next number that is 3 in this way 
i preserve both the rules

*/

#include <bits/stdc++.h>
using namespace std;

// --- Type Aliases ---
using ll = long long;
using lld = long double;
using pii = pair<int, int>;
using vi = vector<int>;
using vll = vector<ll>;

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
//------------------------------------------------------------------
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    if (s[0] == '0' || s[n - 1] == '0')
    {
        cout << -1 << endl;
        return;
    }

    vi v(n);
    iota(all(v), 1); // fill up the vector 1 to n

    for (int i = 1; i < n - 1; i++)
    {
        if (s[i] == '0')
        {
            swap(v[i], v[i + 1]);
        }
    }

    output(v);
    cout << en;
}

// ------------------------------------------------------------------
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    // --- For Multiple Test Cases ---
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    // --- For Single Test Case ---
    // solve();

    return 0;
}