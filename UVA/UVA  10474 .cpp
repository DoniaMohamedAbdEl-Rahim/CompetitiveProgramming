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
set<vector<vector<int>>>::iterator it;
map<string, int> mp;
map<string, int> ::iterator itr;
vector<long long> vc;
queue<char> q;
stack<char> stk;
vector<vector<int>> sol;
set<vector<vector<int>>> st;
int n, arr[100000];
int solve(int y) {
	int l = 0, r = n - 1, x = -1;
	while (l <= r) {
		int mid = (l + r) / 2;
		if (arr[mid] >= y)
			r = mid - 1;
		else if (arr[mid] < y)
			l = mid + 1;
		if (arr[mid] == y)
			x = mid;
	}
	return x;
}
int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(NULL), cout.tie(NULL);
	int q, b = 0;
	while (cin >> n >> q && n && q) {
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		b++;
		sort(arr, arr + n);
		cout << "CASE# " << b << ":\n";
		while (q--) {
			int l;
			cin >> l;
			int m = solve(l);
			if (m == -1)
				cout << l << " not found" << endl;
			else cout << l << " found at " << m + 1 << endl;
		}

	}
}
