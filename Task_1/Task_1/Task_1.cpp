#include <iostream>
#include <Windows.h>
#include "Smart_arr.h"
#include "Smart_arr.cpp"


int main(int argc, char** argv) {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	try {
		SmartArr<int> arr(5);
		SmartArr<int> arr2;
		arr.AddArr(2);
		arr.AddArr(67);
		arr.AddArr(23);
		arr.AddArr(53);
		arr.AddArr(27);

		std::cout << arr.GetElement(1) << std::endl;

	}
	catch (const std::exception& ex) {
		std::cout << ex.what() << std::endl;
	}

	return 0;
}