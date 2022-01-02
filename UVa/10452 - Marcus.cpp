#include <bits/stdc++.h>
using namespace std;

vector<vector<char>> path;
vector<string> ans;
int directionsX[] = {0, -1, 0};
int directionsY[] = {-1, 0, 1};
string pos = "IEHOVA#";
int rows, columns;

void dfs(int curX, int curY, int index){
	if(ans.size() == pos.size()) return;

	for(int i = 0; i < 3; i++){
		if(curX + directionsX[i] >= 0 && curX + directionsX[i] < rows &&
	   	   curY + directionsY[i] >= 0 && curY + directionsY[i] < columns){
			if(path[curX + directionsX[i]][curY + directionsY[i]] == pos[index]){
				if(i == 0) ans.push_back("left");
				else if(i == 1) ans.push_back("forth");
				else ans.push_back("right");

				dfs(curX + directionsX[i], curY + directionsY[i], index + 1);
			}
		}
	}

	return;
}

int main(int argc, char* const argv[]){
	vector<char> v1;
	int cases, iniX, iniY;
	char aux;

	cin >> cases;

	for(int i = 0; i < cases; i++){
		cin >> rows >> columns;

		path.clear();
		ans.clear();

		for(int j = 0; j < rows; j++){
			v1.clear();

			for(int k = 0; k < columns; k++){
				cin >> aux;

				v1.push_back(aux);

				if(aux == '@') iniX = j, iniY = k;
			}

			path.push_back(v1);
		}

		dfs(iniX, iniY, 0);

		for(unsigned int j = 0; j < ans.size(); j++){
			j == ans.size() - 1 ? cout << ans[j] << endl : cout << ans[j] << " ";
		}
	}

	return 0;
}