#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

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



	return 0;
}