#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void draw(int n); // ANSI function prototype declaration

int main() {

	//// 5.1
	//// 반복문

	//int n = 1;

	// goto 문을 이용한 반복문
//label:
//	printf("% d\n", n);
//	n = n + 1;
//
//	if (n == 10) goto out;
//
//	goto label;
//
//out:

	//// while 문을 이용한 반복문
	//while (n < 3)
	//{
	//	printf("%d\n", n);
	//	n += 1;
	//}

	//// 5.2
	//// 대입연산자와 몇 가지 용어들 
	//// 연산자 operator 피연산자 operand

	//int i; // Data object 어떤 데이터가 메모리 안에 자리를 잡고 있는 것
	//i = 1024; // L-value(object locator value) : i ,  R-value(value of an expression) : 1024
	//i = i + 1; // =,+ are operator, i is operand

	//// 5.4
	//// 곱하기 연산자

	//double seed_money, target_money, annual_interest;

	//printf("Input seed money: ");
	//scanf("%lf", &seed_money); // double은 %lf 로 받는다

	//printf("Input target money: ");
	//scanf("%lf", &target_money); 

	//printf("Input annual interest (%%): ");
	//scanf("%lf", &annual_interest);
	//printf("\n");

	//double fund = seed_money;
	//int year_count = 0;

	//while (fund < target_money) {

	//	fund = fund + fund * annual_interest * 0.01;
	//	
	//	printf("%lf \n", fund);

	//	year_count = year_count + 1;

	//}

	//printf("It takes %d years \n", year_count);

	//// 5.5
	//// 나누기 연산자

	//printf("Integeer divisions \n");
	//printf("%d\n", 14 / 7);
	//printf("%d\n", 7 / 2); // 3.5 in floating division, 정수로 받으면 절삭을 해버림 (3)
	//printf("%d\n", 7 / 3);
	//printf("%d\n", 7 / 4);
	//printf("%d\n", 8 / 4);

	//printf("\nTruncating toward zero(C99) \n");
	//printf("%d\n", -7 / 2); // -3.5 in floating division, 정수로 받으면 절삭을 해버림 (-3)
	//printf("%d\n", -7 / 3);
	//printf("%d\n", -7 / 4);
	//printf("%d\n", -8 / 4);

	//printf("\nFloating divisions \n");
	//printf("%f\n", 9.0 / 4.0);
	//printf("%f\n", 9.0 / 4); // Note : 4 is integer
	//						 // float / integer 연산 이나, 컴파일러가 내부적으로 interger 를 double 로 변환 해준다.

	//// 5.7
	//// 나머지 연산자


	//int seconds = 0, minutes = 0, hours = 0;

	//printf("Input seconds :");
	//scanf("%d", &seconds); // 밖에서 한 번 입력을 받고

	//while (seconds >= 0) {

	//	//TODO : seconds -> hours, minutes , seconds 

	//	hours = seconds / 60 / 60;
	//	minutes = (seconds / 60) % 60;
	//	seconds = seconds % 60;

	//	//print result 
	//	printf("%d hours, %d minutes, %d seconds\n", hours, minutes, seconds); // 음수값이 입력되었을때 이 코드는 출력되지 않게 만들어야 한다.

	//	printf("Input seconds :"); // 다음번에 사용할 값을 미리 입력 받아준다
	//	scanf("%d", &seconds);

	//}

	//printf("Good bye\n");


	//int div ,mod;

	//div = 11 / 5;
	//mod = 11 % 5;
	//printf("div = %d, mod = %d\n", div, mod);

	//div = 11 / -5;
	//mod = 11 % -5;
	//printf("div = %d, mod = %d\n", div, mod);

	//div = -11 / -5; // 2
	//mod = -11 % -5; //first operand is negetive // -1
	//printf("div = %d, mod = %d\n", div, mod);

	//div = -11 / 5; // -2
	//mod = -11 % 5; //first operand is negetive // -1
	//printf("div = %d, mod = %d\n", div, mod);


	//// 5.8
	//// 증가, 감소 연산자

	//int a = 0;
	//a++; // postfix 후위 연산자 a = a+1 or a += 1
	//printf("%d", a);

	//++a; // prefix 전위 연산자 a = a+1 or a += 1
	//printf("%d", a);

	//double b = 0 ; // 실수에서도 연산자는 정수에서와 같이 동일하게 적용된다
	//b++;
	//printf("%f\n",b);

	//++b;
	//printf("%f\n", b);

	//int count = 0;
	//while (++count < 10)
	//{
	//	printf("%d ", count);
	//	// count++;
	//}

	//printf("\n");

	//count = 0;

	//while (count++ < 10) // 후위 연산자는 10이랑 먼저 비교를 한 다음 그 다음에 숫자가 증가된다.
	//					// 숫자를 증가시킴을 예약하는 형태
	//{
	//	printf("%d ", count);
	//	// count++;
	//} // 얘는 10까지 출력이 된다

	/*int i = 1, j = 1;
	int i_post, pre_j;

	i_post = i++;
	pre_j = ++j;

	printf("%d %d\n", i, j);
	printf("%d %d\n", i_post, pre_j);*/

	/*int i = 3;
	int l = 2 * --i;
	printf("%d %d\n", i, l);

	i = 1;
	l = 2 * i--;
	printf("%d %d\n", i, l);*/

	////very high precedence

	/*int x, y, z;
	x = 3, y = -4;
	z = (x + y++) * 5;
	printf("%d %d %d", x, y, z);*/

	////++ amd -- affect modifiable values

	//int x = 1, y = 1, z;
	//z = x * y++;
	////z = (x * y)++; //error
	////z = 3++; //error

	//// Bad practices
	//int n = 1;
	//printf("%d %d", n, n* n++);
	//int x = n / 2 + 5 * (1 + n++);
	//int y = n++ + n++;

	////5.9
	//// 표현식과 문장

	///*statements*/
	//int x, y, apples; //declaration statement
	//apples = 3; // assignment statement
	//; //null statement
	//7;
	//1 + 2;
	//x = 4;
	//++x;
	//x = 1 + (y = 5); //y = 5 is subexpression 부분식

	//while (x++ < 10)	// while statement(structured statement)
	//	y = x + y;

	//printf("d\n", y); // function statement
	///*Side Effects(부가효과) and Sequence Points*/
	//
	//x = 4;			// main intent is evaluating expression 값을 계산하는것이 main effect, 값을 대입하는 건 side effect
	//y = 1 + x++;	

	//while (x++ < 10)	// (x++ < 10) is a full expression
	//	printf("%d\n", x);
	//
	//y = (4 + x++) + (6 + x++); // Not (4 + x++) nor (6 + x++) is a full expression

	//// 5.11
	//// 자료형 반환
	//
	///*promotions in assignments*/ //승진

	//short s = 64;	
	//int i = s; // short < int	no problem

	//float f = 3.14f;
	//double d = f; // float < double	   no problem

	///* demotion in assigments*/ // 승진 반대의 경우

	//d = 1.25;
	//f = 1.25;
	//f = 1.123;

	///* ranking of types in operations */

	//// long double > double > float
	//// unsigned long long , long long (같은 줄은 랭킹 동일)
	//// unsigned long, long
	//// unsigned, int
	//// short int, unsigned short int
	//// signed char, char, unsigned char
	//// _Bool
	//// Ref: Google 'Integer conversion rank'

	//d = f + 1.234;
	//f = f + 1.234; // loss of data

	///* automatic promotion of fuction arguments */
	//// 1. Fuctions without prototyes
	//// 2. Variadic functions

	///* casting operators */ // 의도적인 형변환

	//d = (double)3.14f;
	//i = 1.6 + 1.7;
	//i = (int)1.6 + (int)1.7;

	///* more examples */
	//char c;
	//int i;
	//float f;
	//f = i = c = 'A'; //65
	//printf("%c %d %f\n", c, i, f);
	//c = c + 2; // 'C', 67
	//i = f + 2 * c ;
	//printf("%c %d %f\n", c, i, f); //199
	//c = 1106; //demolition, 1106 = 0b10001010010 , 0b01010010 = 1106%256 = 82 = 'R'
	//printf("%c\n", c);
	//c = 83.99;
	//printf("%c\n", c);
	//
	//int i = 5;	
	//char c = '#'; //35
	//float f = 7.1f;

	//draw(i); // argument i
	//draw(c);
	//draw(f);

	///* Arguments vs. Parameters*/
	//// actual argument, actual parameter -> argument (values)
	//// formal argument, formal parameter -> parameter (variables)

	//return 0; //return statement
}

void draw(int n) // parameter n
{
	// TODO: print stars (asterisks)
	while (n-- > 0) {
		printf("*");
	}
	printf("\n");
}