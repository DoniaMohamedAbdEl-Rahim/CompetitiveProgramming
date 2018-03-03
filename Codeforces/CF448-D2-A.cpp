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
int arr[27];
int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(NULL), cout.tie(NULL);
	int a1, a2, a3, b1, b2, b3, n, sCup = 0, sMedal = 0, C = 0, M = 0;
	cin >> a1 >> a2 >> a3;
	cin >> b1 >> b2 >> b3;
	cin >> n;
	sCup = a1 + a2 + a3;
	sMedal = b1 + b2 + b3;
	if (sCup % 5)
		C++;
	C += sCup / 5;
	if (sMedal % 10)
		M++;
	M += sMedal / 10;
	if (C+M <= n)
		cout << "YES" << endl;
	else cout << "NO" << endl;
}
