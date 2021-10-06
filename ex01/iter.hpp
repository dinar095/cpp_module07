#ifndef CPP_MODULE07_ITER_HPP
#define CPP_MODULE07_ITER_HPP
#include <iostream>

template <typename T>
void iter(T* arr, int len, void(*f)(const T& arg))
{
	for (int i = 0; i < len; i++)
		f(arr[i]);
}

template <typename T>
void print(T& arg)
{
	std::cout << arg << std::endl;
}

#endif //CPP_MODULE07_ITER_HPP
