/*����������	 1.11.��������	 ���������, �������	 �����������	 �
������������	 ���	 �����	 �����, �	 �����	 ����������	 ������	 �����	 �
���������, ������������	�����	�����	�������. */

#include <iostream>

int	main()
{
	
	std::cout << "Enter two numbers:" << std::endl;

	int	v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	if (v1 > v2)
	{
		int a = v2;
		v2 = v1;
		v1 = a;
	}
	int val = v1;

	while (val <= v2) 
	{
		std::cout << val << std::endl;
		++val;
	}
	

	return	0;
}



