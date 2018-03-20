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
int n, m, arr[100000];
int solve(int c) {
	int cnt = 0, cap = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] > c)
			return 1000000;
		if (cap < arr[i])
			cap = c, cnt++;
		cap -= arr[i];
	}
	return cnt;
}

int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(NULL), cout.tie(NULL);
	while (cin >> n >> m) {
		int sum = 0;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
			sum += arr[i];
		}
		int l = 0, r = sum;
		while (l < r) {
			int mid = (l + r) / 2;
			int y = solve(mid);
			if (y > m)
				l = mid + 1;
			else r = mid;
		}
		cout << l << endl;
	}

}
