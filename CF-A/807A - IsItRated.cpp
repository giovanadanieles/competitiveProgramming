#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* const argv[]){
	int roundPart, prevRating, postRating, oldRating;
	bool rated = false, unrated = false;

	cin >> roundPart;

	for(int i = 0; i < roundPart; i++){
		cin >> prevRating >> postRating;

		if(postRating != prevRating) rated = true;
		else if(i != 0 && oldRating < prevRating) unrated = true;

		oldRating = prevRating;
	}

	if(rated == true) cout << "rated" << endl;
	else if(unrated == true) cout << "unrated" << endl;
	else cout << "maybe" << endl;

	return 0;
}