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

	int x = 1; // ���⼭ ������ x�� main �Լ����� ������ x�� �������� ������ �� ���� �ƹ��� ���輺�� ����.

	return; // return ���� ����
}
// linker �� �ϴ� ���� function �� main �Լ��� ����� �� �� �ֵ��� ����� �ִ� ������ �Ѵ�.
/* Comments1 */
// Comments2

/* break point(�ߴ���) ���
	ó���� �ߴ����� �ϳ� ������ �ߴ��� ������ �κ��� ��� ���� �Ǿ� �Ѿ���� �ߴ��� ���ķκ��� ������ �ȴ�.
	f10 �׸��� f11 �� ������ �� �� �� �� �ڵ带 ������� �� �� �ִ�.
	�ߴ����� �������� ��� f5�� ������ ���� �ڵ�� �Ѿ��.
	������� ���⶧�� shift + f5 �� ������ �ȴ�.
*/
