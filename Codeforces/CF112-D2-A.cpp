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
	string s1, s2;
	int l = 0;
	cin >> s1 >> s2;
	if (s1.size() < s2.size()) {
		cout << 1 << endl;
		return 0;
	}
	if (s1.size() > s2.size()) {
		cout << -1 << endl;
		return 0;
	}
	for (int i = 0; i < s1.size(); i++) {
		s1[i] = tolower(s1[i]);
		s2[i] = tolower(s2[i]);
		if (s1[i] > s2[i]) {
			cout << 1 << endl;
			return 0;
		}
		else if (s1[i] < s2[i]) {
			cout << -1 << endl;
			return 0;
		}
	}
	cout << 0 << endl;

}
