#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define ll long long
#define uint unsigned int

#define in(var) var; cin >> var;

// The key to this problem is that the base price doesn't matter and
// you should do the tasks with the greatest daily increase first.
// Sum up the base prices, then multiply the daily increases by the day
// on which they should be done, i.e. greatest -> day 0 etc.
int main()
{
    uint in( n );

    // Sum up base prices; the price will always be bigger than this
    uint cost = 0;
    for ( auto i = 0; i < n; i++ )
    {
        uint in( p );
        cost += p;
    }

    // FIXME: Priority queue or insert then sort?
    priority_queue<uint> deltas{};
    for ( auto i = 0; i < n; i++ )
    {
        uint in( d );
        deltas.push( d );
    }

    // It doesn't matter what the starting cost is;
    // to achieve minimum cost, do the job with the
    // greatest daily increase first.
    for ( auto i = 0; i < n; i++ )
    {
        cost += i * deltas.top();
        deltas.pop();
    }

    cout << cost;
}