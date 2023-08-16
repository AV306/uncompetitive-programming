#include <bits/stdc++.h>
using namespace std;


int length;
int numbers[1000001];

int main()
{
    
    cin >> length;
    

    for ( int i = 0; i < length; i++ )
    {
        cin >> numbers[i];
    }

    // process array
    sort( numbers, numbers + length );

    
    // receive queries & solve
    int numberOfQueries; cin >> numberOfQueries;

    for ( int i = 0; i < numberOfQueries; i++ )
    {
        int q; cin >> q; // get query

        // get index of LAST number SMALLER THAN OR EQUAL to query (this also tells you how many numbers are before it)
        int smaller = lower_bound( numbers, numbers + length, q ) - numbers; // working
        
        // vice versa
        int bigger = length - (upper_bound( numbers, numbers + length, q ) - numbers); // working

        
        // gei ni da an
        cout << "Smaller: " << smaller << ", Greater: " << bigger << "\n";
    }
    
}
