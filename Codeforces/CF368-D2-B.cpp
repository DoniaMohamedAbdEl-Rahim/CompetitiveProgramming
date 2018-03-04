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
map<int, int> mp;
map<int, int> ::iterator itr;
vector<long long> v;
vector<long long> vc;
int arr[1000005], l[100000], ans[1000000];
int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(NULL), cout.tie(NULL);
	int a, b;
	cin >> a >> b;
	for (int i = 0; i < a; i++)
		cin >> arr[i];
	for (int i = 0; i < b; i++)
		cin >> l[i];
	for (int i = a - 1; i >= 0; i--) {
		st.insert(arr[i]);
		ans[i] = st.size();
	}
	for (int i = 0; i < b; i++)
		cout << ans[l[i] - 1] << endl;

}
