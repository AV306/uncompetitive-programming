#include <bits/stdc++.h>
using namespace std;

int main()
{
	int length; cin >> length;
	int queryTime; cin >> queryTime;

	// O(n) :(
	for ( int i = 2; i <= queryTime; i++ )
	{
		if ( length == 1 )
		{
			length = -1;
			break;
		}
		
		if ( length % 2 == 0 )
		{
			// even length, halve
			length /= 2;
		}
		else
		{
			// odd, grow by 3n+1
			length = (3 * length) + 1;
		}
	}

	cout << length;
}
