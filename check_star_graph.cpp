// CPP to find whether given graph is star or not
#include<bits/stdc++.h>
using namespace std;

// define the size of incidence matrix
#define size 4

// function to find star graph
bool checkStar(int mat[][size])
{
	// initialize number of vertex
	// with deg 1 and n-1
	int vertexD1 = 0, vertexDn_1 = 0;

	// check for S1
	if (size == 1)
		return (mat[0][0] == 0);
	
	// check for S2
	if (size == 2)
	return (mat[0][0] == 0 && mat[0][1] == 1 &&
			mat[1][0] == 1 && mat[1][1] == 0 );

	// check for Sn (n>2)
	for (int i = 0; i < size; i++)
	{
		int degreeI = 0;
		for (int j = 0; j < size; j++)
			if (mat[i][j])
				degreeI++;

		if (degreeI == 1)
			vertexD1++;
		else if (degreeI == size-1)
			vertexDn_1++;
	}
	
	return (vertexD1 == (size-1) &&
			vertexDn_1 == 1);
}

// driver code
int main()
{
	int mat[size][size] = { {0, 1, 1, 1},
							{1, 0, 0, 0},
							{1, 0, 0, 0},
							{1, 0, 0, 0}};

	checkStar(mat) ? cout << "Star Graph" :
					cout << "Not a Star Graph";
	return 0;
}
