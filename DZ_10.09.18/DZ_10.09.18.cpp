// DZ_10.09.18.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<string.h>
#include<string>

using namespace std;

char* delete_spaces(char* str)
{
	char* from = str;
	char* to = str;

	while (*from)
	{
		if (*from != ' ')
		{
			*to = *from;
			to++;
		}
		from++;
	}
	*to = 0;
	return str;
}
void Lower(char *str)
{
	while (*str != ' ')
	{
		*str = (char)tolower(*str);
		str++;
	}
}
void Lower1(char *str)
{
	int x = 0;
	char c;
	while (str[x])
	{
		c = str[x];
		cout << (char)tolower(c) ;
		x++;
	}
	cout << endl;
}
int main()
{
	setlocale(LC_ALL, "Rus");
	int n = 0;
start:
	cout << "Введите номер задания: ";
	cin >> n;
	if (n == 1)
	{
		cout << "Написать функцию, которая определяет является ли строка палиндромом (т.е. строкой, которую можно читать и слева направо, и справа налево: «А роза упала на лапу Азора», «Аргентина манит негра», «Я ем змея»)." << endl;
		cout << endl;
		char str[50] = "А роза упала на лапу Азора";
		char str1[50];
		bool f;
		cout << delete_spaces(str) << endl;
		Lower(str);
		cout << str << endl;

		for (int i = strlen(str) - 1, j = 0; i >= 0; i--, j++)
		{
			str1[j] = str[i];
		}
		for (int i = 0; i < strlen(str); i++)
		{
			if (str[i] != str1[i])
				f = false;
		}
		if (!f)
			cout << "Введенная строка не является палиндромом\n";
		else
			cout << "Введенная строка является палиндромом\n";
	}

	else if (n == 2)
	{
		cout << "Написать функцию, которая приводит строку к нижнему регистру." << endl;
		char str[50] = "THIS is TesT";
		Lower1(str);
		
	}
	goto start;
	system("pause");
	return 0;
}

