#include "Smart_arr.h"
#include <iostream>

template <class T>
SmartArr <T>::SmartArr(int size) {
	this->size_ = size;
	this->ptr = new T[size_];
}

template <class T>
SmartArr <T>::SmartArr() {
	this->size_ = 0;
	this->count = 0;
	this->ptr = new T[0];
}
template <class T>
SmartArr <T>::~SmartArr() {
	delete[] ptr;	
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
int SmartArr <T>::GetSize() {
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
