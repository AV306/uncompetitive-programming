#include <bits/stdc++.h>
using namespace std;


unsigned long solve( long x1, long y1, long x2, long y2 )
{
    unsigned long x = abs( x2 - x1 ); // x distance between points
    unsigned long y = abs( y2 - y1 ); // y distance between points

    unsigned long d = x + y;

    if ( x == 0 || y == 0 ) 
    {
        return d;
    }
    else return d + 2;
}



int main()
{

    unsigned short numberOfTestCases; cin >> numberOfTestCases;

    unsigned long answers[1000];

    for ( int i = 0; i < numberOfTestCases; i++ )
    {
        unsigned long x1, y1, x2, y2 = 0; cin >> x1 >> y1 >> x2 >> y2;
        answers[i] = solve ( x1, y1, x2, y2 );
    }

    for ( int i = 0; i < numberOfTestCases; i++ )
    {
        cout << answers[i] << "\n";
    }
}
