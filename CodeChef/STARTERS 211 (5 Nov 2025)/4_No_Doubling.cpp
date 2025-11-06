/*
 * CodeChef Starters 211
 * Problem: No Doubling (NODOUBLING)
 *
 * Problem Statement:
 * Rearrange an array A to maximize "happiness" H.
 * Iterate i=1 to N:
 * If S + A[i] != 2*S (which is S != A[i]), increment H.
 * Then, S = S + A[i].
 *
 * Logic (Greedy Strategy):
 * We want to avoid picking an element A[i] that equals the
 * current sum S.
 *
 * A good greedy strategy is to make it hard for A[i] to equal S.
 * 1. Sort the array.
 * 2. Build the new array 'ans' by picking elements from the
 * sorted array 'v' in an alternating fashion:
 * - Pick smallest (v[i])
 * - Pick largest (v[j])
 * - Pick next smallest (v[i+1])
 * - Pick next largest (v[j-1])
 * - ...and so on.
 *
 * This strategy (e.g., [1, 2, 6, 3] -> [1, 6, 2, 3])
 * makes the sum S grow in a "jumpy" way, making it
 * very unlikely that the next element we pick will
 * exactly match the current sum.
 */

#include <iostream>
#include <vector>
#include <algorithm> // For sort()

using namespace std;

/**
 * @brief Solves a single test case for the No Doubling problem.
 */
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    // 1. Sort the array
    sort(v.begin(), v.end());

    vector<int> ans;
    int i = 0;     // Pointer to the smallest available element
    int j = n - 1; // Pointer to the largest available element
    int cnt = 0;   // Counter to alternate picks

    // 2. Build the 'ans' array by alternating
    while (i <= j)
    {
        if (cnt % 2 == 0)
        {
            // Even step: take from the beginning (smallest)
            ans.push_back(v[i]);
            i++;
        }
        else
        {
            // Odd step: take from the end (largest)
            ans.push_back(v[j]);
            j--;
        }
        cnt++;
    }

    // Print the final rearranged array
    for (int k = 0; k < n; k++)
    {
        cout << ans[k] << " ";
    }
    cout << '\n';
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