#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* const argv[]){
	int row, column, corner;

	while(cin >> row >> column >> corner && row + column + corner != 0){
		if(corner == 1) cout << ((row - 7) * (column - 7) + 1) / 2 << endl;
		else cout << ((row - 7) * (column - 7)) / 2 << endl;
	}

	return 0;
}