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
vector<string> v;
vector<long long> vc;
queue<char> q;
stack<char> stk;
int arr[10000];
int cnt = 0;
void sum(int a) {
	if (a < 0)
		return;
	sum(a - 1);
	for (int i = 0; i < a; i++)
		if (arr[i] <= arr[a])
			cnt++;

}
int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(NULL), cout.tie(NULL);
	int t, a;
	cin >> t;
	while (t--) {
		cin >> a;
		for (int i = 0; i < a; i++)
			cin >> arr[i];
		sum(a - 1);
		cout << cnt << endl;
		cnt = 0;
	}
}
