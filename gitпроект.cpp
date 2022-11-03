#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>

int main()
{
	int a, b, result;//не инициализированные переенны, лучше использовать тип auto
	
	printf("a= "); scanf_s("%d", &a);
	printf("b= "); scanf_s("%d", &b);//нет проверки на ввод чисел
	printf("result of div= "); result = a / b;//нет проверки деления на 0, возможна не предвиденная ситуация
	_getch();
	return 0;
}


