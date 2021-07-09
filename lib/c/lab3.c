#include<stdio.h>
// 2021-jun-12
// login with swtich

int main(void)
{
    // password는 123 이라고 가정한다.
	int pw; 
    scanf_s("%d", &pw); 
	
	switch (pw) 
	{
	case 123:
		printf("logged in.\n");
		break;


	default:
		printf("failed.");
		break;
	}
	

	return 0;
}