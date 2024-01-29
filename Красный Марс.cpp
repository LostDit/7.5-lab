#include <iostream>
#include <string>

int main() {
	setlocale(LC_ALL, "Russian");
	std::string choice;
	int x = 10, y = 8;

	std::cout << "Привет в данной программе ты будешь управлять марсаходом в коробке от 0 до 15 по Y и от 0 до 20 по X\n";
	std::cout << "Управление осуществляется на\n" << "w - вверх \n" << "a - влево\n" << "s - вниз\n" << "d - вправо\n";
	std::cout << "----------------------------------------\n";
	std::cout << "Введите куда проследовать марсаходу: ";

	std::getline(std::cin, choice);

		while (true) {
	
			if (y == 15) {											//Проверка на ограничение сверху
			
				std::cout << "Попробуйте спуститься вниз на 'S' ограничение от 0 до 15 по Y\n";
				
				std::getline(std::cin, choice);
				
					if (choice == "s") {
						
						y -= 1;
						std::cout << "Ваша текущая позиция по Y: " << y << " по X: " << x << "\n";
					
					}
	
			}else if (y == 0) {										//Проверка на ограничение снизу
	
				std::cout << "Попробуйте подняться наверх на 'W' ограничение от 0 до 15 по Y\n";
				
				std::getline(std::cin, choice);
	
					if (choice == "w") {
						
						y += 1;
						std::cout << "Ваша текущая позиция по Y: " << y << " по X: " << x << "\n";
					
					}
			
			}else if (x == 20) {										//Проверка на ограничение справа
				
				std::cout << "Попробуйте уйти влево на 'A' ограничение от 0 до 20 по X\n";
	
				std::getline(std::cin, choice);
			
					if (choice == "a") {
	
						x -= 1;
						std::cout << "Ваша текущая позиция по Y: " << y << " по X: " << x << "\n";
	
					}
			
			}else if (x == 0) {										//Проверка на ограничение слева
				
				std::cout << "Попробуйте уйти вправо на 'D' ограничение от 0 до 20 по X\n";
	
				std::getline(std::cin, choice);
					
					if (choice == "d") {
	
						x += 1;
						std::cout << "Ваша текущая позиция по Y: " << y << " по X: " << x << "\n";
	
					}
			
			}else if (choice == "w") {
				
				std::getline(std::cin, choice);
				y += 1;
				std::cout << "Ваша текущая позиция по Y: " << y << " по X: " << x << "\n";
				
			
			}else if (choice == "s") {
				
				std::getline(std::cin, choice);
				y -= 1;
				std::cout << "Ваша текущая позиция по Y: " << y << " по X: " << x << "\n";
				
			
			}else if (choice == "d") {
	
				std::getline(std::cin, choice);
				x += 1;
				std::cout << "Ваша текущая позиция по Y: " << y << " по X: " << x << "\n";
				
			}else if (choice == "a") {
	
				std::getline(std::cin, choice);
				x -= 1;
				std::cout << "Ваша текущая позиция по Y: " << y << " по X: " << x << "\n";
	
			
			}else  {
				
				std::cout << "Ошибка!\n";
				std::cout << "Попробуйте снова ввести для передвижения определенные символы, напоминание: \n";
				std::cout << "Управление осуществляется на\n" << "w - вверх \n" << "a - влево\n" << "s - вниз\n" << "d - вправо\n";
				std::getline(std::cin, choice);
			
			}
		}
}
int main2() {
	setlocale(LC_ALL, "Russian");
	std::string choice;
	int x = 10, y = 8;

	std::cout << "Привет в данной программе ты будешь управлять марсаходом в коробке от 0 до 15 по Y и от 0 до 20 по X\n";
	std::cout << "Управление осуществляется на\n" << "w - вверх \n" << "a - влево\n" << "s - вниз\n" << "d - вправо\n";
	std::cout << "----------------------------------------\n";
	std::cout << "Введите куда проследовать марсаходу: ";

	std::getline(std::cin, choice);

	while (true) {
		
		std::getline(std::cin, choice);
		
		if (x == 0 || x == 20 || y == 0 || y == 15) {
			if (x == 0)
			{
				std::cout << "Попробуйте уйти вправо на 'D' ограничение от 0 до 20 по X\n";
			
			}
		
		
		}else if (choice == "w" || choice == "s" || choice == "d" || choice == "a") {

			if (choice == "w") {

				y += 1;
				std::cout << "Ваша текущая позиция по Y: " << y << " по X: " << x << "\n";

			}if (choice == "s") {

				y -= 1;
				std::cout << "Ваша текущая позиция по Y: " << y << " по X: " << x << "\n";

			}if (choice == "d") {

				x += 1;
				std::cout << "Ваша текущая позиция по Y: " << y << " по X: " << x << "\n";

			}if (choice == "a") {

				x -= 1;
				std::cout << "Ваша текущая позиция по Y: " << y << " по X: " << x << "\n";

			}

		}else	{
			
			std::cout << "Ошибка!\n";
			std::cout << "Попробуйте снова ввести для передвижения определенные символы, напоминание: \n";
			std::cout << "Управление осуществляется на\n" << "w - вверх \n" << "a - влево\n" << "s - вниз\n" << "d - вправо\n";
			std::getline(std::cin, choice);
		
		}

	}

}