#include<stdio.h>
#define N 10
void Sort(int Stu[], int n); //�������������麯��
void Sort(int Stu[], int n) { //���庯��
	int i, k, t;   // ������
	for (k = 1; k <= n - 1; k++) { //����ѭ��
		for (i = n - 1; i >= k; i--) { //�����һ��Ԫ�ؿ�ʼ��ֻҪ��ǰ��С����ǰ��
			if (Stu[i] < Stu[i - 1]) {
				t = Stu[i];
				Stu[i] = Stu[i - 1];
				Stu[i - 1] = t;
			}
			
		}
	}
}
void main() {
	int i;
	int Gao[N];
	for (i = 0; i < N; i++)
		scanf_s("%d", &Gao[i]);
	Sort(Gao, N); //��������
	for (i = 0; i < N; i++)
		printf("%d", Gao[i]);
}