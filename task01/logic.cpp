void shift(int *x, int *y) {
	*x = *x + *y;
	*y = *x - *y;
	*x = *x - *y;
}
void swap(int* a, int* b, int* c) {
	shift(a, b);
	shift(a, c);
}