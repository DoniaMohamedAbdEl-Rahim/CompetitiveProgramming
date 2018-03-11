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
queue<string> q;
stack<char> stk;

void gen() {
	int p = 1;
	for (char i = 'a'; i <= 'z'; i++) {
		string s;
		s = i;
		mp[s] = p;
		p++;
	}
	for (char i = 'a'; i <= 'z'; i++) {
		for (char j = i + 1; j <= 'z'; j++) {
			string s;
			s += i;
			s += j;
			mp[s] = p;
			p++;
		}
	}

	for (char i = 'a'; i <= 'z'; i++)
		for (char j = i + 1; j <= 'z'; j++)
			for (char k = j + 1; k <= 'z'; k++) {
				string s;
				s += i;
				s += j;
				s += k;
				mp[s] = p;
				p++;
			}

	for (char i = 'a'; i <= 'z'; i++)
		for (char j = i + 1; j <= 'z'; j++)
			for (char k = j + 1; k <= 'z'; k++)
				for (char l = k + 1; l <= 'z'; l++) {
					string s;
					s += i;
					s += j;
					s += k;
					s += l;
					mp[s] = p;
					p++;
				}

	for (char i = 'a'; i <= 'z'; i++)
		for (char j = i + 1; j <= 'z'; j++)
			for (char k = j + 1; k <= 'z'; k++)
				for (char l = k + 1; l <= 'z'; l++)
					for (char y = l + 1; y <= 'z'; y++) {
						string s;
						s += i;
						s += j;
						s += k;
						s += l;
						s += y;

						mp[s] = p;
						p++;
					}



}
int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(NULL), cout.tie(NULL);
	string s;
	gen();
	while (cin >> s) {
		cout << mp[s] << endl;
	}

}
