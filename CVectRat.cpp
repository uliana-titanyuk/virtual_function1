#include "Func.h"
#include "CRat.h"
#include "CVectRat.h"

CVectRat CVectRat :: operator+(const CVectRat& b) {
	CVectRat m(size);
	for (int i = 0; i < size; i++) {
		m.arr[i] = arr[i] + b.arr[i];
	}
	return m;
};

CVectRat CVectRat :: operator-(const CVectRat& b) {
	CVectRat m(size);
	for (int i = 0; i < size; i++) {
		m.arr[i] = arr[i] - b.arr[i];
	}
	return m;
};

CRat CVectRat :: operator*(const CVectRat& b) {
	CVectRat m(size);
	CRat a;
	for (int i = 0; i < size; i++) {
		a = a + arr[i] * b.arr[i];
	}
	return a;
};
int CVectRat:: size(const CVectRat) {
	CVectRat m(size);
	return size;
}
CVectRat& CVectRat :: operator=(const CVectRat& b) {
	for (int i = 0; i < size; i++) {
		arr[i] = b.arr[i];
	}
	size = b.size;
	
	return *this;
};

void vertCVectRat::vertprint(int w) {
	cout << "(";
	for (int i = 0; i < w - 1; i++) {
		arr[i].print();
		cout << "/n";
	}
	arr[w - 1].print();
	cout << ")\n";
};
void gorCVectRat::gorprint(int w) {
	cout << "(";
	for (int i = 0; i < w - 1; i++) {
		arr[i].print();
		cout << " , ";
	}
	arr[w - 1].print();
	cout << ")\n";
};
