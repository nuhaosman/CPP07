#include "iter.hpp"

template <typename T>
void print_template(T const& value)
{
	std::cout << value << "\n";
}

int main()
{
	int arr[] = {1, 2, 3, 4, 5};
	iter(arr, 5, print_template);
	std::cout<<"__________________________________________________"<<std::endl<<std::endl;
	std::string strArr[] = {"Hello", "World", "C++", "Templates"};
	iter(strArr, 4, print_template);
	return 0;
}
