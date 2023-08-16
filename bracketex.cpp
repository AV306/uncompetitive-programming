#include <bits/stdc++.h>
using namespace std;

int main()
{
    int numberOfCharacters; cin >> numberOfCharacters;

    // if there is an odd number of characters the sequence can be discarded instantly
    //if ( numberOfCharacters % 2 != 0 ) cout << "Invalid";

    stack<char> sequence;

    // iterate through stdin
    for ( int i = 0; i < numberOfCharacters; i++ )
    {
        char temp; cin >> temp; 
        
        if ( temp == '(' || temp == '[' || temp == '{' ) 
        {
            sequence.push( temp ); // character is an opening bracket
        }
        // character is closing bracket, sequence isn't empty and it follows a matching opening bracket
        else if ( temp == ')' && !sequence.empty() && sequence.top() == '(' ) sequence.pop();
        else if ( temp == ']' && !sequence.empty() && sequence.top() == '[' ) sequence.pop();
        else if ( temp == '}' && !sequence.empty() && sequence.top() == '{' ) sequence.pop();
        else 
        {
            cout << "Invalid"; 
            return 0; // Invalid!
        }
    }

    if ( sequence.empty() ) cout << "Valid"; // stack should be empty after all this stuff when it's valid
    else cout << "Invalid"; // some other weird testcase
}
