#include <stdio.h>

void say_hello(void); //prototyping, function declaration

int main() {

	int x, y, z; // declaration
	x = 1; // initialization
	y = 4;

	z = x + y;

	printf("The answer is %i", x + y);
	printf("The answer is %d", x + y);
	say_hello();
	return 0;
}

void say_hello(void) // function definition
{
	printf("Hello there\n");

	int x = 1; // 여기서 선언한 x는 main 함수에서 선언한 x와 변수명이 같더라도 그 둘은 아무런 관계성이 없다.

	return; // return 값은 없다
}
// linker 가 하는 일은 function 을 main 함수에 끌어다 쓸 수 있도록 만들어 주는 역할을 한다.
/* Comments1 */
// Comments2

/* break point(중단점) 사용
	처음에 중단점을 하나 찍으면 중단점 이전의 부분은 모두 실행 되어 넘어오며 중단점 이후로부터 실행이 된다.
	f10 그리고 f11 을 누르면 한 줄 한 줄 코드를 실행시켜 볼 수 있다.
	중단점이 여러개일 경우 f5를 누르면 다음 코드로 넘어간다.
	디버깅을 멈출때는 shift + f5 를 누르면 된다.
*/
