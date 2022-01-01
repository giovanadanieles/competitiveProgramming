#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* const argv[]){
	unsigned int levels;
	int nX, nY, aux;
	unordered_set<int> passedLevels;

	cin >> levels;

	cin >> nX;
	for(int i = 0; i < nX; i++){
		cin >> aux;
		passedLevels.insert(aux);
	}

	cin >> nY;
	for(int i = 0; i < nY; i++){
		cin >> aux;
		passedLevels.insert(aux);
	}

	if(passedLevels.size() == levels) cout << "I become the guy." << endl;
	else cout << "Oh, my keyboard!" << endl;

	return 0;
}