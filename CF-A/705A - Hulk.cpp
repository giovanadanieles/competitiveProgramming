#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* const argv[]){
	int layers;
	string ans = "I ";
	string feelings[] = {"hate that I ", "love that I "};

	cin >> layers;

	for(int i = 0; i < layers - 1; i++){
		ans += feelings[i % 2];
	}

	if(layers % 2 == 0) ans += "love it";
	else ans += "hate it";

	cout << ans << endl;

	return 0;
}