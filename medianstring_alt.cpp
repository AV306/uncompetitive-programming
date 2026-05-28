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

    // Use std::nth_element to rearrange the vector to make the middle
    // (or post-middle, for an even-length vector) element the correct one
    // as if it were sorted, and also puts all the smaller elements before it
    // and the larger ones after it (also almost like it's sorted).
    // *(post-middle == element after the "middle position" in between two elements)
    // For an odd-length vector, the middle element is the median.
    // For an even-length vector, we must average the post-middle element with
    // the pre-middle element, which is given by the largest element
    // among those present before the post-middle element.
    nth_element( numbers.begin(), numbers.begin() + post_mid_elem_index, numbers.end() );
    dump( numbers )
    if ( n % 2 != 0 )
    {
        // Odd-length
        cout << numbers[post_mid_elem_index];
    }
    else
    {
        // Even-length; find the post-middle element and av erage
        ull pre_mid_elem = *max_element( numbers.begin(), numbers.begin() + post_mid_elem_index );
        cout << (numbers[post_mid_elem_index] + pre_mid_elem) / 2.0;
    }
}