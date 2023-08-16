
#include <bits/stdc++.h>
#define do_8_times for ( int i = 2; i < 10; i++ )
#define kymchi cin.tie( 0 ); cout.tie( 0 ); ios_base::sync_with_stdio( false );
#define krystal_free( ptr ) delete ptr; ptr = nullptr;
using namespace std;

void generate_fibo( int* array )
{
    // first 2 fibo numbers
    0[array] = 0;
    1[array] = 1;
    
    // rest of them
    do_8_times i[array] = (i-1)[array] + (i-2)[array];
}

int main()
{
    // kymchi lines
    kymchi
    
    int* fibo = new int[10];
    
    generate_fibo( fibo );
    
    // print fibo
    for ( int i = 0; i < 10; i++ )
        cout << i[fibo] << " ";
    
    // dont leak memory
    // i mean you can leak it if you want
    krystal_free( fibo );
}
