

#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");



	//Загадать случайно 100 целых чисел в диапазоне от - 100 до 100. 
	//Вычислить процент положительных чисел, процент отрицательных чисел и процент нулей.
	//Вычислить процент чётных чисел и процент нечётных.


	srand(time(0));
	int pol = 0;
	int otr = 0;
	int null = 0;
 	int chet = 0;
    int nechet = 0;
	const int SIZE = 100;
 	int arr[SIZE];
	for (int i = 0; i < 100; i++)
	{
		arr[i] = rand() % 200 - 100;
	}
	for (int i = 0;i < SIZE;i++)
	{
		arr[i] > 0 ? ++pol : arr[i] < 0 ? ++otr : ++null;
		int a = arr[i] % 2;
		a == 0 && arr[i] != 0 ? ++chet : a != 0 && arr[i] != 0 ? ++nechet : ++null;
	}
	    
	    cout << "\nПроцент положительных чисел равен:" << pol << "%\n";
		cout << "\nПроцент отрицательных чисел равен:" << otr << "%\n";
		cout << "\nПроцент нулей равен:" << null << "%\n";
		cout << "\nПроцент четных чисел равен:" << chet<<"%\n";
		cout << "\nПроцент нечетных чисел равен:" << nechet<<"%\n";


////Ежемесячная стипендия студента составляет N гривен, а расходы на проживание превышают стипендию и составляют M гривен в месяц.
//  Рост цен ежемесячно увеличивает расходы на 3%. Составьте программу расчёта суммы денег, которую необходимо единовременно попросить у родителей,
//  чтобы можно было прожить учебный год (10 месяцев), используя только эти деньги и стипендию.



	int N; 
	int M; 
	int grn = 0;
	cout << "Введите стипендию\n";
	cin >> N;
	cout << "Введите расходы на проживание\n";
	cin >> M;
	for (int i = 0; i < 11; ++i)
	{
		M += (M * 0.03);
		grn +=  (M - N);
	}
	cout << "Необходимо попросить у родителей " << grn <<" Гривен";


////    Определить, является ли введённое число любой разрядности палиндромом (например, 1234321 – палиндром, 12345 – не палиндром).


	
	int a, b, c, e, d;
	cout << "Введите пятизначное число\n  ";
	cin >> a;
	if (a >= 9999 && a <= 100000)
	{
		b = a % 10;
		c = a / 10 % 10;
		d = a / 1000 % 10;
		e = a / 10000;

		if (b == e && c == d)
		{
			cout << "Это число палиндром";
		}
		else
			cout << "Это число не палиндром";

	}
	else
		cout << "Вы ввели не пятизначное число";

////
////
////   Осуществить циклический сдвиг влево введённого числа на N разрядов (например, при сдвиге числа 12345 влево на 3 разряда получится число 45123).


	int step;
	string s;
	cout << "Введите число\n";
	cin >> s;
	cout << "Введите кол-во разрядов для сдвига(при сдвиге влево вводить минус перед цифрой)\n";
	cin >> step;
	int middle = step % s.size();
	cout << string(s.begin() + middle, s.end()) << string(s.begin(), s.begin() + middle);


 
//Написать программу, которая выводит на экран все простые числа в диапазоне от 2 до 10.000.000.
 	
 
  cout << "Список простых чисел в диапазоне от 2 до 10000000:\n";
  int n = 0;
  for (int i = 2; i < 10000000; i++)
  {
  	  int x, j;
	  for (j = 1; j <= i / 2; j++)
	  {
		  x = i % j;
		  if (x == 0 && j != 1 && j != i)
			  break;
	  }
	  if (j == (i / 2 + 1))
	  {

		  n++;
		  cout << i << "\t";
	  }
  }
  cout << "\nВсего таких чисел - " << n << "\n";
 



//Показать на экране все числа Фибоначчи в диапазоне от 0 до 10.000.000.



  int a = 0,
	  b = 1,
	  c = 0,
	  n = 0;

  cout << "Числа Фибоначчи:\n";

  while (c < 10000000)
  {
	  c = a + b;
	  if (c >= 10000000) break;
	  a = b;
	  b = c;
	  cout << c << "\n";
	  n++;
  }

  cout << "\nВсего таких чисел - " << n << "\n";












}
 
