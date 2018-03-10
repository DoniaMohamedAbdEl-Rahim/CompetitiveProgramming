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
map<string, long long> mp;
map<string, long long> ::iterator itr;
queue<char> q;
stack<char> stk;
vector<int> v;
int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(NULL), cout.tie(NULL);
	int a,b;
	long long sa;
	string s,str;
	cin>>a>>b;
	for(int i=0;i<a;i++){
	    cin>>s>>sa;
	    mp[s]+=sa;
	}

	while(b--){
	    long long sum=0;  
	    while(cin>>str ){
	        if(str== ".")
	        break;
	        if(mp[str]){
	         sum+=mp[str];
	        }
	    }
	    cout<<sum<<endl;
	}

}
