#ifndef ITER_HPP
# define ITER_HPP


#include <iostream>

template <typename T>
void	iter(T *tab, int length, void(*f)(T const&))
{
	for (int i = 0; i < length; i++)
		f(tab[i]);
}

#endif
