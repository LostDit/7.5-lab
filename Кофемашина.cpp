﻿//Задание 2. Кофемашина
#include <iostream>

int main() {
	setlocale(LC_ALL, "Russian");
	int milk, water;
	std::cout << "Введите сколько заливаете молока: ";
	std::cin >> milk;
	std::cout << "Введите сколько заливаете воды: ";
	std::cin >> water;
	std::cout << "--------Обработка входящих ингридиентов--------\n";
	while (true) {

		int choice, i1 = 0, i2 = 0;
		
		std::cout << "Добро пожаловать какой напиток хотите выбрать?\n";
		std::cout << "Выберите напиток (1 — американо, 2 — латте): \n";
		std::cin >> choice;
		
		for (int i = 0; water != 0 && milk != 0; i++) {
			
			if (choice == 1 && water >= 300) {
				
				water -= 300;
				i1++;
				std::cout << "Ваш напиток готов.\n";

			}else if (choice == 2 && water >= 30 && milk >= 270) {
			
				water -= 30;
				milk -= 270;
				i2++;
				std::cout << "Ваш напиток готов.\n";

			}else if (milk < 270 || water < 30) {
			
				std::cout << "Недостачное количество ингридиентов для приготовления 'латте' \n";
				std::cout << "***Отчёт***\n";
				std::cout << "Ингредиентов осталось: \n" << "Вода: " << water << " мл\n" << "Молоко: " << milk << " мл\n";
				std::cout << "Кружек американо приготовлено: " << i1 << "\n";
				std::cout << "Кружек латте приготовлено: " << i2 << "\n";
				break;
			}else if (water < 300)	{

				std::cout<<"Недостачное количество ингридиентов для приготовления 'американо' \n";
				std::cout << "***Отчёт***\n";
				std::cout << "Ингредиентов осталось: \n" << "Вода: " << water << " мл\n" << "Молоко: " << milk << " мл\n";
				std::cout << "Кружек американо приготовлено: " << i1 << "\n";
				std::cout << "Кружек латте приготовлено: " << i2 << "\n";
				break;
			}else {

				std::cout << "Попробуйте снова выбрать напиток, возможно вы ввели не тот символ который указан в программе\n";
				break;
			}
		std::cout << "***Отчёт***\n";
		std::cout << "Ингредиентов осталось: \n" << "Вода: " << water << " мл\n" << "Молоко: " << milk << " мл\n";
		std::cout << "Кружек американо приготовлено: " << i1<<"\n";
		std::cout << "Кружек латте приготовлено: " << i2<<"\n";
		
		std::cout << "--------------------------------------\n";
		
		std::cout << "Добро пожаловать какой напиток хотите выбрать?\n";
		std::cout << "Выберите напиток (1 — американо, 2 — латте): \n";
		std::cin >> choice;
		}
		break;
	}

}