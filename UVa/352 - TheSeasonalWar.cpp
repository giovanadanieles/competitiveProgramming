#include <bits/stdc++.h>
using namespace std;

#define SZ 8

int pixels[30][30];
int vertical[] = {1, 1, 1, 0, 0, -1, -1, -1};
int horizontal[] = {-1, 0, 1, -1, 1, -1, 0, 1};

void dfs(int row, int column, int imgSize){
	if(row < 0 || row >= imgSize || column < 0 || column >= imgSize) return;

	if(pixels[row][column] == 0) return;

	pixels[row][column] = 0;
	for(int i = 0; i < SZ; i++){
		for(int j = 0; j < SZ; j++){
			dfs(row + vertical[i], column + horizontal[j], imgSize);
		}
	}

	return;
}

int main(int argc, char* const argv[]){
	int imgSize, warEagles, image = 0;
	char in;

	while(cin >> imgSize){
		warEagles = 0;

		for(int i = 0; i < imgSize; i++){
			for(int j = 0; j < imgSize; j++){
				cin >> in;
				pixels[i][j] = in - '0';
			}
		}

		for(int i = 0; i < imgSize; i++){
			for(int j = 0; j < imgSize; j++){
				if(pixels[i][j] == 1){
					warEagles++;
					dfs(i, j, imgSize);
				}
			}
		}

		cout << "Image number " << ++image << " contains " << warEagles << " war eagles." << endl;
	}

	return 0;
}