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

	//printf("You like %c! \n",fruit_name); // fruit_name �� �� �ձ��ڸ� ��µȴ�

	//// �߿�!!
	//char fruit_name2[40];

	//printf("what is your favorate fruit?\n");

	//scanf("%s",fruit_name2); //�迭�� �������� ���� �����ڴ� string ���� �ٲ�� &�� ������ ( �迭�� �ּ� �� ��ü�̱� �����̴�)

	//printf("You like %s! \n",fruit_name2);


	//// 4.2
	//// sizeof ������

	//int a = 0;
	//unsigned int int_size1 = sizeof a;
	//unsigned int int_size2 = sizeof(int); // �ڷ����� sizeof �Լ��� �� ���� �ݵ�� ��ȣ�� �ٿ�����Ѵ�
	//unsigned int int_size3 = sizeof(a);

	//size_t int_size4 = sizeof(a); // �ٸ� �ý��ۿ��� ����Ϸ��� unsigned int ��� size_t �� ����Ѵ�
	//size_t float_size = sizeof(float);

	//printf("Size of int type is %u bytes. \n", int_size1);
	//printf("Size of int type is %zu bytes. \n", int_size4); // size_t �� �����ϴ� ���� ������ : %zu
	//printf("Size of float type is %zu bytes. \n", float_size);
	//
	//// sizeof arrays

	//int int_arr[30]; // int_arr[0] = 1024; ... // ����Ǵ� ���� 120 ����Ʈ �Ҵ� (������Ÿ�ӿ� �����ȴ�)
	//int *int_ptr = NULL; //���� ������ �ϰ� (������ ����� �� �� �ִ�)
	//int_ptr = (int*)malloc(sizeof(int) * 30); // ���߿� �޸� ������ �Ҵ������ ���� (��Ÿ�ӿ� ���� �� �� �ִ�)
	//										 // �̰��� �����Ҵ� �̶�� �Ѵ�!
	//printf("Size of array = %zu bytes \n", sizeof(int_arr)); //120 //sizeof �� size_t ���� ��ȯ�ϱ� ������ ���������ڷ� %zu�� ����Ѵ�
	//printf("Size of pointer = %zu bytes \n", sizeof(int_ptr)); //4

	//// �������� ũ��
	//// �������� ũ��� �ü���� bit ���� ���� �޶�����.
	//// 32��Ʈ �ý����� ������ ũ�� : 4bytes (x86)
	//// 64��Ʈ �ý����� ������ ũ�� : 8bytes (x64)

	//// sizeof character array

	//char c = 'a';
	//char string[10]; // maximally 9 character + '/0' (null character)
	//				 // char array�� �������� null character�� �����ؾ��ϹǷ� ���������δ� 9�� �ۿ� ���� �� ��

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
	//// str2[2] ���ʹ� null character �� ����

	//char str3[20] = "hello, \0world"; //null character \0 �׷����� ���� �޸𸮿��� ������ �Ǿ��ִ�.
	//printf("%s\n", str3); // \0(null character) �� ���ڿ��� ������ �˷��ֱ� ������  world �� ��µ��� �ʴ´�.
	//printf("%c\n", str3[10]);

	//// 4.4

	//char str1[100] = "hello"; // 100 �Ҵ�ް� hello�� ������ 5��ŭ �־��
	//char str2[] = "hello"; // �� ĭ���� ���Ƶθ� �˾Ƽ� �����Ϸ��� ������ŭ ä����
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
	//												// sizeof(str5) �� ������ ���� �ϳ��� ũ�� ���
	//												// strlen(str5) �� str5�� ����ִ� ���� �迭�� ���� ���

	//const float PI = 3.141592f; // ��ȣ�� ����� define ���� �� �ϰ� ���� ��� : const �� ����

	//float radius, area, circum;
	//printf("I'm %s.\n",AI_NAME);
	//printf("Please, input radius\n");
	//scanf("%f", &radius);
	//area = PI * radius * radius;
	//circum = 2.0 * PI * radius;

	//printf("area is %f\n", area);
	//printf("circumstance is %f\n", circum);

	//// 4.5
	//// ��ȣ�� ����� ��ó����
	//
	//// ������ ���� ���� ���ͷ��� �Է��ϴ� �� ���� ��ȣ�� ����� �����Ͽ� ����ϴ°��� ���ϰ� ��Ȯ�ϴ�.
	//// ��ȣ�� ����� ����� ���忡���� �������� ������ ���Ǳ� ������ ����ϴ°��̴�.
	//// �����Ϸ� ���忡���� ��ȣ�� ����� ���ͷ��� ��ü�� �ǹǷ� ��ȣ�� ����� ����ϰ� ���� ����� ����.

	//// 4.6
	//// ����� ����� manifest constants

	//printf("PI is %f \n", PI);
	//printf("Biggest int :%d \n", INT_MAX ); // limits.h
	//printf("One byte in this system is %d  bits \n", CHAR_BIT);
	//printf("Smallest normal float  %e\n", FLT_MIN ); //float.h

	// 4.7
	// printf() �Լ��� ��ȯ �����ڵ� Conversion Specifiers

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
