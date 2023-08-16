#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define u unsigned


vector<u ll> healths{};

u ll getTotalHealth()
{
    u ll total{};
    for ( auto n : healths )
    {
        if ( n == -1 ) continue;
        total += n;
    }
    return total;
}

int main()
{
    u ll N, P, K; cin >> N >> P >> K;

    for ( auto i = 0; i < N; i++ )
    {
        // healths
        u ll a; cin >> a;
        healths.emplace_back( a );
    }

    u ll potatoes{};
    /*u ll numberOfUndeadAccountantsHit{};
    while ( getTotalHealth() >= 0 )
    {
        // calculate the damage dealth by thy potato or something
        u ll damageCarry{};
        for ( auto i = 0; i < N; i++ )
        {
            u ll health = healths[i];
            u ll damage = K;

            if ( health == -1 )
            {
                // undead accountant, reduce damage
                numberOfUndeadAccountantsHit++;
                damage -= numberOfUndeadAccountantsHit * K;
            }
            else
            {
                // apply any carried-over damage
                health -= damageCarry; damageCarry = 0;

                // apply damage
                health -= P;

                if ( health < 0 )
                {
                    // carry over the damage
                    damageCarry = -health;
                    health = 0;
                }
            }

            healths[i] = health;
        }
        potatoes++;
    }
    cout << potatoes;*/
    cout << ceil( (double) getTotalHealth() / P );
}