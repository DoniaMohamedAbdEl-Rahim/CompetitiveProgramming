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
int l , m , n ;
bool f = false;
void solve(int a, int b, int c) {

	for (int i = -100; i <= 100; i++) 
		for (int j = i+1; j <= 100; j++) {
		for(int k=j+1;k<=100;k++){
			if (i + j + k== a && i*j*k == b && i*i + j*j + k*k == c) {
				l = i, m = j, n = k;
				f = true; 
			}
		}
		}
}
int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(NULL), cout.tie(NULL);
	int t, a, b, c;
	cin >> t;
	while (t--) {
		cin >> a >> b >> c;
		solve(a, b, c);
		if (!f)
			cout << "No solution." << endl;
		else cout << l <<" "<< m <<" "<< n<< endl;
		f = false;
	}
}
