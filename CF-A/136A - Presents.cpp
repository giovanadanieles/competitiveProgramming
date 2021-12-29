#include <bits/stdc++.h>
using namespace std;

#define MAX 102

int main(int argc, char* const argv[]){
	int friends, aux;
	int ans[MAX];

	cin >> friends;

	for(int i = 1; i <= friends; i++){
		cin >> aux;

		ans[aux] = i;
	}

	for(int i = 1; i <= friends; i++){
		cout << ans[i] << " ";
	}
	cout << endl;

	return 0;
}