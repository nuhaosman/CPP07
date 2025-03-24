#include "Array.hpp"

int main()
{
	{
		Array<int> arr(3);
		arr[0] = 10;
		arr[1] = 20;
		arr[2] = 30;
		std::cout<<"____________________________________________________"<<std::endl;
		std::cout << "Array contents: " << arr << std::endl;
		Array<int> arrCopy(arr);
		std::cout << "Copied array contents: " << arrCopy << std::endl;
		arrCopy[1] = 99;
		std::cout << "Modified copied array contents: " << arrCopy << std::endl;
		std::cout << "Original array after modification: " << arr << std::endl;
		try
		{
			std::cout << arr[5] << std::endl;
		}
		catch (const std::exception& e)
		{
			std::cout << "Error:" << e.what() << std::endl;
		}
	}
	std::cout<<"_______________________________________________________________________________"<<std::endl;
	{
		Array<std::string> strArray(3);
		strArray[0] = "Hello";
		strArray[1] = "World";
		strArray[2] = "C++";
		std::cout << "String array contents: " << strArray << std::endl;
		Array<std::string> strArrayCopy(strArray);
		std::cout << "Copied string array contents: " << strArrayCopy << std::endl;
		strArrayCopy[1] = "Everyone";
		std::cout << "Copied string array after modification: " << strArrayCopy << std::endl;
		std::cout << "Original string array after modification: " << strArray << std::endl;
		try
		{
			std::cout << strArray[5] << std::endl;
		}
		catch (const std::exception& e)
		{
			std::cout << "Error:" << e.what() << std::endl;
		}
	}
		std::cout<<"____________________________________________________"<<std::endl;
	return 0;
}





















////////////Subject int main() /////////////////

// #include <iostream>
// #include "Array.hpp"

// #define MAX_VAL 750
// int main(int, char**)
// {
// 	Array<int> numbers(MAX_VAL);
// 	int* mirror = new int[MAX_VAL];
// 	srand(time(NULL));
// 	for (int i = 0; i < MAX_VAL; i++)
// 	{
// 		const int value = rand();
// 		numbers[i] = value;
// 		mirror[i] = value;
// 	}
// 	{
// 		Array<int> tmp = numbers;
// 		Array<int> test(tmp);
// 	}

// 	for (int i = 0; i < MAX_VAL; i++)
// 	{
// 		if (mirror[i] != numbers[i])
// 		{
// 			std::cerr << "didn't save the same value!!" << std::endl;
// 			return 1;
// 		}
// 	}
// 	try
// 	{
// 		numbers[-2] = 0;
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}
// 	try
// 	{
// 		numbers[MAX_VAL] = 0;
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}

// 	for (int i = 0; i < MAX_VAL; i++)
// 	{
// 		numbers[i] = rand();
// 	}
// 	delete [] mirror;//
// 	return 0;
// }
