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
	long long a, q;
	long long typ, l, r, x;
	cin >> a;
	for (int i = 1; i <= a; i++) {
		cin >> x;
		v.push_back(x);
		vc.push_back(x);
	}
	sort(vc.begin(), vc.end());
	for (int i = 1; i < a; i++) {
		v[i] += v[i - 1];
		vc[i] += vc[i - 1];
	}

	cin >> q;
	while (q--) {
		cin >> typ >> l >> r;
		if (l > r)
			swap(l, r);

		if (typ == 1 && l - 2 >= 0)
			cout << abs(v[r - 1] - v[l - 2]) << endl;
		else if (typ == 1)
			cout << v[r - 1] << endl;
		else if (typ == 2 && l - 2 >= 0)
			cout << abs(vc[r - 1] - vc[l - 2]) << endl;
		else cout << vc[r - 1] << endl;
	}

}
