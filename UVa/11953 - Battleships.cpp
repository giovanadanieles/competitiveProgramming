#include <bits/stdc++.h>
using namespace std;

void sink(int x, int y, vector<vector<char>>& grid){
	if(x < 0 || x >= (int)grid.size() || y < 0 || y >= (int)grid[x].size() || grid[x][y] == '.') return;

	grid[x][y] = '.';

	sink(x + 1, y, grid);
	sink(x - 1, y, grid);
	sink(x, y + 1, grid);
	sink(x, y - 1, grid);
}

int main(int argc, char* const argv[]){
	int nTests, gridSize, nBattleships;
	char in;
	vector<char> aux;
	vector<vector<char>> grid;

	cin >> nTests;

	for(int i = 0; i < nTests; i++){
		cin >> gridSize;

		grid.clear();
		nBattleships = 0;

		for(int j = 0; j < gridSize; j++){
			aux.clear();

			for(int k = 0; k < gridSize; k++){
				cin >> in;
				aux.push_back(in);
			}

			grid.push_back(aux);
		}

		for(int j = 0; j < gridSize; j++){
			for(int k = 0; k < gridSize; k++){
				if(grid[j][k] == 'x'){
					nBattleships++;
					sink(j, k, grid);
				}
			}
		}

		cout << "Case " << i + 1 << ": " << nBattleships << endl;
	}


	return 0;
}