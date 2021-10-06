#ifndef CPP_MODULE07_WHATEVER_HPP
#define CPP_MODULE07_WHATEVER_HPP

using std::cout;
using std::endl;

template <typename T>
const T& max(const T& a, const T& b)
{
	return (a > b) ? a : b;
}

template <typename T>
const T& min(const T& a, const T& b)
{
	return (a > b) ? b : a;
}

template <typename T>
void swap(T& a, T& b)
{
	T tmp;

	tmp = a;
	a = b;
	b = tmp;
}

#endif //CPP_MODULE07_WHATEVER_HPP
