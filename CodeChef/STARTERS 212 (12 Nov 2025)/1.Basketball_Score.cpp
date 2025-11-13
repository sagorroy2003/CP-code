#include <bits/stdc++.h>
using namespace std;
#define ll long long

/*
### Logic / Approach

**Problem:** Calculate the total basketball score based on the count of 3-pointers and 2-pointers scored.

**Solution:**
1. Read the number of 3-pointers (`X`) and 2-pointers (`Y`).
2. Apply the standard scoring formula: `Total = (X * 3) + (Y * 2)`.
3. Print the result.
4. Time complexity is **O(1)**.
*/

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;

    cout << (a * 3) + (b * 2) << endl;

    return 0;
}
