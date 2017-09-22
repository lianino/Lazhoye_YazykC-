#include <iostream>
#include "Sales_item.h"

int	main() 
{
	Sales_item	 total;	 //	 ����������	 ���	 �������� ������	��������� ����������
		
	if (std::cin >> total) //	���������	������	����������	�	��������������	� �������	������ ���	���������
	{
		Sales_item	 trans;	 //	 ����������	 ���	 �������� �������	����������
		
		while (std::cin >> trans) //	������	�	����������	���������	����������
		{
					if (total.isbn() == trans.isbn()) //����	���	���	��������������	��	��	�����
						total += trans;	//	����������	�������	�����
					else 
					{
						std::cout << std::endl;
						std::cout << "*** "<< total << " ***" << std::endl; //	����������	����������	��	����������	�����
						std::cout << std::endl;
						total = trans;	 //	 ������	 total	 ���������	 � ��������� �����
					}
		}
		std::cout << total << std::endl;	 //	 ���������� ���������	������
	}
	else {
		//	���	�����!	������������	������������
		std::cerr << "No	data?!" << std::endl;
		return	-1;	//	�������������	������
	}
	return	0;
}