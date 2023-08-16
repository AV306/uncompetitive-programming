#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define u unsigned
int main()
{
    u ll N; cin >> N; // number of citiens
    u ll K; cin >> K; // health

    vector<u ll> stones{};

    for ( auto i = 0; i < N; i++ )
    {
        u ll A, B; cin >> A >> B;
        stones.emplace_back( A );
        stones.emplace_back( B );
    }

    // now we bruteforce
    u ll best{};
    // ok so we want to find what combination of any number of elements from stones is closest to K

    // iterate over each possible number of stones
    
}