#include <iostream>
using namespace std;

int main()
{
	windowsOption(); // настройка окна консоли
	cursorOption(); // настройки курсора
	dataGenerate(); // генерация данных
	printData(); // вывод данных
	installationWall(); // установка стен
	defenitionEntry(); //установка входа
	defenitionExit(); // установка выхода
	setColor(); // установка цвета
	definitionHero(); // местоположение ГГ
	movementHero(); // передвижение героя
	takingDamage(); //получение урона
	takingCoin(); // собирание монет
	takingHeal(); // подбирание аптечки
	ckeckExit(); // проверка выхода
	checkWin(); //проверка победы
	checkLose(); // проверка поражения
}
