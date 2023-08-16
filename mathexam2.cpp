#pragma once
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    unsigned ll numberOfQuestions; cin >> numberOfQuestions; // Q

    vector<stringstream> streams{};

    cout << fixed;
    for ( auto i = 0; i < numberOfQuestions; i++ )
    {
        ll A; cin >> A;
        char operation; cin >> operation;
        ll B; cin >> B;

        switch ( operation )
        {
            case '$':
            {
                // Arithmetic mean (1dp)
                double result = (double) (A + B) / 2.0;

               cout << setprecision( 1 ) << result << '\n';
            } break;

            case '|':
            {
                // ypotenuse (2dp)
                double result = sqrt( A*A + B*B );
                cout << setprecision( 2 ) << result << '\n';
            } break;

            case '?':
            {
                // fucking quadratic eqn (2dp)
                
                double resultPositive = (-B + sqrt( B*B - 4*A*(A-B) )) / (2*A);
                double resultNegative = (-B - sqrt( B*B - 4*A*(A-B) )) / (2*A);

                if ( isnan( resultPositive ) || isnan( resultNegative ) ) cout << "No solution!";
                else cout << setprecision( 2 ) << max( resultPositive, resultNegative ) << '\n';
            } break;
        }
    }
}