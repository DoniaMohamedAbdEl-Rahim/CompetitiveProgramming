#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<sstream>
#include<iomanip>
#include <utility>
#include<map>
#include<set>
#include<iterator>
#include<stack>
#include<bitset>
#include<queue>
#include<deque>
#define all(v) ((v).begin()) , ((v).end())
#define sz(v) ((int)((v).size()))
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
set<pair<int, int>> st;
set<pair<int, int>> ::iterator it;
map<int, int> mp;
map<int, int> ::iterator itr;
vector<long long> v;
vector<long long> vc;

int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(NULL), cout.tie(NULL);
	long long  a, R = 0, mn = 1000000000;
	string s;
	while (1) {
		cin >> a;
		if (a == 0)
			return 0;
		cin >> s;
		mn = 1000000000;
		map<int, int> mp;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == 'Z') {
				mn = 0;
				break;
			}
			if (s[i] == 'D')
				mp[s[i]] = i;
			else if (s[i] == 'R')
				mp[s[i]] = i;
			if (mp.size() == 2) {
				R = abs(mp['D'] - mp['R']);
				if (R < mn)
					mn = R;
			}
		}
		cout << mn << endl;
	}

}
