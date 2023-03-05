#include "Smart_arr.h"
#include <iostream>


template <class T>
SmartArr<T>::SmartArr() {
	this->size_ = 0;
	this->count = 0;
	T* ptr = new T[0];
	this->ptr = ptr;
}

template <class T>
SmartArr<T>::SmartArr(int size) {
	this->size_ = size;
	this->ptr = new T[size_];
}

template <class T>
SmartArr <T>::SmartArr(const SmartArr<T> &other) {
	this->ptr = new T[other.size_];
	for (int i = 0; i < other.count; i++) {
		 this->ptr[i] = other.ptr[i];
	}
	this->size_ = other.size_;
	this->count = other.count;
}

template <class T>
SmartArr <T>::~SmartArr() {
	delete[] ptr;
	//std::cout << "Delete Array" << std::endl;
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
bool SmartArr<T>::CheckIndex(int num) {
	if (GetSize() == 0) {
		throw std::runtime_error("Массив пустой");
	}
	else if (num >= 0 && num < GetSize()) {
		return true;
	}
	else {
		return false;
	}
}

template <class T>
T SmartArr<T>::GetElement(int num) {
	if (CheckIndex(num)) {
		return ptr[num];
	}
	else {
		throw std::runtime_error("Неверный индекс");
	}
}

template <class T>
T SmartArr<T>::operator[](int num) {
	if (CheckIndex(num)) {
		return ptr[num];
	}
	else {
		throw std::runtime_error("Неверный индекс");
	}
}

template<class T>
SmartArr<T> &SmartArr<T>::operator=(const SmartArr<T> &r_op) {
	if (this == &r_op) {
		return *this;
	}
	else {
		delete[] ptr;
		this->ptr = new T[r_op.size_];
		for (int i = 0; i < r_op.size_; i++) {
			this->ptr[i] = r_op.ptr[i];
		}
		this->size_ = r_op.size_;
		this->count = r_op.count;
		return *this;
	}
}