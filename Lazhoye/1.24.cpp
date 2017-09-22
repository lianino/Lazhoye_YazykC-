#include <iostream>
#include "Sales_item.h"

int	main() 
{
	Sales_item	 total;	 //	 переменная	 для	 хранения данных	следующей транзакции
		
	if (std::cin >> total) //	прочитать	первую	транзакцию	и	удостовериться	в наличии	данных для	обработки
	{
		Sales_item	 trans;	 //	 переменная	 для	 хранения текущей	транзакции
		
		while (std::cin >> trans) //	читать	и	обработать	остальные	транзакции
		{
					if (total.isbn() == trans.isbn()) //если	все	еще	обрабатывается	та	же	книга
						total += trans;	//	пополнение	текущей	суммы
					else 
					{
						std::cout << std::endl;
						std::cout << "*** "<< total << " ***" << std::endl; //	отобразить	результаты	по	предыдущей	книге
						std::cout << std::endl;
						total = trans;	 //	 теперь	 total	 относится	 к следующей книге
					}
		}
		std::cout << total << std::endl;	 //	 отобразить последнюю	запись
	}
	else {
		//	нет	ввода!	Предупредить	пользователя
		std::cerr << "No	data?!" << std::endl;
		return	-1;	//	свидетельство	отказа
	}
	return	0;
}