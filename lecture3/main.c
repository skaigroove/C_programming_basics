#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <inttypes.h>
#include <stdbool.h>
#include <complex.h>


int main() {


	//// 3.2

	//const int angel = 1004;
	///* const -> ������, ������ Qualifier
	//	int -> �ڷ��� Data type
	//	angel -> ��ȣ�� ��� Symbolic constant   
	//	1004 -> ���ͷ� ��� literal constant
	//���ͷ� : ������ ���� ������ �ʴ� ������
	//*/

	///*
	// �Ǽ��� ǥ�� �� ���� �ε� �Ҽ��� ǥ������ ����Ѵ�.
	// �ε��Ҽ��� (floating point) �����̶�?
	//ex) 0.314 * 10^1	=>	0.314E1
	//	3.14 * 10^123	=>	3.14E123
	//	0.314 * 10^-1	=>	0.314E-1
	//*/

	//// 3.6 

	//unsigned int i = 0b11111111111111111111111111111111; // binary

	//printf("%u \n",sizeof(unsigned int));
	//printf("%u \n",sizeof(i));

	//unsigned int u_max = UINT_MAX ; // ���⼭ +1 �ϸ� overflow �� �Ͼ��. max���� 1�� ���� �� �̹Ƿ� overflow�� �Ǹ� 0�� ���� ���´�.
	//								// UINT_MAX = 0 -1 �� ����. (underflow) 
	//// i to binary representation
	//char buffer[33];
	//_itoa(u_max, buffer, 2); // in stdlib.h
	//						 // _itoa(��ȯ ��Ű�� ���� ����, ��ȯ �� ���ڿ�, ���� ���� 2 or 10)
	//						 // ���������� ��ȯ �� ���ڿ��� buffer �� ���� ��ȯ�Ǿ ������ ���̴�.
	////print decimal and binary
	//printf("decimal: %u\n", u_max);
	//printf("binary: %s\n", buffer);
	//
	//// 3.7

	//char c = 65;
	//short s = 200;
	//unsigned int ui = 3000000000U;
	//long l = 6537L; 
	//long long ll = 12345678908642LL;

	//printf("char = %hhd, %d, %c\n", c, c, c);
	//printf("short = %hhd, %hd, %d\n", s, s, s);


	//// 3.8

	//unsigned int decimal = 4294967295;
	//unsigned int binary = 0b1111111111111111111;
	//unsigned int oct = 037777777777;
	//unsigned int hex = 0xffffffff;

	//printf("%u\n", decimal);
	//printf("%u\n", binary);
	//printf("%u\n", oct);
	//printf("%u\n", hex);
	//printf("%o %x %#o %#x %#X\n", decimal, decimal, decimal, decimal, decimal); //37777777777 ffffffff 037777777777 0xffffffff 0XFFFFFFFF
	//																			// 10��			16��			8��		  16��(0x)	16��(0X)
	//// 3.9
	//// �̽ļ��� ���� ���� �ʺ� ������

	//int32_t i32; // stdint.h
	//int_least8_t i8;
	//int_fast8_t f8 ;
	//intmax_t imax;
	//uintmax_t uimax;

	//i32 = 1004;

	//printf("me32=%d\n", i32);
	//printf("me32=%" "d" "\n", i32);
	//printf("me32=%" PRId32 "\n", i32); // macro���. ���⼱ PRId32�� �ڵ������� format specifier�� �������ش�

	//// 3.10
	//// ������

	//char e = 'A';
	//char f = 65;
	//printf("%c %hhd\n", e, e); // ASCII CODE
	//printf("%c %hhd\n", f, f);

	//printf("%c\n", e +1);

	////ESCAPE SEQUENCE
	//
	////bell
	//char g = '\a';
	//printf("%c\n", g);
	//
	////backspace
	//float salary;
	//printf("$______\b\b\b\b\b\b");
	//scanf("%f", &salary);

	////line align
	//printf("AB\tCDEF\n");
	//printf("ABC\tDEF\n");

	//// ', ", \ ���
	//printf("\\ \'HA+\' \"Hello\" \?\n");


	//// 3.11
	//// �ε��Ҽ�����

	//printf("%u\n", sizeof(float));
	//printf("%u\n", sizeof(double));
	//printf("%u\n", sizeof(long double));

	//float f = 123.456f;
	//double d = 123.456;

	//float f2 = 123.456;
	//double d2 = 123.456f; //float ���� ���ͷ�

	//int i = 3;
	//float f3 = 3.f;
	//double d3 = 3.;

	//float f4 = 1.234e10f;

	//float f5 = 0x1.1p1;
	//double d5 = 1.0625e0;

	//printf("%f %F %e %E\n", f, f, f, f);
	//printf("%f %F %e %E\n", d, d, d, d);
	//printf("%a %A\n", f5, f5);
	//printf("%a %A\n", d5, d5);

	//// 3.12
	//// �ε��Ҽ������� �Ѱ�

	// round-off errors (ex1) 
	// �ʹ� ū ���ڿ� �ʹ� ���� ���ڳ����� �����̶� ���е��� ������ ������ �߻�
	/*float a, b;
	a = 1.0E20f + 1.0f;
	b = a - 1.0E20f;
	printf("%f\n", b);*/

	//// round-off errors (ex2)
	//float a = 0.0f;
	//a = a + 0.01f;
	//a = a + 0.01f;
	//a = a + 0.01f;
	//a = a + 0.01f;
	//a = a + 0.01f;
	//a = a + 0.01f;
	//a = a + 0.01f;
	//a = a + 0.01f;
	//a = a + 0.01f;
	//a = a + 0.01f;
	//a = a + 0.01f;
	//a = a + 0.01f;
	//a = a + 0.01f;
	//a = a + 0.01f;
	//a = a + 0.01f;
	//a = a + 0.01f;
	//a = a + 0.01f;
	//a = a + 0.01f;
	//a = a + 0.01f;
	//a = a + 0.01f;
	//a = a + 0.01f;
	//a = a + 0.01f; // 0.01f�� ��Ȯ���� 0.0099999... �̴�

	//printf("%f\n", a);

	////overflow
	//float max = 3.402823466e+38F;
	//printf("%f\n", max);
	//max = max * 100.0f;
	//printf("%f\n", max); // ������ �ʹ� ū ���ڴ� ǥ���� �� ���� �Ǿ����
	//// (float�� �Ѱ踦 �Ѿ���� double �� �ٲپ��ָ� ����������) 

	////underflow
	//float f = 1.401298464e-45F;
	//printf("%e\n", f);
	//f = f / 2.0f; //subnormal ���밪�� �ʹ� ���� ���ڴ� ǥ���� �� ���� �Ǿ����
	//printf("%e\n", f);

	// 3.13
	// �Ҹ�����

	//printf("%u\n",sizeof(_Bool)); // 1byte

	//_Bool b1;
	//b1 = 0;
	//b1 = 1;

	//printf("%d\n", b1);

	//bool b2, b3; //stdbool.h
	//b2 = true;
	//b3 = false;


	//printf("%d %d\n", b2,b3);

	return 0;
}