/* ����������	 1.12.���	 ������	 ���������	 ����	 for ? ������
���������	��������	����������	sum ?
int	sum = 0;
for (int i = -100; i <= 100; ++i)
sum += i; */

#include <iostream>

int main()
{
	int	sum = 0;
	for (int i = -100; i <= 100; ++i)
		sum += i;
	std::cout << sum;
	
	return 0;
}