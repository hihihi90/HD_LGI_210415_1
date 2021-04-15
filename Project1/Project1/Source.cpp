#include<stdio.h>
void main() {
	int a;
	printf("1보다 큰 수를 입력해 보세요.\n");
	scanf_s("%d", &a);
	if (a % 2 == 0) {
		printf("짝수");
	}
	else if (a % 2 == 1) {
		printf("홀수");
	}
	else(a <= 0); {
		printf("Error");
	}
}