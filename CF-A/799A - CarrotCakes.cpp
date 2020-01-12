#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, t, k, d;
	int to = 0, co = 0;
	int time = 0, sectime = 0, tn = 0;

	cin >> n >> t >> k >> d;

	//Time using just one oven
	while(co < n){
		to += t; // to = time using one oven
		co += k;
	}

	//Time using two ovens
	while(tn < n){
		if(time == d){
			tn += k;
			sectime = time + t;
		}
		if(time >= d && time % (t + d) == 0){
			tn += k;
			sectime = time + t;
		}
		if(time % t == 0){
			tn += k;
			sectime = time + t;
		}

		time++;
	}

	if(to <= sectime) cout << "NO" << endl;
	else cout << "YES" << endl;

	return 0;
}
