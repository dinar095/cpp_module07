#ifndef CPP_MODULE07_ARRAY_HPP
#define CPP_MODULE07_ARRAY_HPP

template <class T>

class Array
{
private:
	unsigned int len;
	T *arr;
public:
	Array() : len(0), arr(NULL) {}

	Array(unsigned int len) : len(len)
	{
		if (len > 0)
			arr = new T[len];
		else
			arr = NULL;
	}

	~Array()
	{
		delete[] arr;
	}

class ErrExcept : public std::exception
		{
			const char* what() const throw() { return "Overflow index"; }
		};
	T &operator[](unsigned int index)
	{
		if (index < 0 || index >= len)
			throw Array<T>::ErrExcept();
		return arr[index];
	}

	T const &operator[](unsigned int index) const
	{
		return (operator[](index));
	}

	Array<T>& operator=(Array<T> const &src)
	{
		if (this->len > 0)
			delete[] this->arr;
		if (src.len)
		{
			arr = new T[src.len]();
			for (unsigned int i = 0; i < src.len; i++)
				arr[i] = src.arr[i];
			len = src.len;
		}
		len = src.len;
		return *this;
	}

	Array(Array<T> const &src) : len(0), arr(NULL)
	{
		*this = src;
	}
};


#endif //CPP_MODULE07_ARRAY_HPP
