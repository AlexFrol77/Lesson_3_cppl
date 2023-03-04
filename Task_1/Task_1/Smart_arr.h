#pragma once


template <class T>
class SmartArr {
public:
	SmartArr(int size);
	~SmartArr();

	void AddArr(T num);

	int GetSize();

	int GetCapacity();

	bool GetEmpty();

	T GetElement(int num);

	T operator[](int num);

private:
	int size_;
	T* ptr;
	int count = 0;

};