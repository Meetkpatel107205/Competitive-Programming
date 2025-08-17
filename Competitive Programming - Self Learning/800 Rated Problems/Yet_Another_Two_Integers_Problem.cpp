#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        long long a, b;
        cin >> a >> b;

        long long diff = a - b;

        if (diff < 0)
        {
            diff = -diff;  // absolute value without STL
        }

        long long moves = diff / 10;  // full 10-steps

        if (diff % 10 != 0)
        {
            moves++;  // one extra move for remainder
        }

        cout << moves << "\n";
    }

    return 0;
}

// 🔹 General Template for "Minimum Moves" Problems
// 1️⃣ Understand the allowed operation

// What can you do in one move?
// (add, subtract, multiply, divide, swap, etc.)

// Example: Here you can do a := a ± k where 1 ≤ k ≤ 10.

// 2️⃣ Reduce the problem to difference/measure

// Ask yourself: what is changing?
// Usually, it’s about reducing some distance between current and target.
// Example: Here the measure is
// diff=∣a−b∣

// 3️⃣ Maximize effect per move (Greedy Thinking)

// Each move can contribute up to a maximum.
// Example: Here maximum per move is 10.
// So, in order to minimize moves, we always pick the largest possible step.

// 4️⃣ Translate into a formula (Division + Remainder Trick)

// If each move covers up to k units:
// moves = diff/k +(diff%k!=0?1:0)

// This avoids simulation and gives O(1) solution.

// 5️⃣ Check edge cases

// a == b → answer = 0
// diff < k → just 1 move
// Very large inputs (up to 10^9 or more) → make sure your variables use long long.

// 🔹 Applying This to Other Problems

// Example 1: "Climbing Stairs with Steps of 1 to 3"

// Start: 0, Goal: n
// Max step = 3
// Moves = n / 3 + (n % 3 != 0)

// Example 2: "Make Array Elements Equal by Adding k"

// Each move = add k to one element.
// Difference = target - current.
// Moves = (diff + k - 1) / k (ceiling division).

// Example 3: "Convert a to b with x or y steps"

// Allowed steps: x or y.
// Greedy → always try y if possible, else x.
// Sometimes need GCD logic (like coin problems).

// 🔹 Mindset

// Whenever you see:
// “minimum moves”
// “reach from a to b”
// “transform in steps of …”

// 👉 Think in terms of:

// Difference (distance from goal).
// Maximum impact per move (greedy step).
// Formula using division and remainder.
