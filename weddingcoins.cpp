#include <bits/stdc++.h>
using namespace std;

// long loooong MAAAAAANNNN
// Rar's wedding can cost up to 1 quintillion (ST2). 2^64 is 18 quintillion.
#define ull unsigned long long

// {1, 5} x {1, 10, 100, 1000, 10'000, 1'000'000}

/**
 * Recursive greedy algorithm. Uses up as many of the largest denomination
 * available that is still smaller than the target value, then recurses with
 * the remainder.
 * Stops when the smallest remaining denomination is 1.
 */
ull calc( ull n )
{
    // In cents
    static vector<ull> denominations = {1, 5, 10, 50, 100, 500, 1000, 5000,
                                        10'000, 50'000, 100'000, 500'000,
                                        1000'000};
    static ull n_coins{};
    // Find the largest denomination by removing the last element until we find it
    // We can remove larger denominations because the remainder must be smaller
    // than the divisor
    while ( denominations.back() > n )
        denominations.pop_back();
    
    if ( n == 0 || denominations.back() == 1 )
    {
        return n_coins + n;
    }
    else
    {
        n_coins += n / denominations.back();
    
        // Tail recursion wooo
        return calc( n % denominations.back() );
    }
}

int main()
{
    ull N; cin >> N;
    cout << calc( N );
}