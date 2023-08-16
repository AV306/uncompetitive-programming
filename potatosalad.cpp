#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long numberOfPotatoes, numberOfDays; cin >> numberOfPotatoes >> numberOfDays;

    multiset<long long, greater<long long>> potatoes{};
    for ( auto i = 0; i < numberOfPotatoes; i++ )
    {
        long long mass; cin >> mass;
        potatoes.emplace( mass );
    }

    long long counter{};
    long long totalMass{};
    for ( auto mass : potatoes )
    {
        totalMass += mass;
        if ( ++counter == numberOfDays ) break;
    }

    cout << totalMass;

    //for ( auto mass : potatoes ) cout << mass << ' ';
}