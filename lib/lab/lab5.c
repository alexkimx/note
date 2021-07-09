#include <stdio.h>
//포인터
// 목표:원하는 변수에 대해 '정의'된 '위치'에 3 담기
// 원하는 위치에 3 담기
// define 'give_three'
void give_three(int &x){
    &x = 3;
    *x = 3;
    x = 3;

}

int main()
{
	// 초기값
    int number = 0;
	int number2 = 0;

	// 위치값을 정해준다. 
	int choice = -1;

	// 
	printf("number 1을 수정하려면 0을 누르시오.\n");
	scanf("%d", &choice);

	// 
	if ( choice == 0 )
		give_three(&number);
	else
		give_three(&number2);

	// 
	printf(
		"number: %d\n"
		"number2: %d\n", number, number2);

	return 0;
}
