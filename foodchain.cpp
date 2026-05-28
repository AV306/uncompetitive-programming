#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define ll long long
#define uint unsigned int

#define in(var) var; cin >> var
#define forloop(c, n) for ( auto c = 0; c < n; c++ )

#define kym_fastio ios_base::sync_with_stdio( false ); cin.tie( 0 );

const ull MOD = 1'000'000'009;


// The key to this problem is the fact that modulo arithmetic produces
// the same result regardless of when the modulo is applied.
// We may overflow at any time (especially in ST3), so we have to modulo
// wherever possible.
int main()
{
    ull A, B, C, D, E;
    cin >> A >> B >> C >> D >> E;

    // Apply modulo
    A %= MOD;
    B %= MOD;
    C %= MOD;
    D %= MOD;
    E %= MOD;

    // Multiply
    cout << A * B % MOD * C % MOD * D % MOD * E % MOD;
}