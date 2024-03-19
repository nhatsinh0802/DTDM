#include <stdio.h>
#include <math.h>
// Hàm kiểm tra số chính phương
int isPerfectSquare(int num) {
	int i;
	for (i = 1; i * i <= num; i++) {
		if (i * i == num)
			return 1;
	}
	return 0;
}

// Hàm đếm và in ra các số chính phương nhỏ hơn n
void printPerfectSquares(int n) {
	int count = 0;

	printf("Các số chính phương nhỏ hơn %d:\n", n);

	for (int i = 1; i < n; i++) {
		if (isPerfectSquare(i)) {
			printf("%d ", i);
			count++;
		}
	}

	printf("\nTổng số chính phương: %d\n", count);
}

int main() {
	int n;

	printf("Nhập n: ");
	scanf_s("%d", &n);

	printPerfectSquares(n);

	// Đợi người dùng nhấn phím bất kỳ trước khi kết thúc chương trình
	getchar();
	return 0;
}