#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define ll long long
#define uint unsigned int
#define ushort unsigned short

#define in(var) var; cin >> var
#define forloop(c, n) for ( auto c = 0; c < n; c++ )

#define kym_fastio ios_base::sync_with_stdio( false ); cin.tie( 0 );

// Trivial
int main()
{
    ushort in( a );
    ushort in( b );
    ushort in( c );

    // Early return
    if ( a == 0 || b == 0 || c == 0 )
    {
        cout << "FAIL";
        return 0;
    }

    uint total = a + b + c;

    if ( total <= 60 )
    {
        cout << "FAIL";
    }
    else if ( total <= 74 )
    {
        cout << "PASS";
    }
    else if ( total <= 84 )
    {
        cout << "SILVER";
    }
    else
    {
        cout << "GOLD";
    }
}