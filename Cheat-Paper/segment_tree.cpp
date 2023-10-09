#include<iostream>
using namespace std;
int arr[];		//Ʈ���� ����
int n;			//n�� ������ ����
int query(int lt, int rt) {	//left�� right. left=(����)+base-1 // right=(������)+base-1
	int sum = 0;			//�κ��� ���ϴ� query�Լ�
	while (lt <= rt) {
		if (lt % 2) {
			sum += arr[lt];
			lt++;
		}
		if (!(rt % 2)) {
			sum += arr[rt];
			rt--;
		}
		lt /= 2;
		rt /= 2;
	}
	return sum;
}

void update(int idx, int value) {	//Ư�� ��ȣ�� ���� update
	arr[idx] = value;
	for (int i = idx / 2; i >= 1; i /= 2)
		arr[i] = arr[i * 2] + arr[i * 2 + 1];
}

int main() {
	int base;
	for (base = 1; base < n; base *= n);
	for (int i = 0; i < n; i++)
		cin >> arr[base + 1];
	for (int i = base - 1; i >= 1; i--)
		arr[i] = arr[i * 2] + arr[i * 2] + 1;	//���ļ� segment tree ����
	

	return 0;
}