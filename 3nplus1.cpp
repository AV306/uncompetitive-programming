
#include <bits/stdc++.h>
using namespace std;

int main() {
    int start; cin >> start;
    int number = start;

    cout << number << " ";

    while ( number != 1 ) {
        if ( number % 2 == 0 )
            number /= 2; // number is even, divide by 2
        else number = (3*number) + 1;
​
        cout << number << " ";
    }
}
