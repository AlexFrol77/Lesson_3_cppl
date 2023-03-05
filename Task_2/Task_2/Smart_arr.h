#pragma once


template <class T>
class SmartArr {
public:
	SmartArr();
	SmartArr(int size);
	SmartArr(const SmartArr<T> &other);
	~SmartArr();

	void AddArr(T num);

	int GetSize();

	int GetCount();

	int GetCapacity();

	bool CheckIndex(int num);

	bool GetEmpty();

	void PrintArr();

	T GetElement(int num);

	T operator[](int num);

	SmartArr<T> &operator=(const SmartArr<T> &r_op);

private:
	int size_ = 0;
	T* ptr = nullptr;
	int count = 0;

};
