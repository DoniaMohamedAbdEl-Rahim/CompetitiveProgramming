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
set<pair<long long, long long> >st;
set<pair<long long, long long> >::iterator it;
map<pair<long long, long long>, long long> mp;
map<pair<long long, long long>, long long> me;
map<pair<long long, long long>, long long> ::iterator itr;
vector<long long> v;
vector<long long> vc;
vector<long long> vr;
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL), cout.tie(NULL);
	long long n, m, k, arr[1000], sum = 0, a[1000];
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		sum += arr[i];
	}
	for (int i = 0; i < m; i++) {
		int y;
		cin >> y;
		a[i] = arr[y-1];
		sum -= arr[y-1];
	}
	sort(a, a + m);
	reverse(a, a + m); 
	for (int i = 0; i < m; i++) {
		if (a[i] > sum)
			sum += a[i];
		else sum *=2;
	}

	cout << sum << endl;
}
