#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	int col = 1;
	for(int r=0; r<matrix.size(); r++) {
		for(int c=0; c<matrix[0].size(); c++) {
			if(matrix[r][c] == 0) {
				matrix[r][0] = 0;
				if(c != 0) 
					matrix[0][c] = 0;
				else
					col = 0;
			}
		}
	}
	
	for(int i=1; i<matrix.size(); i++) {
		for(int j=1; j<matrix[0].size(); j++) {
			if(matrix[i][j] != 0) {
				if(matrix[i][0] == 0 || matrix[0][j] == 0) {
					matrix[i][j] = 0;
				}
			}
		}
	}

	if(matrix[0][0] == 0) {
		for(int i=0; i<matrix[0].size(); i++) {
			matrix[0][i] = 0;
		}
	}

	if(col == 0) {
		for(int i=0; i<matrix.size(); i++) {
			matrix[i][0] = 0;
		}
	}
}