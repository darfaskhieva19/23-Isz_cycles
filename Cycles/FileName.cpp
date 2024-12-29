#include <iostream>

void Coordinates()
{
	printf("������� 1: �� ����������� �����, ���������� ����� ������������ ��������, � ������� ��������� ������ �����.\n");

	float x, y;
	printf("������� ���������� ����� x: \n");
	scanf_s("%f", &x);
	printf("������� ���������� ����� y: \n");
	scanf_s("%f", &y);

	if (x > 0 && y > 0)
	{
		printf("����� %2.1f, %2.1f ��������� � ������ ��������.\n", x, y);
	}
	else if (x < 0 && y > 0)
	{
		printf("����� %2.1f, %2.1f ��������� �� ������ ��������.\n", x, y);
	}
	else if (x < 0 && y < 0)
	{
		printf("����� %2.1f, %2.1f ��������� � ������� ��������.\n", x, y);
	}
	else if (x > 0 && y < 0)
	{
		printf("����� %2.1f, %2.1f ��������� � ��������� ��������.\n", x, y);
	}
	else if (x == 0 && y == 0)
	{
		printf("����� %2.1f, %2.1f ��������� � ������ ���������.\n", x, y);
	}
	else if (x == 0)
	{
		printf("����� %2.1f, %2.1f ��������� �� ��� Y.\n", x, y);
	}
	else if (y == 0)
	{
		printf("����� %2.1f, %2.1f ��������� �� ��� X.\n", x, y);
	}
}

void Calculator()
{
	printf("������� 2: �������� ����������� (���������� ���������� �������������� ��������, �� ��������� ��������� ������������� �������� � ���� ���������).\n");
	while (1)
	{
		float a = 0, b = 0, res = 0;
		int otvet, oper;
		printf("�������� �������������� ��������: 1 - ��������, 2 - ���������, 3 - ���������, 4 - �������\n");
		scanf_s(" %d", &otvet);

		printf("������� ������ �����: ");
		scanf_s("%f", &a);
		printf("������� ������ �����: ");
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
				printf("������ ����� ����� 0. �� ���� ������ ������!");
			break;
		default:
			printf("������!\n");
			break;
		}
		printf("���������: %-3.2lf\n", res);
		printf("\n���������� ������? ��-1; ���-0\n");
		scanf_s("%d", &oper);
		if (oper == 0)
			break;
		else system("cls");
	}
}

void Ternary()
{
	printf("������� 3: �������� ��������� ������� y �� ���������� ������� (x �������� ������������� � ����������), ��������� ��������� ��������\n");
	float x, y;
	printf("������� x: \n");
	scanf_s("%f", &x);
	y = x >= 5 ? x * x - 1 : 1 / x;
	printf("y = %2.1f\n", y);

}
void Symbol()
{
	printf("������� 4: ���������� �������� � ���������� ������ - ��� �����, ����� ���������� �������� ��� ������ ������.\n");
	char c;
	printf("������� ������: \n");
	scanf_s("%c", &c);
	if (c >= 48 && c <= 57)
	{
		printf("�������� ������ %c - �����\n", c);
	}
	else if (c >= 65 && c <= 99)
	{
		printf("�������� ������ %c - ��������� ��������� �����\n", c);
	}
	else if (c >= 97 && c <= 122)
	{
		printf("�������� ������ %c - ��������� ��������� �����\n", c);
	}
	else
	{
		printf("�������� ������ %c - �� ����� � �� �����, ������ ������\n", c);
	}
}

void Multiplication_table()
{
	printf("������� 5: ������� �� ����� ������� ���������.\n");
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
	printf("������� 6: ��������� ����� n ����������� ����� ����� ���������, ��������� ���� for\n");
	int n = 10, sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum += i;
	}
	printf("����� %d: %d\n", n, sum);
}
void ArrayWhile()
{
	printf("������� 6: ��������� ����� n ����������� ����� ����� ���������, ��������� ���� while\n");
	int k = 15, sum = 0, i = 1;
	while (i <= k) {
		sum += i;
		i++;
	}
	printf("����� %d: %d\n", k, sum);
}
void ArrayDoWhile()
{
	printf("������� 6: ��������� ����� n ����������� ����� ����� ���������, ��������� ���� do...while\n");
	int num = 15, sum = 0, j = 1;
	do
	{
		sum += j;
		j++;
	} 
	while (j <= num);
	printf("����� %d: %d\n", num, sum);
}

void Factorial()
{
	printf("������� 7: ���������� �������� ���������� n!\n");
	int n = 0, fact=1;
	printf("������� �������� n: \n");
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++) 
	{
		fact *= i;
	}
	printf("%d! = %d", n, fact);
}

void ASCI()
{
	printf("������� 8: ����������� ������� ASCI I ����� ��������\n");
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
	printf("������� 9: ������������ ������ �����. ����� ����� ���� �����\n");
	int n = 0, sum = 0;
	printf("������� �����: ");
	scanf_s("%d", &n);
	while (n > 0)
	{
		sum += n % 10;
		n /= 10;
	}
	printf("����� ����: %2.1d", sum);
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