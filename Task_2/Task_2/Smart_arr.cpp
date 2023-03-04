#include "Smart_arr.h"
#include <iostream>

template <class T>
SmartArr<T>::SmartArr(int size) {
	this->size_ = size;
	this->ptr = new T[size_];
}
template <class T>
SmartArr<T>::~SmartArr() {
	delete[] ptr;
	//std::cout << "Удаление массива" << std::endl;
}
template <class T>
void SmartArr<T>::AddArr(T num) {
	if (count < size_) {
		ptr[count] = num;
		count++;
	}
	else {
		throw std::runtime_error("Переполнение массива");
	}
}
template <class T>
int SmartArr<T>::GetSize() {
	return count;
}
template <class T>
int SmartArr<T>::GetCount() {
	return count;
}
template <class T>
int SmartArr<T>::GetCapacity() {
	return size_;
}
template <class T>
bool SmartArr<T>::GetEmpty() {
	return count;
}
template <class T>
void SmartArr<T>::PrintArr() {
	std::cout << "Массив: " << std::endl;
	for (int i = 0; i < count; i++) {
		std::cout << i << ") " << ptr[i] << std::endl;
	}
	std::cout << "Размер: " << count << std::endl;
	std::cout << std::endl;
}
template <class T>
T SmartArr<T>::GetElement(int num) {
	return ptr[num];
}
template <class T>
T SmartArr<T>::operator[](int num) {
	return ptr[num];
}
template<class T>
SmartArr<T> &SmartArr<T>::operator=(SmartArr<T> &r_op) {
	delete[] ptr;
	this->ptr = new T[r_op.GetSize()];
	for (int i = 0; i < r_op.GetSize(); i++) {
		this->ptr[i] = r_op[i];
	}
	this->size_ = r_op.GetSize();
	this->count = r_op.GetCount();
	return *this;
}
