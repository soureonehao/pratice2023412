#include<stdio.h>
#define N 10
void Sort(int Stu[], int n); //声明函数，数组函数
void Sort(int Stu[], int n) { //定义函数
	int i, k, t;   // 函数体
	for (k = 1; k <= n - 1; k++) { //遍历循环
		for (i = n - 1; i >= k; i--) { //从最后一个元素开始，只要比前面小就往前调
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
	Sort(Gao, N); //函数调用
	for (i = 0; i < N; i++)
		printf("%d", Gao[i]);
}