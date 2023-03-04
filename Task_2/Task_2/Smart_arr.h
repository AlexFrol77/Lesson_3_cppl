#pragma once


template <class T>
class SmartArr {
public:
	SmartArr(int size);
	~SmartArr();

	void AddArr(T num);

	int GetSize();

	int GetCount();

	int GetCapacity();

	bool GetEmpty();

	void PrintArr();

	T GetElement(int num);

	T operator[](int num);

	SmartArr<T> &operator=(SmartArr<T> &r_op);

private:
	int size_;
	T* ptr;
	int count = 0;

};
