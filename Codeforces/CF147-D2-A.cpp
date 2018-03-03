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
	string arr[10000], s;
	bool f = 0;
	int i = 0;
	getline(cin, s);
	for (int i = 0; i < s.size(); i++) {
		if (isalpha(s[i])) {
			cout << s[i];
			f = 1;
		}
		else if (s[i] != ' ' && !isalpha(s[i])) {
			cout << s[i];
			if (isalpha(s[i + 1]))
				cout << " ";
		}
		else if (s[i] == ' ') {
			for (int k = i; k < s.size(); k++)
				if (s[k] != ' ' && !isalpha(s[k]))
					cout << s[k];
				else if (isalpha(s[k])) {
					cout << " ";
					i = k - 1;
					break;
				}
		}
	}
}
