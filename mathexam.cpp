#include "header.h"

int main()
{
    unsigned ll numberOfQuestions; cin >> numberOfQuestions; // Q

    vector<stringstream> streams{};

    for ( auto i = 0; i < numberOfQuestions; i++ )
    {
        ll A; cin >> A;
        char operation; cin >> operation;
        ll B; cin >> B;

        streams.emplace_back();

        switch ( operation )
        {
            case '$':
            {
                // Arithmetic mean (1dp)
                string resultString = to_string( (double) (A + B) / 2 );

                bool b = false;
                for ( auto c : resultString )
                {
                    streams.back() << c;
                    
                    if ( b ) break;
                    b = c == '.';
                }
            } break;

            case '|':
            {
                // ypotenuse (2dp)
                string resultString = to_string( sqrt( A*A + B*B ) );

                uint8_t dp = 0;
                for ( auto c : resultString )
                {
                    streams.back()<< c;
                    
                    if ( dp++ == 3 ) break;
                }
            } break;

            case '?':
            {
                // fucking quadratic eqn (2dp)
                
                double resultPositive = (-B + sqrt( B*B - 4*A*(A-B) )) / 2*A;
                double resultNegative = (-B - sqrt( B*B - 4*A*(A-B) )) / 2*A;

                streams.back() << resultPositive << "; " << resultNegative;
            } break;
        }

        //stream << '\n';
    }

    // fucking stupid output fuckery because i cant fucking remember how to pipe the stream into the other one
    for ( auto& stream : streams )
    {
        char e;
        while ( stream >> e ) cout << e;

        cout << '\n';
    }
}