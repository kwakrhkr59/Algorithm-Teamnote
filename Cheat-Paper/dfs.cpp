#include<iostream>
#include<vector>
using namespace std;
int arr[];
bool visit[];
vector<int> vt[];
void dfs(int node) {	//�ΰ����� �������ǿ� ���� return ���� �� for�� �� �۾� ���� �ʿ�
	if (visit[node]) return;
	visit[node] = 1;
	for (auto x : vt[node]) {
		dfs(x);
	}
}
