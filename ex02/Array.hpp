#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>
# include <string>

template <class T>
class Array
{
	public:
		Array();
		Array(unsigned int i);
		Array<T>&		operator=(Array<T> const&);
		Array(Array<T> const&);
		~Array();

		T&				operator[](unsigned int i);
		void			display(std::ostream& stream) const;
		unsigned int	size() const;

	protected:
		T				*_arr;
		unsigned int	_size;
};
template <class T>
std::ostream&	operator<<(std::ostream& stream, Array<T>const& cl);

#include "Array.tpp"

#endif
