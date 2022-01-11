#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* const argv[]){
	char pixel;
	bool colored = false;
	int rows, columns;

	cin >> rows >> columns;

	for(int i = 0; i < rows; i++){
		for(int j = 0; j < columns; j++){
			cin >> pixel;

			if(pixel == 'C' || pixel == 'M' || pixel == 'Y') colored = true;
		}
	}

	if(colored == true) cout << "#Color" << endl;
	else cout << "#Black&White" << endl;

	return 0;
}