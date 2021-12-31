#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* const argv[]){
	int nStewards, min_ = INT_MAX, max_ = INT_MIN, aux, ans = 0;
	vector<int> stewards;

	cin >> nStewards;

	for(int i = 0; i < nStewards; i++){
		cin >> aux;

		stewards.push_back(aux);

		min_ = min(min_, aux);
		max_ = max(max_, aux);
	}

	for(int i = 0; i < nStewards; i++){
		if(stewards[i] > min_ && stewards[i] < max_) ans++;
	}

	cout << ans << endl;

	return 0;
}