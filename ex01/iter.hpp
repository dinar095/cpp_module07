#ifndef CPP_MODULE07_ITER_HPP
#define CPP_MODULE07_ITER_HPP

template <typename T>
void iter(T* arr, int len, void(*f)(const T& arg))
{
	for (int i = 0; i < len; i++)
		f(arr[i]);
}

#endif //CPP_MODULE07_ITER_HPP
