// This took me wayyyyy too long.
// The easier a problem is, the longer you spend on stupid things
// like 'L' vs 'LL' suffix

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define kymchi cin.tie( 0 ); cout.tie( 0 ); ios_base::sync_with_stdio( false );

int main()
{
	// Fast I/O otherwise TLE on two tcs
	kymchi;
	
	ull N, Q;
	cin >> N >> Q;
	
	ll nums[N];
	ll sums[N];
	for ( ull i = 0; i < N; i++ )
	{
        ll n; cin >> n;
		
		if ( i == 0 )
		{
            nums[i] = n;
            sums[i] = n;
		}
		else
		{
            nums[i] = n;
			sums[i] = sums[i-1] + n;
		}
	}
	
	for ( ull i = 0; i < Q; i++ )
	{
        ll lower, upper; cin >> lower >> upper;
		cout << sums[upper-1] - (lower-2 < 0LL ? 0LL : sums[lower-2]) << '\n';
	}
}
