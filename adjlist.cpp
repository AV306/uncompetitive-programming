#include <bits/stdc++.h>
using namespace std;

int main()
{
	unsigned int n, e; cin >> n >> e;

	vector<int> adjlist[n+1]; // node 0's slot is empty

	// fill the adjlist in
	for( int i = 0; i < e; i++ )
	{
		int node_a, node_b;
		cin >> node_a >> node_b;

		adjlist[node_a].push_back(node_b);

		adjlist[node_b].push_back(node_a);
	}

	// iterate through adjlist
	for ( int i = 1; i <= n; i++ )
	{
		for ( int j = 0; j < (int) adjlist[i].size(); j++ )
		{
			cout << adjlist[i][j];

			if ( j != adjlist[i].size() - 1 ) cout << " ";
		}

		cout << "\n";
	}
