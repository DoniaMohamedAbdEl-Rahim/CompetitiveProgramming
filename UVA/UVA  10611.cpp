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
set<vector<int, int>>::iterator it;
map<string, int> mp;
map<string, int> ::iterator itr;
vector<long long> vc;
queue<char> qu;
stack<char> stk;
int arr[100000];
int  a, n;
int right(int n) {
	int l = 0, r = a - 1, y = -1;
	while (l <= r) {
		int mid = (l + r) / 2;
		if (arr[mid] < n) {
			l = mid + 1;
			y = mid;
		}
		else  r = mid - 1;
	}
	return y;
}
int left(int n) {
	int l = 0, r = a - 1, y = -1;
	while (l <= r) {
		int mid = (l + r) / 2;
		if (arr[mid] > n) {
			r = mid - 1;
			y = mid;
		}
		else  l = mid + 1;
	}
	return y;
}
int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(NULL), cout.tie(NULL);
	int q;
	cin >> a;
	for (int i = 0; i < a; i++)
		cin >> arr[i];
	cin >> q;
	while (q--) {
		cin >> n;
		int x = right(n);
		int y = left(n);
		if (x != -1)
			cout << arr[x] << " ";
		else cout << "X" << " ";
		if (y != -1)
			cout << arr[y] << endl;
		else cout << "X" << endl;
		x = -1, y = -1;
	}


}
