#include <iostream>
#include "Smart_arr.h"
#include "Smart_arr.cpp"

int main(int argc, char** argv) {

	setlocale(LC_ALL, "rus");

	SmartArr <int> Arr(5);
	Arr.AddArr(1);
	Arr.AddArr(4);
	Arr.AddArr(155);

	SmartArr <int> NewArr(2);
	NewArr.AddArr(44);
	NewArr.AddArr(34);

	Arr.PrintArr();
	NewArr.PrintArr();

	Arr = NewArr;

	Arr.PrintArr();
	NewArr.PrintArr();

	SmartArr<int> ArrTest;
	ArrTest = Arr;

	ArrTest.PrintArr();

	return 0;
}


