#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define ll long long
#define uint unsigned int
#define ushort unsigned short

#define in(var) var; cin >> var
#define forloop(c, n) for ( auto c = 0; c < n; c++ )
#define dump(container) for ( auto i : container ) { cout << i << ","; } cout << ". ";
#define kym_fastio ios_base::sync_with_stdio( false ); cin.tie( 0 );

// So... this WOULD be trivial, if not for a tiny catch in the sample TCs:
// Sample 2 has the input sequence 3 6 2 7 5 4 9.
// Sorting this gives: 2 3 4 5 6 7 9. Median is hence 5.
// HOWEVER, the sample output is 7 !!!
// So the upshot is that they just want the MIDDLE of the string
// (or the average of the two numbers surrounding the middle for an
// even-length string), NOT the actual median.
// Skem :(

// Solution for real median is at medianstring_alt.cpp
int main()
{
    ushort in( n );

    vector<int> numbers{};
    forloop( i, n )
    {
        int in( t );
        numbers.push_back( t );
    }

    // Can't use pre-middle index otherwise we'd need special
    // handling for even-length
    auto post_mid_elem_index = n / 2;

    if ( n % 2 != 0 )
    {
        // Odd-length
        cout << numbers[post_mid_elem_index];
    }
    else
    {
        // Even-length; find the post-middle element and av erage
        ull pre_mid_elem = numbers[post_mid_elem_index - 1]
        cout << (numbers[post_mid_elem_index] + pre_mid_elem) / 2.0;
    }
}