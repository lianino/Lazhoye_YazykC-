// 1.9.��������	 ���������, �������	 ����������	 ���� while	���	������������	�����	��	50	��	100.

#include <iostream>

int	main()
{
	int	sum = 0, val = 50;

	//	����������	����������	�����,	����	��������	val ��	��������	10
	while (val <= 100) {
		sum += val;	//	���������	sum	�����	val	�	sum
		++val;						//	��������	1	�	val
	}
	std::cout << "Sum of 50 to 100 inclusive is " << sum << std::endl;

	return	0;
}