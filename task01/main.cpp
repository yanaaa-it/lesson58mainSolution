#include"util.h"

int main() {
	int* a = new int();
    int* b = new int();
	int* c = new int();

	cout << "input a,b,c:";
	cin >> *a >> *b >> *c;

	print("Befor: "+to_string(*a) + " " + to_string(*b) + " " + to_string(*c) + "\n");
	swap(a, b, c);
	print("After: "+to_string(*a) + " " + to_string(*b) + " " + to_string(*c) + "\n");

	remove(a);
	remove(b);
	remove(c);

	return 0;
}