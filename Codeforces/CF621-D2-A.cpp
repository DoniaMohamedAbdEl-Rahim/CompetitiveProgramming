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
int arr[1000000];
int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(NULL), cout.tie(NULL);
	long long a, p = LONG_MAX, l, sum = 0;
	cin>>a;
	for (int i = 0; i < a; i++) {
		cin >> l;
		sum += l;
		if (l % 2 && l < p) p = l;
	} 
	if (sum % 2 == 0)
		cout << sum << endl;
	else cout << sum - p << endl;
}
