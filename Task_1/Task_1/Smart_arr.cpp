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
	/*std::cout << "”даление массива" << std::endl;*/
}
template <class T>
void SmartArr<T>::AddArr(T num) {
	if (count < size_) {
		ptr[count] = num;
		count++;
	}
	//else {									// ’отел сделать расшир€ющий массив)))
	//	size_ *= 2;
	//	int* ptr_new = new int[size_];
	//	for (int i = 0; i < size_; i++) {
	//		ptr_new[i] = ptr[i];
	//	}
	//	delete[] ptr;
	//	ptr = nullptr;
	//	ptr_new[count] = num;
	//	count++;
	//	ptr = ptr_new;
	//	ptr_new = nullptr;
	//}
	else {
		throw std::runtime_error("ѕереполнение массива");
	}
}
template <class T>
int SmartArr<T>::GetSize() {
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
T SmartArr<T>::GetElement(int num) {
	return ptr[num];
}
template <class T>
T SmartArr<T>::operator[](int num) {
	return ptr[num];
}
