/*
 * CodeChef Starters 211
 * Problem: Buying Chairs (BUYCHAIR)
 *
 * Problem Statement:
 * Store has W wooden chairs (2 stylishness) and P plastic chairs (1 stylishness).
 * Chef must buy exactly K chairs. Find the maximum stylishness.
 * (Guaranteed K <= W + P)
 *
 * Logic (Greedy Approach):
 * To maximize stylishness, Chef should prioritize buying wooden chairs (value 2)
 * over plastic chairs (value 1).
 *
 * 1. Find out how many wooden chairs Chef can buy:
 * - If K <= W (Chef needs fewer chairs than available wooden ones),
 * buy K wooden chairs.
 * - If K > W (Chef needs more chairs than available wooden ones),
 * buy all W wooden chairs.
 * - This can be written as: wooden_bought = min(k, w)
 *
 * 2. Find out how many plastic chairs Chef must buy:
 * - plastic_bought = K - wooden_bought
 *
 * 3. Calculate the total stylishness:
 * - (wooden_bought * 2) + (plastic_bought * 1)
 *
 * Your original logic was also correct:
 * if (w >= k): ans = k * 2
 * else: ans = (w * 2) + (k - w) * 1
 */

#include <iostream>
#include <algorithm> // For min()

using namespace std;

/**
 * @brief Solves a single test case for the Buying Chairs problem.
 */
void solve()
{
    int w, p, k;
    cin >> w >> p >> k;

    // 1. Determine the optimal number of wooden chairs to buy.
    // We want as many as possible, up to the total K chairs needed.
    int wooden_bought = min(w, k);

    // 2. The remaining chairs *must* be plastic.
    int plastic_bought = k - wooden_bought;

    // 3. Calculate the total stylishness.
    int stylishness = (wooden_bought * 2) + (plastic_bought * 1);

    cout << stylishness << '\n';
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