/*
 * CodeChef Starters 211
 * Problem: Wolf Down (WOLFDOWN)
 *
 * Problem Statement:
 * Given a binary string of '0' (bird) and '1' (wolf).
 * A wolf at 'x' eats a bird at 'x+1' and moves to 'x+1'.
 * This repeats. Find the number of 'safe' birds.
 *
 * Logic:
 * A wolf can eat any bird to its right.
 * e.g., "1000" -> "_100" -> "__10" -> "___1" (0 safe birds)
 * e.g., "00100" -> "00_10" -> "00__1" (2 safe birds)
 *
 * The only birds that are "safe" are the ones at the
 * very beginning of the line, *before* the first wolf appears.
 *
 * 1. Iterate through the string from the left (i=0).
 * 2. Count every bird ('0') you see.
 * 3. As soon as you find a wolf ('1'), stop.
 * 4. The final count is the number of safe birds.
 */

#include <iostream>
#include <string>

using namespace std;

/**
 * @brief Solves a single test case for the Wolf Down problem.
 */
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int safe_birds = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            safe_birds++;
        }
        else
        {
            // Found the first wolf, no more birds can be safe
            break;
        }
    }

    cout << safe_birds << '\n';
}

int main()
{
    // Fast I/O
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    // Read the number of test cases
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}