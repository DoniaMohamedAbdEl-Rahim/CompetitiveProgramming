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
vector<long long> v;
vector<long long> vc;
queue<char> q;
stack<char> stk;
int arr[10000]
; int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(NULL), cout.tie(NULL);
	long long n, l, r, x, ans = 0;
	cin >> n >> l >> r >> x;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int i = 0; i < (1 << n); i++) {
		long long p = i, sum = 0, y = 0, mx = LONG_MIN, mn = LONG_MAX;
		while (p) {
			if (p & 1) {
				sum += arr[y];
				if (arr[y] > mx)
					mx = arr[y];
				if (arr[y] < mn)
					mn = arr[y];
			}
			p = (p >> 1);
			y++;
		}
		if ((mx - mn) >= x && (sum <= r && sum >= l))
			ans++;
	}
	cout << ans << endl;
}
