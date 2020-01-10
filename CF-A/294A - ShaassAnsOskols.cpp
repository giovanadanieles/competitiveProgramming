#include <bits/stdc++.h>
using namespace std;

const int N = 107;

int main(){
	int w, d; 
	int bw[N];
	pair <int, int> db[N];

	cin >> w;

	for(int i = 1; i <= w; i++){
		cin >> bw[i];
	}

	cin >> d;

	for(int i = 0; i < d; i++){
		cin >> db[i].first >> db[i].second;
	}

	for(int i = 0; i < d; i++){
		if(db[i].first == 1){
			bw[2] += bw[1] - db[i].second;
			bw[1] = 0;
		}
		else if(db[i].first == w){
			bw[w-1] += db[i].second - 1;
			bw[w] = 0;
		}
		else{
			bw[db[i].first - 1] += db[i].second - 1;
			bw[db[i].first +1] += bw[db[i].first] - db[i].second;
			bw[db[i].first] = 0;
		}
	}

	for(int i = 1; i <= w; i++){
			cout << bw[i] << endl;
		}

	return 0;
}