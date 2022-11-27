#include <stdio.h>
int main() {
	int n, a[101], s = 0, mini, maxi;
	printf("Enter how many items you have to add:\n");
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++) {
		printf(">");
		scanf_s("%d", &a[i]);
	}
	mini = maxi = a[1];
	for (int i = 1; i <= n; i++){		
		if (a[i] >= maxi)
			maxi = a[i];
	
		if (a[i] <= mini)
			mini = a[i];
}
	printf("\nThe maximum number is:\n%d", maxi);
	printf("\nThe minimum number is:\n%d", mini);

}
