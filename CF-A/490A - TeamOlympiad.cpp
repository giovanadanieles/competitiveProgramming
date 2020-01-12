#include <bits/stdc++.h>
using namespace std;

bool compare(const pair<int, int> &a, const pair<int, int> &b){
	return a.second < b.second;
}

int main(){
	int n, aux;
	vector < pair <int, int> > st;

	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> aux;



		st.push_back(make_pair(i, aux));
	}

	sort(st.begin(), st.end(), compare);

	while(i < n){
		
	}


	return 0;
}