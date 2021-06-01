#include "Func.h"
#include "CRat.h"
#include "CVectRat.h"

gorCVectRat operator+(const CVectRat& a, const CVectRat& b) {
	gorCVectRat m(a.size());
	for (int i = 0; i < m.size(); i++) {
		m.arr[i] = a.get(i) + b.get(i);
	}
	return m;
};

//CVectRat CVectRat :: operator-(const CVectRat& b) {
//	CVectRat m(size_);
//	for (int i = 0; i < size_; i++) {
//		m.arr[i] = arr[i] - b.arr[i];
//	}
//	return m;
//};

CRat CVectRat :: operator*(const CVectRat& b) {
	CRat a;
	for (int i = 0; i < size_; i++) {
		a = a + arr[i] * b.arr[i];
	}
	return a;
};
int CVectRat::size() const {
	return size_;
}
CVectRat& CVectRat :: operator=(const CVectRat& b) {
	for (int i = 0; i < size_; i++) {
		arr[i] = b.arr[i];
	}
	size_ = b.size();
	
	return *this;
};

void vertCVectRat::print() const {
	cout << "(";
	for (int i = 0; i < size_ - 1; i++) {
		arr[i].print();
		cout << "/n";
	}
	arr[size_ - 1].print();
	cout << ")\n";
}

void gorCVectRat::print() const {
	cout << "(";
	for (int i = 0; i < size_ - 1; i++) {
		arr[i].print();
		cout << " , ";
	}
	arr[size_ - 1].print();
	cout << ")\n";
}
