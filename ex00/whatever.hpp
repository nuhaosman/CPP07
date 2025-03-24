#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <typename T>
void	swap(T& a, T& b)
{
	T t;
	t = b;
	b = a;
	a = t;
}

template <typename T>
T		min(T const& a, T const& b) //Passing by reference (const&) avoids this copying, allowing the function to work directly with the original variables.
{
	if (a < b)
		return a;
	else
		return b;
}

template <typename T>
T		max(T const& a, T const& b)//const in const T& ensures that the function does not modify the original arguments
{
	if (a > b)
		return a;
	else
		return b;
}


#endif
