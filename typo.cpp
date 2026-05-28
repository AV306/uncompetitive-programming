#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define ll long long
#define uint unsigned int

#define in(var) var; cin >> var

int main()
{
    string S; cin >> S;
    string T; cin >> T;

    // Trivial case: strings are identical
    if ( S == T )
    {
        cout << "Yes";
        return 0;
    }

    uint n = S.size();
    
    // Iterate over each character in the string until the
    // second-last one
    for ( auto i = 0; i < n-1; i++ )
    {
        if ( S[i] != T[i] )
        {
            // Mismatched character; check if it's swapped with the next one
            if ( S[i] == T[i+1] && S[i+1] == T[i] )
            {
                // It is!
                cout << "Yes";
                return 0;
            }

            // Not swapped with the next one
            cout << "No";
            return 0;
        }
    }
    cout << "No";
}