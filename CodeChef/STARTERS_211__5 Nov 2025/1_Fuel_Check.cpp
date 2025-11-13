/*
 * CodeChef Starters 211
 * Problem: Fuel Check (FUELCHECK)
 *
 * Problem Statement:
 * Chef has X units of fuel. The car has an efficiency of Y km per unit.
 * Does Chef have enough fuel to travel 100 km?
 *
 * Logic:
 * 1. Calculate the total distance the car can travel: total_distance = X * Y.
 * 2. Compare this total_distance with the required 100 km.
 * 3. If total_distance >= 100, output "Yes".
 * 4. Otherwise, output "No".
 */

#include <iostream>
// Using <iostream> is cleaner than <bits/stdc++.h> when only I/O is needed.

using namespace std;

/**
 * @brief Solves a single test case for the Fuel Check problem.
 */
void solve()
{
    int x, y;
    cin >> x >> y;

    // Calculate total distance possible
    int total_distance = x * y;

    // Check if it's enough for 100 km
    if (total_distance >= 100)
    {
        cout << "Yes" << '\n';
    }
    else
    {
        cout << "No" << '\n';
    }
}

int main()
{
    // Fast I/O
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    // This problem has only one test case
    solve();

    return 0;
}