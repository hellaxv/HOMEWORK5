#include <iostream>
using namespace std;

void obzac()
{
	cout << "//====================================HomeWork====================================//\n\n";
}


double xbox[667]; //HOMEWORK1
bool PrintPizdc(double xbox[], int size)
{
	if (xbox == nullptr || size == 0)
		return false;

	for (size_t a = 0; a < size; a++)

		cout << a << " : " << xbox[a] << " ";

	cout << endl;
	return true;

}


void dz2(int* x, const int v) //HOMEWORK2.1
{
	for (int z = 0; z < v; z++)
		if (x[z]) x[z] = 0;
		else x[z] = 1;


}
void sao(int* x, const int v) //HOMEWORK2.2
{
	for (int z = 0; z < v; z++)
		cout << x[z] << " ";
	cout << "\n";
}


void PlayStation(int array[], int size) //HOMEWORK4
{
	int temp = array[0];        // сохраняем 0й элемент, чтоб не потерять
	int temp1 = array[size - 1];

	for (int i = 1; i < size; i++)
	{// начинаем цикл с 1го элемента
		array[0] = array[i];   // сохраняем текущий элемент во временную ячейку 1
		array[i] = temp;       // вставляем в текущую ячейку предыдущий
		temp = array[0];       // запоминаем текущий элемент, чтоб использовать в следующей итерации цикла
	}
	array[0] = temp1;
}


bool ImbaBalance(int* mass, int size) //HOMEWORK5
{

	int cocaine1;
	int cocaine2;
	for (int i = 0; i < size; i++) {
		cocaine1 = 0;
		cocaine2 = 0;

		//считаем левую сторону
		int m1;
		for (m1 = 0; m1 < i; m1++) {
			cocaine1 += mass[m1];
		}

		//считаем правую сторону
		for (int m2 = m1; m2 < size; m2++) {
			cocaine2 += mass[m2];
		}

		if (cocaine1 == cocaine2) {
			cout << "Coca Cola" << endl;
			return true;
		}

	}

	cout << "PEPSI" << endl;
	return false;
}





int main()
{
	/*HomeWork1
	Написать функцию которая выводит массив double чисел на экран.
	Параметры функции это сам массив и его размер. Вызвать эту функцию из main.
	*/
	{
		obzac();
		PrintPizdc(xbox, 667);
	}


	/*HomeWork2
	Задать целочисленный массив, состоящий из элементов 0 и 1.
	Например: [ 1, 1, 0, 0, 1, 0, 1, 1, 0, 0 ]. Написать функцию, заменяющую в принятом массиве 0 на 1, 1 на 0.
	Выводить на экран массив до изменений и после.
	*/
	{
		obzac();



		const int v = 10;
		int x[v] = { 1, 1, 0, 0, 1, 0, 1, 1, 0, 0 };

		sao(x, v);
		dz2(x, v);
		sao(x, v);


	}

	/*HomeWork3
	Задать пустой целочисленный массив размером 8.
	Написать функцию, которая с помощью цикла заполнит его значениями
	1 4 7 10 13 16 19 22. Вывести массив на экран.
	*/
	{
		obzac();



		int array[8];
		array[0] = 1;
		for (int i = 1; i < 8; i++) {
			array[i] = array[i - 1] + 3;

		}
		sao(array, 8);
	}



	/*HomeWork4
	Написать функцию, которой на вход подаётся одномерный массив и число n
	(может быть положительным, или отрицательным),
	при этом метод должен циклически сместить все элементы массива на n позиций.
	*/
	{
		obzac();



		int array[8];
		array[0] = 1;
		for (int i = 1; i < 8; i++) {
			array[i] = array[i - 1] + 3;

		}
		sao(array, 8);
		PlayStation(array, 8);
		sao(array, 8);

	}



	/*HomeWork5
	Написать функцию, которой передается не пустой одномерный целочисленный массив,
	она должна вернуть истину если в массиве есть место,
	в котором сумма левой и правой части массива равны.
	Примеры: checkBalance([1, 1, 1, || 2, 1]) → true, checkBalance ([2, 1, 1, 2, 1]) → false,
	checkBalance ([10, || 1, 2, 3, 4]) → true. Абстрактная граница показана символами ||, эти символы в массив не входят.
	*/
	{
		obzac();



		int array[8];
		array[0] = 1;
		for (int i = 1; i < 8; i++) {
			array[i] = array[i - 1] + 3;

		}
		sao(array, 8);
		ImbaBalance(array, 8);


	}
	return 0;
}