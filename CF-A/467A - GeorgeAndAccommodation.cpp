#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* const argv[]){
	int rooms, people, capacity, ans = 0;

	cin >> rooms;

	for(int i = 0; i < rooms; i++){
		cin >> people >> capacity;

		if(capacity - people >= 2) ans++;
	}

	cout << ans << endl;

	return 0;
}