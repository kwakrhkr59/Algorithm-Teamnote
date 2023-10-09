#include<iostream>
using namespace std;
int parent[];
int fnd(int node) {
	if (parent[node] == node) return node;
	return parent[node] = fnd(parent[node]);
}

int merge(int x, int y) {
	x = fnd(x);
	y = fnd(y);
	if (x == y) return;
	parent[y] = x;	//������������ parent�� child �����Ѵٸ� �� �κ� ����
}

int main() {
	for (int i = 1; i <= 1e9; i++)
		parent[i] = i;
	//���⼭���� �Է�
	return 0;
}