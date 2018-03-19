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
set<string> st;
set<string> ::iterator it;
map<string, int> mp;
map<string, int> ::iterator itr;
vector<string> v;
vector<long long> vc;
queue<char> q;
stack<char> stk;
int cap[22], n, vis[22], ans[22], capa, f[22];
int best_sum = 0, best_cur = 0;
bool ok() {
	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += cap[i] * vis[i];
	return sum <= capa;
}
void check() {
	int sum = 0, cur = 0;
	for (int i = 0; i < n; i++) {
		sum += cap[i] * vis[i];
		cur += vis[i];
	}
	if (sum > best_sum || (sum == best_sum && cur >= best_cur)) {
		for (int i = 0; i < n; i++) {
			ans[i] = cap[i] * vis[i];
			f[i] = vis[i];
		}
		best_sum = sum;
		best_cur = cur;
	}
}
void solve(int i = 0) {
	if (i == n) {
		if (ok())
			check();
		return;
	}
	solve(i + 1);
	vis[i] = 1;
	solve(i + 1);
	vis[i] = 0;

}

int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(NULL), cout.tie(NULL);
	while (cin >> capa) {
		cin >> n;
		for (int i = 0; i < n; i++)
			cin >> cap[i];
		solve();
		int sum = 0;
		for (int i = 0; i < n; i++) {
			if (f[i]) {
				sum += ans[i];
				cout << cap[i] << " ";
			}
		}
		cout << "sum:" << sum << endl;
		best_sum = 0, best_cur = 0;
	}
}
