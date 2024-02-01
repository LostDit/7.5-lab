//Задание 3. Красный Марс
#include <iostream>
#include <string>
void infofail() {

	setlocale(LC_ALL, "Russian");
	std::cout << "Марсоход не может двигаться в этом направлении\n";

}

int main() {
	setlocale(LC_ALL, "Russian");
	std::string choice;
	int x = 10, y = 8;

	std::cout << "Привет в данной программе ты будешь управлять марсоходом в коробке от 0 до 15 по Y и от 0 до 20 по X\n";
	std::cout << "Управление осуществляется на\n" << "w - вверх \n" << "a - влево\n" << "s - вниз\n" << "d - вправо\n";

	while (true) {								//Цикл для вывода
		std::cout << "Марсоход находиться по координатам X: " << x << " Y: " << y << "\n";
		std::cout << "\n";
		std::cout << "Введите куда проследовать марсоходу: ";
		std::getline(std::cin, choice);
		std::cout << "\n";
		while (choice == "w" || choice == "a" || choice == "s" || choice == "d")	//Цикл для проверки условий
		{
			if (choice == "w" && y != 15) {	
				y++;
				break;
			}
			if (choice == "a" && x != 0)
			{
				x--;
				break;
			}
			if (choice == "s" && y != 0)
			{
				y--;
				break;
			}
			if (choice == "d" && x != 20)
			{
				x++;
				break;
			}
			else								
			{
				infofail();
				break;
			}
		}
	}
}//Возможно не совсем корректно решено, но оно работает
