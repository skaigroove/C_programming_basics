#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main()
{
	//// 6.1
	//// while 반복 루프에서 scanf()의 반환값 사용하기

	//int num, sum = 0;
	//int status;

	//printf("Enter an integer (q to quit) : ");

	//status = scanf("%d", &num); // num이라는 값을 입력받으면 status 에는 1이라는 값이 저장된다
	//							// num은 int 형이기 때문에 만약 q라는 문자형이 들어간다면 status에 0이라는 값이 저장된다

	//while (status == 1)		//equality operator
	//{	
	//	sum = sum + num;

	//	printf("Enter next integer (q to quit) : ");
	//	status = scanf("%d", &num);
	//}
	//	
	//printf("Sum = %d\n", sum);


	//Todo: C-style shortcut

	//int num, sum = 0;
	//printf("enter an integer (q to quit) : ");
	//while (scanf("%d", &num))		//equality operator
	//{	
	//	sum = sum + num;

	//	printf("enter next integer (q to quit) : ");
	//}
	//	
	//printf("sum = %d\n", sum);

	//// 6.3
	//// 진입조건 루프 while

	///*
	//while(expression) 진입조건을 판단하는 괄호문 -> 0이냐 0이 아니냐?
	//	statement
	//*/

	//int i;

	//i = 1;
	//while (i < 5)		// infinite loop
	//	printf("Hi\n"); // iteration (i) 반복하는 것


	//i = 1;
	//while (--i < 5)		// infinite loop
	//	printf("Hi\n");


	//i = 1;
	//while (i < 5)
	//{
	//	printf("i before = %d\n", i);
	//	i++;
	//	printf("i after = %d\n", i);
	//}


	//i = 10;
	//while (i++ < 5)			//cannot enter
	//{
	//	printf("Hi\n");
	//}

	/*common mistakes*/

	//i = 0;
	//while (i < 3) 
	//	printf("%i\n", i);
	//i++;	// indenting... 중괄호가 빠짐

	//i = 0;
	//while (i++ < 3); //null statement 세미콜론이 이상한 곳에 붙음
	//	printf("%i\n", i);

	//// 6.4
	//// 관계연산자

	//const double PI = 3.141592653589793238;
	//double guess = 0.0;

	//prinf("input PI :");
	//scanf("%lf", guess);
	////while(guess != PI)
	//while (fabs(guess - PI) > 0.01) // 절댓값을 내주는 함수 fabs() 
	//								// 해석: 오차가 0.01보다 크다면 while문 실행
	//								// 관계연산자를 통한 실수의 비교에서는 오차를 적절히 반영하여 써주는 방식을 많이 사용한다.
	//{
	//	printf("Fool! Try again. \n");
	//	scanf("%lf",&guess);
	//}		
	//printf("Good");

	//// 6.5
	//// 사실과 거짓

	//int i = -5;
	//while (i)
	//	printf("%d is true \n", i++); // 음수 값도 true 이기 때문에 -5가 while문 안으로 진입할 수 있다.
	//printf("%d is false \n", i); // 0일때만 false 인 값을 갖는다.

	//// 6.6
	//// _Bool 자료형
	//
	//int i;

	//i = 5;
	//i == 5;
	//// 5 = i;
	//5 == i;

	////while (i = 5) {/*do something*/ };	//거의 실수한 코드
	////while (i == 5) {/*do something*/ };

	//_Bool boolean_true = (2 > 1);
	//_Bool boolean_false = (1 > 2);

	//printf("True is %d\n", boolean_true);	// Bool's format specifier is %d
	//printf("False is %d\n", boolean_false);

	//printf(boolean_true ? "true" : "false");
	//printf("\n");
	//printf(boolean_false ? "true" : "false");

	//bool bt = true;
	//bool bf = false;

	//printf("\n");
	//printf("True is %d\n", bt);
	//printf("False is %d\n", bf);

	//// 6.8
	//// for loop 소개

	//// Indefinite loop vs. Counting loop
	//while (1) 
	//{
	//// do something
	//}

	/*
		Counting Loop
		1. Counter initializion(i)
		2. Counter check
		3. Counter change
	*/

	/*int i;

	i = 1;

	while (i <= 10) {
		printf("%d", i);
		i++;
	}*/

	//int i;

	//for (i = 1; i <= 10; i++) // i=1 은 처음에 한 번만 실행되고 그 다음은 i++로 넘어온 뒤 i<=10 을 확인하는 방식으로 for 문이 실행된다 
	//{	
	//	printf("%d", i);
	//}
	
	//// 6.9
	//// for 은 유연해요

	/*
		for(initialize;test;update)
			statement
	*/

	//for (int i = 10; i > 0; i--)
	//	printf("%d", i);

	//for (int i = 0; i < 100; i=i+8)
	//	printf("%d", i);

	//for (char c = 'A'; c < 'Z'; c++)
	//	printf("%d", c);

	//for (int i = 0; i * i < 10; i ++)
	//	printf("%d", i);

	//for(int x=1,y=1;y<=20;y=(++x*3)+10)
	//	printf("%d", x);

	//int i, n;
	//n = 2;
	//for (i = 2; n > 10;/*left blank*/)
	//{
	//	n = n * 1;
	//	printf("%d\n", n);
	//}
	//for (;;) // infinite loop
	//	printf("I love you");
	
	// 6.11
	// 콤마 연산자

	for (int n = 1, nsqr = n * n; n < 10; n++, nsqr = n * n)
		printf("%d %d\n", n, nsqr);

	// Note that commas in printf() are not comma operators
	// but separators

	int i, j;
	i = 1;
	i++, j = i; // comma is a sequence point
	printf("%d %d\n", i, j);



	return 0;
}