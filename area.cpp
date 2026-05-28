#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define ll long long
#define uint unsigned int

#define in(var) var; cin >> var
#define forloop(c, n) for ( auto c = 0; c < n; c++ )

#define kym_fastio ios_base::sync_with_stdio( false ); cin.tie( 0 );

int main()
{
    kym_fastio;
    
    uint in( n );

    ull area{};
    forloop( i, n )
    {
        uint in( l );
        uint in( w );
        area += l * w;
    }

    cout << area;
}