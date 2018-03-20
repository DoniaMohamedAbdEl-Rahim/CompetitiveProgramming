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
bool solve(int c) {
	int sum = 0, cnt = 1;
	for (int i = 0; i < n; i++) {
		if (arr[i] > c)
			return false;
		sum += arr[i];
		if (sum > c) {
			cnt++;
			sum = arr[i];
		}
	}
	return cnt <= m;
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
		int l = 1, r = sum, mni = sum;
		while (l <= r) {
			int mid = (l + r) / 2;
			if (solve(mid)) {
				mni = min(mni, mid);
				r = mid - 1;
			}
			else l = mid + 1;
		}
		cout << mni << endl;
	}

}




