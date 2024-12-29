#include <iostream>

void Coordinates()
{
	printf("Задание 1: По координатам точки, определить номер координатной четверти, к которой находится данная точка.\n");

	float x, y;
	printf("Введите координаты точки x: \n");
	scanf_s("%f", &x);
	printf("Введите координаты точки y: \n");
	scanf_s("%f", &y);

	if (x > 0 && y > 0)
	{
		printf("Точка %2.1f, %2.1f находится в первой четверти.\n", x, y);
	}
	else if (x < 0 && y > 0)
	{
		printf("Точка %2.1f, %2.1f находится во второй четверти.\n", x, y);
	}
	else if (x < 0 && y < 0)
	{
		printf("Точка %2.1f, %2.1f находится в третьей четверти.\n", x, y);
	}
	else if (x > 0 && y < 0)
	{
		printf("Точка %2.1f, %2.1f находится в четвертой четверти.\n", x, y);
	}
	else if (x == 0 && y == 0)
	{
		printf("Точка %2.1f, %2.1f находится в начале координат.\n", x, y);
	}
	else if (x == 0)
	{
		printf("Точка %2.1f, %2.1f находится на оси Y.\n", x, y);
	}
	else if (y == 0)
	{
		printf("Точка %2.1f, %2.1f находится на оси X.\n", x, y);
	}
}

void Calculator()
{
	printf("Задание 2: Написать калькулятор (вычисление простейших арифметических операций, на основании введенной пользователем операции и двух операндов).\n");
	while (1)
	{
		float a = 0, b = 0, res = 0;
		int otvet, oper;
		printf("Выберите арифметическую оперпцию: 1 - Сложение, 2 - Вычитание, 3 - Умножение, 4 - Деление\n");
		scanf_s(" %d", &otvet);

		printf("Введите первое число: ");
		scanf_s("%f", &a);
		printf("Введите второе число: ");
		scanf_s("%f", &b);

		switch (otvet)
		{
		case 1:
			res = a + b;
			break;
		case 2:
			res = a - b;
			break;
		case 3:
			res = a * b;
			break;
		case 4:
			if (b != 0)
			{
				res = a / b;
			}
			else
				printf("Второе число равно 0. На ноль делить нельзя!");
			break;
		default:
			printf("Ошибка!\n");
			break;
		}
		printf("Результат: %-3.2lf\n", res);
		printf("\nПродолжить работу? Да-1; Нет-0\n");
		scanf_s("%d", &oper);
		if (oper == 0)
			break;
		else system("cls");
	}
}

void Ternary()
{
	printf("Задание 3: Написать программу расчета y по следующему правилу (x вводится пользователем с клавиатуры), используя тернарный оператор\n");
	float x, y;
	printf("Введите x: \n");
	scanf_s("%f", &x);
	y = x >= 5 ? x * x - 1 : 1 / x;
	printf("y = %2.1f\n", y);

}
void Symbol()
{
	printf("Задание 4: Распознать вводимый с клавиатуры символ - это цифра, буква латинского алфавита или другой символ.\n");
	char c;
	printf("Введите символ: \n");
	scanf_s("%c", &c);
	if (c >= 48 && c <= 57)
	{
		printf("Введеный символ %c - цифра\n", c);
	}
	else if (c >= 65 && c <= 99)
	{
		printf("Введеный символ %c - заглавная латинская буква\n", c);
	}
	else if (c >= 97 && c <= 122)
	{
		printf("Введеный символ %c - строчнаяя латинская буква\n", c);
	}
	else
	{
		printf("Введеный символ %c - не буквы и не цифры, другой символ\n", c);
	}
}

void Multiplication_table()
{
	printf("Задание 5: Вывести на экран таблицу умножения.\n");
	int i, j, a;

	for (i = 1; i <= 10; i++) 
	{
		for (j = 1; j <= 10; j++)
		{
			printf("%d * %d = %d\n", i, j, a = i * j);
		}
		printf("\n");
	}
}
void ArrayFor()
{
	printf("Задание 6: Вычислить сумму n натуральных чисел тремя способами, используя цикл for\n");
	int n = 10, sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum += i;
	}
	printf("Сумма %d: %d\n", n, sum);
}
void ArrayWhile()
{
	printf("Задание 6: Вычислить сумму n натуральных чисел тремя способами, используя цикл while\n");
	int k = 15, sum = 0, i = 1;
	while (i <= k) {
		sum += i;
		i++;
	}
	printf("Сумма %d: %d\n", k, sum);
}
void ArrayDoWhile()
{
	printf("Задание 6: Вычислить сумму n натуральных чисел тремя способами, используя цикл do...while\n");
	int num = 15, sum = 0, j = 1;
	do
	{
		sum += j;
		j++;
	} 
	while (j <= num);
	printf("Сумма %d: %d\n", num, sum);
}

void Factorial()
{
	printf("Задание 7: Определить значение факториала n!\n");
	int n = 0, fact=1;
	printf("Введите значение n: \n");
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++) 
	{
		fact *= i;
	}
	printf("%d! = %d", n, fact);
}

void ASCI()
{
	printf("Задание 8: Распечатать таблицу ASCI I кодов символов\n");
	for (unsigned char i = 32; i < 255; i++) 
	{
		printf("%5d - %c", i, i);
		if (i % 10 == 0)
		{
			printf("\n");
		}
	}
	printf("\n");
}

void Number()
{
	printf("Задание 9: Пользователь вводит число. Найти сумму цифр числа\n");
	int n = 0, sum = 0;
	printf("Введите число: ");
	scanf_s("%d", &n);
	while (n > 0)
	{
		sum += n % 10;
		n /= 10;
	}
	printf("Сумма цифр: %2.1d", sum);
}

int main()
{
	system("chcp 1251>null");
	//Coordinates();
	//Calculator();
	//Ternary();
	//Symbol();
	//Multiplication_table();
		
	//ArrayFor();
	//ArrayWhile();
	//ArrayDoWhile();

	//Factorial();
	//ASCI();
	//Number();

	return 0;
}