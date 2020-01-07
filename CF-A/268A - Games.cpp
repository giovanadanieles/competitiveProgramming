#include <bits/stdc++.h>
using namespace std;

/*

//O(n^2) solution:

int main(){
	int n; cin >> n;
	pair <int, int> ts[n];
	int solve = 0;

	for(int i = 0; i < n; i++){
		cin >> ts[i].first >> ts[i].second;
	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(ts[i].first == ts[j].second) solve++;
		}
	}

	cout << solve << endl;

	return 0;
}

*/

const int N = 107;

//O(n+m) solution (m = number of teams, n = lenght of color's range):
int main(){
	int n; cin >> n;
	pair <int, int> ts[n];
	int h[N], a[N], solve = 0;

	memset(h, 0, sizeof(h));
	memset(a, 0, sizeof(a));

	for(int i = 0; i < n; i++){
		cin >> ts[i].first >> ts[i].second;

		h[ts[i].first]++;
		a[ts[i].second]++;
	}

	for(int i = 0; i < N; i++){
		solve += h[i] * a[i];
	}

	cout << solve << endl;

}