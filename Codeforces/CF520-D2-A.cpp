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
	string s;
	int a;
	cin >> a >> s;
	for (int i = 0; i < s.size(); i++) {
		s[i] = tolower(s[i]);
		arr[(s[i] - 'a')]++;
	}
	for (int i = 0; i < 26; i++) {
		if (!arr[i]) {
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;
}
