#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define kymchi cin.tie( 0 ); cout.tie( 0 ); ios_base::sync_with_stdio( false );


int main()
{
    kymchi;
	
    // key: number of OTHER students in classroom
    // value: student id
    // haha lol swagaar
    map<ull, ull> students{};
    
    ull N; cin >> N;
    
	// Populate map
    for ( ull i = 0; i < N; i++ )
    {
        ull a; cin >> a;
        students.emplace( a, i+1 );
    }
    
    // Print students in ascending order of
    // number of other studemts
    for ( pair<ull, ull> stu : students )
    {
        cout << stu.second << ' ';
    }
}
