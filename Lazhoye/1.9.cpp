// 1.9.Ќапишите	 программу, котора€	 использует	 цикл while	дл€	суммировани€	чисел	от	50	до	100.

#include <iostream>

int	main()
{
	int	sum = 0, val = 50;

	//	продолжать	выполнение	цикла,	пока	значение	val не	превысит	10
	while (val <= 100) {
		sum += val;	//	присвоить	sum	сумму	val	и	sum
		++val;						//	добавить	1	к	val
	}
	std::cout << "Sum of 50 to 100 inclusive is " << sum << std::endl;

	return	0;
}