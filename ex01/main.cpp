#include "iter.hpp"

void printInt(int const& n)
{
	std::cout << n << "\n";
}

template <typename T>
void printString(T const& value)
{
	std::cout << value << "\n";
}

int main()
{
	int arr[] = {1, 2, 3, 4, 5};
	iter(arr, 5, printInt);
	std::cout<<"__________________________________________________"<<std::endl<<std::endl;
	std::string strArr[] = {"Hello", "World", "C++", "Templates"};
	iter(strArr, 4, printString);
	return 0;
}
