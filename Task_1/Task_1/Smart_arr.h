#pragma once


template <class T>
class SmartArr {
public:
	SmartArr(int size);
	SmartArr();
	SmartArr(const SmartArr<T>&) = delete;
	~SmartArr();

	void AddArr(T num);

	int GetSize();

	int GetCapacity();

	bool GetEmpty();

	T GetElement(int num);

	SmartArr<T>& operator=(const SmartArr<T>&) = delete;

	T operator[](int num);

	bool CheckIndex(int num);

private:
	int size_;
	T* ptr;
	int count = 0;

};