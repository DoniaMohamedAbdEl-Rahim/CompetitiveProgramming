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
vector<int> v;
int arr[100][100], vis[100];
int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(NULL), cout.tie(NULL);
	int a, l = 0;
	cin >> a;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < a; j++) {
			cin >> arr[i][j];
			if (arr[i][j] > l)
				l = arr[i][j];
		}
		v.push_back(l);
		l = 0;
	}
	for (int i = 0; i < a; i++) {
		vis[(v[i])]++;
		if (vis[(v[i])] == 1)
			cout << v[i] << " ";
		else cout << a << " ";
	}



}
