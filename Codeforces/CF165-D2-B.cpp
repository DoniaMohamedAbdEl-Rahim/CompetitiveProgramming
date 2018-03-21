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
long long n, m;
bool valid(int y) {
	long long a = m, sum = y;
	while ((y / a) > 0) {
		sum += y / a;
		a *= m;
	}
	return sum >= n;
}
int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(NULL), cout.tie(NULL);
	cin >> n >> m;
	long long l = 1, r = n, ans;
	while (l <= r) {
		int mid = (l + r) / 2;
		if (valid(mid)) {
			ans = mid;
			r = mid - 1;
		}
		else l = mid + 1;
	}
	cout << ans << endl;
}




