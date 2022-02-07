// C++ program to implement
// the above approach

#include <bits/stdc++.h>
using namespace std;

// Function to get the count
// of rectangles
int cntRect(int points[][2], int N,
			int rectangle[][2])
{
	// Store distinct
	// horizontal lines
	unordered_set<int> cntHor;
	
	// Store distinct
	// Vertical lines
	unordered_set<int> cntVer;
	
	// Insert horizontal line
	// passing through 0
	cntHor.insert(0);
	
	// Insert vertical line
	// passing through 0.
	cntVer.insert(0);
	
	// Insert horizontal line
	// passing through rectangle[3][0]
	cntHor.insert(rectangle[3][0]);
	
	// Insert vertical line
	// passing through rectangle[3][1]
	cntVer.insert(rectangle[3][1]);
	
	// Insert all horizontal and
	// vertical lines passing through
	// the given array
	for (int i = 0; i < N; i++) {
		
		// Insert all horizontal lines
		cntHor.insert(points[i][0]);
		
		// Insert all vertical lines
		cntVer.insert(points[i][1]);
	}
	
	return (cntHor.size() - 1) *
			(cntVer.size() - 1);
}

// Driver Code
int main()
{
	int rectangle[][2] = {{0, 3}, {0, 7},
						{4, 3}, {4, 7}};
	int points[][2] = {{5, 2}, {5, 6}};
	
	int N = sizeof(points) / sizeof(points[0]);
	cout<<cntRect(points, N, rectangle);
}
