#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main()
{
	//// 6.1
	//// while �ݺ� �������� scanf()�� ��ȯ�� ����ϱ�

	//int num, sum = 0;
	//int status;

	//printf("Enter an integer (q to quit) : ");

	//status = scanf("%d", &num); // num�̶�� ���� �Է¹����� status ���� 1�̶�� ���� ����ȴ�
	//							// num�� int ���̱� ������ ���� q��� �������� ���ٸ� status�� 0�̶�� ���� ����ȴ�

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
	//// �������� ���� while

	///*
	//while(expression) ���������� �Ǵ��ϴ� ��ȣ�� -> 0�̳� 0�� �ƴϳ�?
	//	statement
	//*/

	//int i;

	//i = 1;
	//while (i < 5)		// infinite loop
	//	printf("Hi\n"); // iteration (i) �ݺ��ϴ� ��


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
	//i++;	// indenting... �߰�ȣ�� ����

	//i = 0;
	//while (i++ < 3); //null statement �����ݷ��� �̻��� ���� ����
	//	printf("%i\n", i);

	//// 6.4
	//// ���迬����

	//const double PI = 3.141592653589793238;
	//double guess = 0.0;

	//prinf("input PI :");
	//scanf("%lf", guess);
	////while(guess != PI)
	//while (fabs(guess - PI) > 0.01) // ������ ���ִ� �Լ� fabs() 
	//								// �ؼ�: ������ 0.01���� ũ�ٸ� while�� ����
	//								// ���迬���ڸ� ���� �Ǽ��� �񱳿����� ������ ������ �ݿ��Ͽ� ���ִ� ����� ���� ����Ѵ�.
	//{
	//	printf("Fool! Try again. \n");
	//	scanf("%lf",&guess);
	//}		
	//printf("Good");

	//// 6.5
	//// ��ǰ� ����

	//int i = -5;
	//while (i)
	//	printf("%d is true \n", i++); // ���� ���� true �̱� ������ -5�� while�� ������ ������ �� �ִ�.
	//printf("%d is false \n", i); // 0�϶��� false �� ���� ���´�.

	//// 6.6
	//// _Bool �ڷ���
	//
	//int i;

	//i = 5;
	//i == 5;
	//// 5 = i;
	//5 == i;

	////while (i = 5) {/*do something*/ };	//���� �Ǽ��� �ڵ�
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
	//// for loop �Ұ�

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

	//for (i = 1; i <= 10; i++) // i=1 �� ó���� �� ���� ����ǰ� �� ������ i++�� �Ѿ�� �� i<=10 �� Ȯ���ϴ� ������� for ���� ����ȴ� 
	//{	
	//	printf("%d", i);
	//}
	
	//// 6.9
	//// for �� �����ؿ�

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
	
	//// 6.11
	//// �޸� ������

	//for (int n = 1, nsqr = n * n; n < 10; n++, nsqr = n * n)
	//	printf("%d %d\n", n, nsqr);

	//// Note that commas in printf() are not comma operators
	//// but separators

	//int i, j;
	//i = 1;
	//i++, j = i; // comma is a sequence point
	//printf("%d %d\n", i, j);

	//int x, y, z;
	//z = x = 1, y = 2;
	//printf("x=%d,y=%d,z=%d\n", x, y, z);
	//z = (x = 1), (y = 2);
	//printf("x=%d,y=%d,z=%d\n", x, y, z);
	//z = ((x = 1), (y = 2)); //comma ������ �����ʿ� �ִ°��� ��ü expression�� ���� �ǹǷ� z=2 �� �ȴ�.
	//printf("x=%d,y=%d,z=%d\n", x, y, z);

	//// int my_money = 123, 456; //error
	//int my_money = (123,456); //456
	//printf("%d\n", my_money);

	//// 6.12
	//// ������ ���� �ùķ��̼� ����

	///*
	//	Simulation of a Moving Object

	//	- Speed = 1.0 m/s
	//	- dt = 1.0 m/s
	//	- Distance traveled during dt = Speed * dt
	//	
	//	- Step 1 : 1.0 m/s * 1.0 s = 1.0 m, dist = 1.0 m
	//	- Step 2 : 1.0 m/s * 1.0 s = 1.0 m, dist = 1.0 m + 1.0 m = 2.0 m
	//	- Step 3 : 1.0 m/s * 1.0 s = 1.0 m, dist = 2.0 m + 1.0 m = 3.0 m
	//*/
	
	//const double speed = 1.0;
	//const unsigned repeat_max = 10;

	//double dt = 1.0; // delta time ���� �ð� 
	//double time = 0.0;	// Elapsed time
	//double dist = 0.0;	// Distance

	//for (unsigned i = 0; i < repeat_max; ++i)
	//{
	//	dist += speed * dt;
	//	time += dt;

	//	printf("Elapsed time = %.10fs, Distance = %.10fm\n", time, dist);

	//	// TODO : half time step
	//}

	//// Note : infinite geometric sereies

	///*
	//	Zeno's Paradox
	//	- Step 1 : 1.0 * 1.0 = 1.0, 1.0
	//	- Step 2 : 1.0 * 0.5 = 0.5, 1.0 +0.5 = 1.5
	//	- Step 3 : 1.0 * 0.25 = 0.25, 1.5 +0.25 = 1.75

	//*/

	//const double speed = 1.0;
	//const unsigned repeat_max = 10;

	//double dt = 1.0; // delta time ���� �ð� 
	//double time = 0.0;	// Elapsed time
	//double dist = 0.0;	// Distance

	//for (unsigned i = 0; i < repeat_max; ++i)
	//{	
	//	
	//	dist += speed * dt;
	//	time += dt;
	//	dt = dt * 0.5 ; // /2.0 ���� *0.5 �� ���°� ����� ���� �Ϲ����̴�

	//	printf("Elapsed time = %.10fs, Distance = %.10fm\n", time, dist);

	//	// TODO : half time step
	//}

	// 6.13
	// Ż������ ���� do while
	//
	//int a = 0 ;
	//const int password = 8809;

	////printf("Enter secret code : ");
	////scanf("%d", &a);

	////while (a != password) {
	////	printf("Enter secret code : ");
	////	scanf("%d", &a);
	////}

	//do 
	//{
	//	printf("Enter secret code : ");
	//	scanf("%d", &a);
	//} 
	//while (a != password);

	////printf("Good!");
	//
	//// 6.15
	//// ��ø�� ������

	//int num_lines;
	//char start ,finish ;

	//scanf("%d %c %c",&num_lines, &start, &finish);

	//for (int i = 1; i <= num_lines; i++) {
	//	for (char j = start; j <= finish; j++) {
	//		printf("%c ",j);
	//	}
	//	printf("\n");
	//}

	//// 6.16
	//// �迭�� ��Ÿ�� ����

	//int my_numbers[5]; // 0���� 4��° ������ ���� 5���� �Ҵ����ش�

	//my_numbers[0] = 1;
	//my_numbers[1] = 3;
	//my_numbers[2] = 4;
	//my_numbers[3] = 2;
	//my_numbers[4] = 1024;

	//// scanf("%d", &my_numbers[0]);
	//scanf("%d", my_numbers); // same

	//printf("%d\n", my_numbers[0]);
	//printf("%d\n", my_numbers[1]);
	//printf("%d\n", my_numbers[2]);
	//printf("%d\n", my_numbers[3]);
	//printf("%d\n", my_numbers[4]);

	///* Runtime Error */

	//my_numbers[5] = 123; // out of bound (6��° ����)

	return 0;
}