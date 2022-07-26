#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // strlen() and more
#include <limits.h> 
#include <float.h>
// #define PI 3.141592f //manifest constants , symbolic constants
#define AI_NAME "Friday"

struct Mystruct
{
	int i; //4 byte
	float f; //4 byte
};

int main()
{
	//// 4.1

	//char fruit_name; // stores only one character.

	//printf("what is your favorate fruit?\n");

	//scanf("%c", &fruit_name);

	//printf("You like %c! \n",fruit_name); // fruit_name 의 맨 앞글자만 출력된다

	//// 중요!!
	//char fruit_name2[40];

	//printf("what is your favorate fruit?\n");

	//scanf("%s",fruit_name2); //배열을 받을때는 형식 지정자는 string 으로 바뀌고 &는 빠진다 ( 배열이 주소 그 자체이기 때문이다)

	//printf("You like %s! \n",fruit_name2);


	//// 4.2
	//// sizeof 연산자

	//int a = 0;
	//unsigned int int_size1 = sizeof a;
	//unsigned int int_size2 = sizeof(int); // 자료형에 sizeof 함수를 쓸 때는 반드시 괄호를 붙여줘야한다
	//unsigned int int_size3 = sizeof(a);

	//size_t int_size4 = sizeof(a); // 다른 시스템에서 사용하려면 unsigned int 대신 size_t 를 사용한다
	//size_t float_size = sizeof(float);

	//printf("Size of int type is %u bytes. \n", int_size1);
	//printf("Size of int type is %zu bytes. \n", int_size4); // size_t 에 대응하는 형식 지정자 : %zu
	//printf("Size of float type is %zu bytes. \n", float_size);
	//
	//// sizeof arrays

	//int int_arr[30]; // int_arr[0] = 1024; ... // 선언되는 순간 120 바이트 할당 (컴파일타임에 결정된다)
	//int *int_ptr = NULL; //먼저 선언을 하고 (임의의 사이즈가 들어갈 수 있다)
	//int_ptr = (int*)malloc(sizeof(int) * 30); // 나중에 메모리 공간을 할당받을지 결정 (런타임에 결정 할 수 있다)
	//										 // 이것을 동적할당 이라고 한다!
	//printf("Size of array = %zu bytes \n", sizeof(int_arr)); //120 //sizeof 는 size_t 형을 반환하기 때문에 형식지정자로 %zu를 사용한다
	//printf("Size of pointer = %zu bytes \n", sizeof(int_ptr)); //4

	//// 포인터의 크기
	//// 포인터의 크기는 운영체제의 bit 수에 따라 달라진다.
	//// 32비트 시스템의 포인터 크기 : 4bytes (x86)
	//// 64비트 시스템의 포인터 크기 : 8bytes (x64)

	//// sizeof character array

	//char c = 'a';
	//char string[10]; // maximally 9 character + '/0' (null character)
	//				 // char array는 마지막에 null character을 저장해야하므로 실질적으로는 9개 밖에 저장 못 함

	//size_t char_size = sizeof(char);
	//size_t str_size = sizeof(string);

	//printf("Size of char type is %zu bytes. \n", char_size);
	//printf("Size of string type is %zu bytes. \n", str_size);

	//// sizeof structure

	//printf("% zu\n", sizeof(struct Mystruct));

	//// 4.3

	//int a = 1;
	//int int_arr[10] = { 0,1,2,3,4,5,6,7,8,9 };

	//printf("%i %i %i\n", int_arr[0], int_arr[1], int_arr[9]);

	//char c = 'a';
	//char str1[10] = "Hello"; // null character
	//char str2[10] = { 'H','i' };

	//printf("%c\n", c);
	//printf("%s\n", str1);
	//printf("%s\n", str2);

	//printf("%hhi %hhi %hhi %hhi %hhi\n", str2[0], str2[1], str2[2], str2[3], str2[4]);
	//// str2[2] 부터는 null character 가 담긴다

	//char str3[20] = "hello, \0world"; //null character \0 그렇지만 실제 메모리에는 저장이 되어있다.
	//printf("%s\n", str3); // \0(null character) 은 문자열이 끝남을 알려주기 때문에  world 는 출력되지 않는다.
	//printf("%c\n", str3[10]);

	//// 4.4

	//char str1[100] = "hello"; // 100 할당받고 hello의 길이인 5만큼 넣어둠
	//char str2[] = "hello"; // 빈 칸으로 놓아두면 알아서 컴파일러가 공간만큼 채워줌
	//char str3[100] = "\0";
	//char str4[100] = "\n";
	//
	//printf("%zu %zu \n", sizeof(str1), strlen(str1)); // string.h >> strlen()
	//printf("%zu %zu \n", sizeof(str2), strlen(str2));
	//printf("%zu %zu \n", sizeof(str3), strlen(str3));
	//printf("%zu %zu \n", sizeof(str4), strlen(str4));

	////extra

	//char* str5 = (char*)malloc(sizeof(char) * 100);
	//str5[0] = 'h';
	//str5[1] = 'e';
	//str5[2] = 'l';
	//str5[3] = 'l';
	//str5[4] = 'o';
	//str5[5] = '\0';
	//printf("%zu %zu\n", sizeof(str5), strlen(str5)); // output 4, 5
	//												// sizeof(str5) 는 포인터 변수 하나의 크기 출력
	//												// strlen(str5) 는 str5에 담겨있는 문자 배열의 길이 출력

	//const float PI = 3.141592f; // 기호적 상수를 define 선언 안 하고 쓰는 방법 : const 를 붙임

	//float radius, area, circum;
	//printf("I'm %s.\n",AI_NAME);
	//printf("Please, input radius\n");
	//scanf("%f", &radius);
	//area = PI * radius * radius;
	//circum = 2.0 * PI * radius;

	//printf("area is %f\n", area);
	//printf("circumstance is %f\n", circum);

	//// 4.5
	//// 기호적 상수와 전처리기
	//
	//// 원주율 같은 것은 리터럴로 입력하는 것 보다 기호적 상수를 선언하여 사용하는것이 편리하고 정확하다.
	//// 기호적 상수는 사용자 입장에서의 가독성과 편리함이 향상되기 때문에 사용하는것이다.
	//// 컴파일러 입장에서는 기호적 상수를 리터럴로 교체가 되므로 기호적 상수를 사용하건 말건 상관이 없다.

	//// 4.6
	//// 명백한 상수들 manifest constants

	//printf("PI is %f \n", PI);
	//printf("Biggest int :%d \n", INT_MAX ); // limits.h
	//printf("One byte in this system is %d  bits \n", CHAR_BIT);
	//printf("Smallest normal float  %e\n", FLT_MIN ); //float.h

	// 4.7
	// printf() 함수의 변환 지정자들 Conversion Specifiers

	double d = 3.141592653589793238462643383279502884197;

	printf("%c\n", 'A');
	printf("%s", "I love you\n");
	printf("Even if there's a small chance, \
we owe this to everyone who's not in this room t o try.\n");

	printf("\n");
	printf("%f %f %lf\n", 3.141592f, d, d); // l in %lf is ignored 
	printf("%a %A\n", d, d);
	printf("%e %E\n", d, d);

	printf("\n");
	printf("\n");

	return 0;
}
