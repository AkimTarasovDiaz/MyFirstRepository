#pragma once
#include <stddef.h>

class DynamicArr {
	static const size_t initialCapacity_ = 2;	// only one for all objects of DynamicArr
	static const double coeff_;					// same as above

	size_t size_ = 0;
	size_t capacity_ = initialCapacity_;
	double* arr_;

public:
	DynamicArr();
	DynamicArr(size_t size, double element = 0);
	DynamicArr(const DynamicArr& rhs);
	~DynamicArr();
	double& operator[](size_t i);
	DynamicArr& operator=(const DynamicArr& rhs);
	size_t size() const;
	size_t capacity() const;
	void push_back(double elem);
};