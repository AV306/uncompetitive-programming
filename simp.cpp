#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define ll long long
#define uint unsigned int

#define in(var) var; cin >> var

// The key to this problem is that you'll always be able to cross the
// diagonals, so they don't matter. You can divide the board into
// 4 quadrants based on Kai's position, and eheck if Pavement is in the
// same quadrant as the target.

// You could maybe do BFS/DFS since n <= 1000...
int main()
{
    uint in( n );

    // Kai
    uint in( K1 ); uint in( K2 );
    // Pavement
    uint in( P1 ); uint in( P2 );
    // Target
    uint in( T1 ); uint in( T2 );

    if (
        (P1 < K1 && T1 < K1)
        || (P1 > K1 && T1 > K1)
    )
    {
        if (
            (P2 < K2 && T2 < K2)
            || (P2 > K2 && T2 > K2)
        )
        {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
}