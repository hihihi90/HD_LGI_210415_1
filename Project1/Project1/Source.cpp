#include<stdio.h>
void main() {
	int a;
	printf("1���� ū ���� �Է��� ������.\n");
	scanf_s("%d", &a);
	if (a % 2 == 0) {
		printf("¦��");
	}
	else if (a % 2 == 1) {
		printf("Ȧ��");
	}
	else(a <= 0); {
		printf("Error");
	}
}