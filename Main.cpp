#include <iostream>
#include "store.h"
using namespace std;
int main() {
	store A[5], * B;
	cout << " " << sizeof(store) << endl;
	cout << " " << sizeof(A) << endl;
	for (int i = 0; i < 5; i++) {
		A[i] = store(i + 2, 3, 4, 5, 1000 + 100 * i, 500, 600, 700, i + 10, 11, 12, 13);
	}
	cout << sizeof(B[0]) << endl;
	return 123;
}