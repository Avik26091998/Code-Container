#include<bits/stdc++.h>
using namespace std;

int main(){

	int t, val = INT_MIN, num[1001];

	string s[1001];

	map<string, int>mp, people;

	cin >> t;

	for(int i = 1; i <= t; ++i) {

		cin >> s[i] >> num[i];
		mp[s[i]] += num[i];
	}
	for(int i = 1; i <= t; ++i){
		
		if(mp[s[i]] > val) val = mp[s[i]];
	}
	for(int i = 1; i <= t; ++i){

		people[s[i]] += num[i];

		if(people[s[i]] >= val && mp[s[i]] == val) {cout << s[i]; return 0;}
	}
	
    return 0;
}
