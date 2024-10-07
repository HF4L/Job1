#include <iostream>
int V11() {
	std::cout << "\nНет,черт\n";
	return 0;
}
int V12() {
	std::cout << "\nНикогда,толстый навеки\n";
	return 0;
}
int V13() {
	std::cout << "\nДа, и потом в кадеты\n";
	return 0;
}
int V14() {
	std::cout << "\nНет,он в доту играет, а не учит код\n";
	return 0;
}
int V15() {
	std::cout << "\nНе станут, они не Арс\n";
	return 0;
}

int main()
{
	setlocale(LC_ALL, "ru");
	char V1 = 0;
	std::cout << "Введите номер варианта:\n";
	std::cout << "Вариант 1.Саня вернет сотку?\n";
	std::cout << "Вариант 2.Толстый похудеет?\n";
	std::cout << "Вариант 3.Тимур побреется налысо?\n";
	std::cout << "Вариант 4.Я сдам насвай никитосу?\n";
	std::cout << "Вариант 5.Негры станут слонярами?\n\n";
	std::cin >> V1;
	switch (V1)
	{
	case '1':
		V11();
		break;
	case '2':
		V12();
		break;
	case '3':
		V13();
		break;
	case '4':
		V14();
		break;
	case '5':
		V15();
		break;
	default:
		std::cout << "\nОшибка,тупой осел!\n";
		break;
		return 0;
	}
}


