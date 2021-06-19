#include <stdio.h>
//포인터

// define function 'give_three'
void give_three(){

}

int main()
{
	//
    int number = 0;
	int number2 = 0;

	// 
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
