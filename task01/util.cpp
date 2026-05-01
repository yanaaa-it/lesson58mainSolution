#include"util.h"
void print(string msg) {
	cout << msg;
}


void remove(int* array) {
	if (array != NULL) {
		delete[] array;
	}
}