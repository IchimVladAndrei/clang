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
int maxi(int n, int arr[]) {
	int s = arr[1];
	for (int i = 2; i <= n; i++)
		if (arr[i] >= s)
			s = arr[i];
	return s;

}
int mini(int n, int arr[]) {
	int s = arr[1];
	for (int i = 2; i <= n; i++)
		if (arr[i] <= s)
			s = arr[i];
	return s;

}
void out(int nr) {
	printf("The maximum number is: \n");
	printf("%d\n", nr);
}
void out1(int nr) {
	printf("The minimum number is: \n");
	printf("%d\n", nr);
}
int main() {
	int nr_integers, arr[101];
	nr_integers = input();
	input_arr(nr_integers, arr);
	out(maxi(nr_integers, arr));
	out1(mini(nr_integers, arr));

}
