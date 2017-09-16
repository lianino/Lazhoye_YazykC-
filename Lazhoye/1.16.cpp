/* Упражнение	1.16.Напишите	собственную	версию	программы, которая
выводит	 сумму	 набора	 целых	 чисел, прочитанных	 при	 помощи	 объекта
cin. */


#include <iostream>

int	main() 
{
	int	sum = 0, value = 0;
	
		while (std::cin >> value) // для ввода окончания файла нужно внести ctrl+z
			sum += value;
		
		std::cout << "Sum	is:	" << sum << std::endl;
		return	0;
}


