#include <bits/stdc++.h>
using namespace std;


int main()
{
    size_t M; cin >> M;
    size_t K; cin >> K;
    deque<unsigned int> cards( M );

    char action;
    while ( cin >> action )
    {
        if ( action == 'A' )
        {
            // Take top card and move to bottom
            cards.push_back( cards.front() );
            cards.pop_front();
        }
        else if ( action == 'B' )
        {
            cards.push_front( cards.back() );
            cards.pop_back();
        }
    }

    // Print (K-1)th, Kth and (K+1)th element
    cout << cards.at( K - 1 ) << ' ' << cards.at( K ) << ' ' << cards.at( K + 1 );
}