#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define u unsigned
int main()
{
    u ll N; cin >> N; // number of citiens
    u ll K; cin >> K; // health

    set<u ll> stones{};

    for ( auto i = 0; i < N; i++ )
    {
        u ll A, B; cin >> A >> B;
        stones.emplace( A );
        stones.emplace( B );
    }

    // now we greedy or something
    u ll totalDamage{};
    for ( auto stone : stones )
    {
        totalDamage += stone;
        if ( totalDamage > K )
        {
            totalDamage -= stone;
            break;
        }
    }

    if ( totalDamage == 0 ) cout << -1;
    else cout << totalDamage;
}