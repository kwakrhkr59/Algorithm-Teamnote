#include<iostream>
#include<queue>
#include<vector>
using namespace std;
bool visit[];
vector<pair<int, int>> vt[];	// first�� ���ݱ��� �� �Ÿ�, second�� node ��ȣ
queue<pair<int,int>> qu;
int main() {
	qu.push({ 0,0 });	// first�� ���ݱ��� �� �Ÿ�, second�� node ��ȣ
	while (!qu.empty()) {
		int sum = qu.front().first;
		int node = qu.front().second;
		qu.pop();
		visit[node] = 1;
		for (auto x : vt[node]) {
			if (!visit[x.second])
				qu.push({ sum + x.first, x.second });
		}
	}

}