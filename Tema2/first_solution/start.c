#include <stdio.h>
int main() {
	int n, a[101], s = 0;
	printf("Enter how many items you have to add:\n");
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++){
	scanf_s("%d", &a[i]);
}
	for (int i = 1; i <= n; i++)
		s += a[i];
	printf("\nTheir sum is: % d", s);
}
