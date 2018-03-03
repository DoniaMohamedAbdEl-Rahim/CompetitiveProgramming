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
long long arr[1000000], ar[1000000];
int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(NULL), cout.tie(NULL);
	long long a, q, x, l, r, m=0;
	cin >> a;
	for (int i = 0; i < a; i++)
		cin >> arr[i];

	cin >> q;
	while (q--) {
		cin >> l >> r;
		if (l > r)
			swap(l, r);
		l--;
		ar[l] += -1;
		ar[r] += 1;
	}
	for (int i = 1; i <= a; i++)
		ar[i] += ar[i - 1];

	for (int i = 0; i < a; i++)
		if (ar[i] >= 0) {
			vc.push_back(arr[i]);
			m++;
		}
	cout << m << endl;
	for (int i = 0; i < m; i++)
		cout << vc[i] << " ";

}
