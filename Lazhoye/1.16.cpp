/* ����������	1.16.��������	�����������	������	���������, �������
�������	 �����	 ������	 �����	 �����, �����������	 ���	 ������	 �������
cin. */


#include <iostream>

int	main() 
{
	int	sum = 0, value = 0;
	
		while (std::cin >> value) // ��� ����� ��������� ����� ����� ������ ctrl+z
			sum += value;
		
		std::cout << "Sum	is:	" << sum << std::endl;
		return	0;
}


