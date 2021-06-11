#include <stdio.h>
// 학점계산프로그램
// method 1: if
void gradeIf(int x){
    if(x>=90 && x<=100) printf("A");
    else if(x>=70 && x<90) printf("B");
    else if(x>=30 && x<70) printf("C");
    else printf("F");

}

// method 2: switch
int main(){
    int num; // declare a variable
    
    num = scanf("%d",&num); // get input

    printf("Your grade:\n"); 
    printf("using if-statement:"); 
    gradeIf(num);

    return 0; // end running
}