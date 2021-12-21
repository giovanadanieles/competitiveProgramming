#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* const argv[]){
	int n, k, aux, cut;
	cin >> n >> k;
	vector<int> points(101, 0);

	for(int i = 0; i < n; i++){
		cin >> aux;
		points[aux]++;

		if(i == k - 1) cut = aux;
	}

	for(int i = 99; i >= 0; i--){
		points[i] = points[i] + points[i + 1];
	}

	cut == 0 ? cout << n - (points[cut] - points[cut + 1]) << endl : cout << points[cut] << endl;

	return 0;
}