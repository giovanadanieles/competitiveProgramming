#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* const argv[]){
	int seqSize, oldNum, newNum, count = 1, ans = 1;

	cin >> seqSize;

	cin >> oldNum;
	for(int i = 1; i < seqSize; i++){
		cin >> newNum;

		if(oldNum <= newNum) count++;
		else count = 1;

		oldNum = newNum;
		ans = max(ans, count);
	}

	cout << ans << endl;

	return 0;
}