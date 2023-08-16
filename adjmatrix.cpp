#include <bits/stdc++.h>
using namespace std;

int main()
{	
	unsigned int n, e; cin >> n >> e;

	bool adjmatrix[n+1][n+1];

	// initialise adjmatrix
	memset(adjmatrix, 0, sizeof(adjmatrix));	
	
	// input list of nodes
	for ( int i = 0; i < e; i++ )
	{
		int node_a, node_b; cin >> node_a >> node_b;

		// BIG BRAIN TIME
		adjmatrix[node_a][node_b] = adjmatrix[node_b][node_a] = 1;
	}

	// iterate through the adjatrix and cout
	for ( int i = 1; i <= n; i++ )
	{
		for ( int j = 1; j <= n; j++ )
		{
			cout << adjmatrix[i][j];
		}

		cout << "\n";
	}
}
