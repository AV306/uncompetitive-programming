#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define ll long long
#define uint unsigned int
#define ushort unsigned short

#define in(var) var; cin >> var
#define forloop(c, n) for ( auto c = 0; c < n; c++ )

#define kym_fastio ios_base::sync_with_stdio( false ); cin.tie( 0 );

// We use a deque to support both ADD_BACK and ADD_FRONT,
// and the .erase() member to support SNIP_BACK and SNNIP_FRONT
int main()
{
    ull in( N );

    deque<char> seq{};
    forloop( i, N )
    {
        string in( op );
        if ( op == "ADD_BACK" )
        {
            char in( x );
            seq.push_back( x );
        }
        else if ( op == "ADD_FRONT" )
        {
            char in( x );
            seq.push_front( x );
        }
        else if ( op == "SNIP_BACK" )
        {
            ull in( y );
            seq.erase( seq.begin() + y + 1, seq.end() );
        }
        else if ( op == "SNIP_FRONT" )
        {
            ull in( y );
            seq.erase( seq.begin(), seq.begin() + y + 1 );
        }
        else if ( op == "QUERY" )
        {
            ull in( y );
            cout << seq[y] << "\n";
        }
    }
}