#include <iostream>
#include "Sales_item.h"
int	main()
{
	Sales_item	book;
	//	���������	ISBN,	����������	��������� �����������	�	����
		std::cin >> book;
	//	�������	ISBN,	����������	���������	�����������,
	//	�����	�����	�	�������	����
	std::cout << book << std::endl;
	return	0;
}
