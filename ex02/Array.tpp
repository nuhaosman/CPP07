template <class T>
Array<T>::Array()
{
	_arr = new T[0];
	_size = 0;
}


template <class T>
Array<T>::Array(unsigned int the_asigned_size)
{
	T*	init = new T();

	_size = the_asigned_size;
	_arr = new T[_size];
	for (unsigned int i = 0; i < _size; i++)
	{
		_arr[i] = *init;
	}
	delete init;
}


template <class T>
Array<T>&	Array<T>::operator=(Array<T> const& original)
{
	if (this != &original)
	{
		if (_arr != NULL)
			delete[] _arr;
		_size = original._size;
		_arr = new T[_size];
		for (unsigned int i = 0; i < _size; i++)
			_arr[i] = original._arr[i];
	}
	return (*this);
}


template <class T>
Array<T>::Array(Array const& copied_array)
{
	_arr = NULL;
	operator=(copied_array);
}


template <class T>
Array<T>::~Array()
{
	delete[] _arr;
}


template <class T>
T&			Array<T>::operator[](unsigned int i)
{
	if (i >= _size)
		throw std::out_of_range("You gave an index out of range");
	return _arr[i];
}


template <class T>
void		Array<T>::display(std::ostream& output) const
{
	unsigned int i;
	if (_size == 0)
		return;
	for (i = 0; i < _size - 1; i++)
		output << _arr[i] << " , ";
	if (i == _size - 1)
		output << _arr[i];
}


template <class T>
unsigned int	Array<T>::size() const
{
	return (_size);
}


template <class T>
std::ostream&	operator<<(std::ostream& output, Array<T>const& array)
{
	array.display(output);
	return (output);
}
