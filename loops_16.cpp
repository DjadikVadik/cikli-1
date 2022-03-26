#include <iostream>
using namespace std;

int main()
{
	system("chcp 1251 > nul");
	int live_drag,       // очки жизни дракрна
		ld,              // очки жизни дракона для изменения их в цикле
		live_cop,        // очки жизниодного копейщика
		atak_drag,       // очки атаки дракона
		atak_cop,        // очки атаки одного копейщика
		number_cop,      // количество копейщиков
		nc,              // количество копейщиков для изменения их во вложенном цикле  
		all_live_cop,    // очки жизни всех копейщиков
		all_atak_cop;    // очки атаки всех копейщиков
	cout << "Введите количество очков здоровья дракона:\n";
	cin >> live_drag;
	cout << "Введите количество очков атаки дракона:\n";
	cin >> atak_drag;
	cout << "Введите количество очков здоровья одного копейщика:\n";
	cin >> live_cop;
	cout << "Введите количество очков атаки одного копейщика:\n";
	cin >> atak_cop;

	ld = live_drag;

	for (number_cop = 1; ld > 0; number_cop++)  // цикл необходимый для нахождения необходимого количества копейщиков
	{
		all_live_cop = live_cop * number_cop;
		ld = live_drag;
		nc = number_cop;
		while (all_live_cop > 0 && ld > 0)
		{
			all_atak_cop = nc * atak_cop;
			ld = ld - all_atak_cop;
			if (ld > 0)
			{
				all_live_cop = all_live_cop - atak_drag;
				if (all_live_cop > 0)
				{
					nc = ceil(double(all_live_cop) / live_cop);
				}
			}
		}
	}

	number_cop = number_cop - 1;
	all_live_cop = live_cop * number_cop;
	cout << "Для того чтобы уничтожить дракона нужно минимум - " << number_cop << " копейщиков\n";

	while (live_drag > 0)       // цикл для вывода на экран хода боя
	{

		all_atak_cop = number_cop * atak_cop;
		live_drag = live_drag - all_atak_cop;
		cout << "Копейщики атакуют ( урон " << all_atak_cop << " ) - у дракона осталось " << live_drag << " очков здоровья!\n\n";
		if (live_drag > 0)
		{
			all_live_cop = all_live_cop - atak_drag;
			number_cop = ceil(double(all_live_cop) / live_cop);
			int x = all_live_cop % live_cop;      // переменнная для проверки есть ли раненые копейщики
			if (x == 0)
			{
				cout << "Дракон атакует ( урон " << atak_drag << " ) - осталось " << number_cop << " копейщиков!\n\n";
			}
			else
			{
				cout << "Дракон атакует ( урон " << atak_drag << " ) - осталось " << number_cop << " копейщиков! Один из них ранен ( осталось "
					<< all_live_cop - (number_cop - 1) * live_cop << " очков здоровья )!!!\n\n";
			}
		}
		else
		{
			cout << "Копейщики убивают дракона!!! Победа !!!\n";
		}
	}
}