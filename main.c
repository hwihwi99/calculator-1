#include <stdio.h>
 
int add(int, int);
int sub(int, int);
int div(int, int);
int multi(int, int);
 
int main(int argc, char* argv[])
{
	int a, b, c;
	char operator;
	
	printf("Please enter a expression : ");
	scanf("%d %c %d", &a, &operator, &b);
	
	switch (operator)
	{
		case '+':
			c = add(a, b);
			break;
		case '-':
			c = sub(a, b);
			break;
		case '*':
			c = multi(a, b);
			break;
		case '/':
			c = div(a, b);
			break;
	}
	
	printf("result is %d.\n", c);
	
	return 0;
}
 
int add(int a, int b)
{
	//TODO implementation
	//return 0;
	return a - b;
}
 
int sub(int a, int b)
{
	//TODO implementation
	return a-b;
}
 
int multi(int a, int b)
{
	//TODO implementation
	return a*b;
}
 
int div(int a, int b)
{
	if(b == 0){
		printf("두번째 인자값은 0이 될 수 없습니다\n");
		return -1;
	}

	int result = a / b;
	return result;
}
