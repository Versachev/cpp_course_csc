#include <iostream>

void ptr_shift( int * l, int * r) {
	int tmp = *l;
	*l = *r;
	*r = tmp;
}

void rotate(int a[], unsigned size, int shift)
{
	for (int j = 0; j < shift; ++j) {
		int c = 1;
		for (int i = 0; i < size - c; ++i) {
			int ind = i - 1;
			if (ind < 0) {
				ind = size + ind;
			}
			ptr_shift(&a[i], &a[ind]);
			
			
		}
		++c;
	}
}


int main() {
	int a[] = { 1, 2, 3, 4, 5 };
	rotate(a, 5, 2);
	

}