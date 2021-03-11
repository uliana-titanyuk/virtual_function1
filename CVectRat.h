  
#pragma once
#include <iostream>
#include <string>
#include <algorithm> 
#include <stdio.h>
#include <math.h>
#include "CRat.h"
using namespace std;


class CVectRat {
protected:
	CRat* arr;
	int size;
	string filename;
public:
	CVectRat() 
	virtual ~CVectRat() 
	
	
	CVectRat(int size) {
		arr = new CRat[size];
		for (int i = 0; i < size; i++) {
			CRat m;
			arr[i] = m;
		}
		this->size = size;
	};

	CVectRat(const CVectRat& other) {
		this->size = other.size;
		this->arr = new CRat[other.size];
		for (int i = 0; i < other.size; i++) {
			arr[i] = other.arr[i];
		}
	};

	~CVectRat() {
		delete[] arr;
		size = 0;
	};
	void Set_arr(int i, CRat m) {
		this->arr[i] = m;
	};
	string Filename() {
		return filename;
	}

	CVectRat operator+(const CVectRat& b);
	CVectRat operator-(const CVectRat& b);
	CRat operator*(const CVectRat& b);
	CVectRat& operator=(const CVectRat& b);
	virtual int output(const char* FileName) = 0;
	friend class CRat;
	
};