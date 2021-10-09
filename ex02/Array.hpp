#ifndef CPP_MODULE07_ARRAY_HPP
#define CPP_MODULE07_ARRAY_HPP


class Array
{
private:
	int m_lenght;
	int *m_data;
public:
	Array() : m_lenght(0), m_data(NULL) {}

	Array(int lenght) : m_lenght(lenght)
	{
		if (lenght > 0)
			m_data = new int[lenght];
		else
			m_data = NULL;
	}

	~Array()
	{
		delete[] m_data;
	}

	void erase()
	{
		delete[] m_data;
		m_data = NULL;
		m_lenght = 0;
	}

	int& operator[](int index)
	{
		return m_data[index];
	}

	int getLenght()	{return m_lenght; }




};
#endif //CPP_MODULE07_ARRAY_HPP
