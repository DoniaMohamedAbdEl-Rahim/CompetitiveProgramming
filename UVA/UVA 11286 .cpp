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
set<int> st;
set<int> ::iterator it;
map<string, int> mp;
map<string, int> ::iterator itr;
queue<int> q;
stack<int> stk;
priority_queue<int> pq;
int arr[1000];
int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(NULL), cout.tie(NULL);
	int a;
	while (cin >> a && a) {
		int l = a;
		while (a--) {
			for (int j = 0; j < 5; j++)
				cin >> arr[j];

			sort(arr, arr + 5);
			string s;
			for (int k = 0; k < 5; k++) {
				int m = arr[k];
				stringstream ss;
				ss << m;
				string str = ss.str();
				s += str;
			}
			mp[s]++;
		}
		int mx = 0, mm = 0;
		for (itr = mp.begin(); itr != mp.end(); itr++) {
			if ((itr->second) > mx)
				mx = itr->second, mm = itr->second;
			else if (itr->second == mx)
				mm += itr->second;
		}
		cout << mm << endl;
		mp.clear();
	}
}
