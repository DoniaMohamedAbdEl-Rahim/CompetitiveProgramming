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
vector<int>v1;
vector<int>v2;
int arr[100000];
int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(NULL), cout.tie(NULL);
	int t, i = 1;
	cin >> t;
	while (t--) {
		int n, p, q;
		cin >> n >> p >> q;
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		int l = 0, r = 0;
		int sum = 0, mx = 0;
		while (l < n && r < n) {
			if (sum + arr[r] <= q && r - l + 1 <= p) {
				sum += arr[r];
				r++;
				mx = max(mx, r - l);
			}
			else {
				sum -= arr[l];
				l++;
			}

		}
		cout << "Case " << i << ": " << mx << endl;
		i++;
	}
}




