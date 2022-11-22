#include <stdio.h>
int input() {
	int n;
	printf("How many integers you want to add?\n");
	printf(">");
	scanf_s("%d", &n);
	return n;
}
int input_arr(int n, int arr[]) {
	printf("The numbers are:\n");
	for (int i = 1; i <= n; i++)
	{
		printf(">");
		scanf_s("%d", &arr[i]);

	}
}
int sum(int n, int arr[]) {
	int s = 0;
	for (int i = 1; i <= n; i++)
		s += arr[i];
	return s;

}
void out(int sum_integers) {
	printf("The sum of integers is: \n");
	printf("%d", sum_integers);
}
int main() {
	int nr_integers, arr[101];
	nr_integers = input();
	input_arr(nr_integers, arr);
	out(sum(nr_integers, arr));
}
