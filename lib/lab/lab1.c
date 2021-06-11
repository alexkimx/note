#include <stdio.h>
// 학점계산프로그램
// method 1: if
void gradeIf(int x){
    if(x>=90 && x<=100) printf("A");
    else if(x>=70 && x<90) printf("B");
    else if(x>=30 && x<70) printf("C");
    else (x>=0 && x<30) printf("F");

}
void gradeSwitch(int x){
    switch (x)
    {
    case /* constant-expression */:
        /* code */
        break;
    
    default:
        break;
    }
    if(x>=90 && x<=100) printf("A");
    else if(x>=70 && x<90) printf("B");
    else if(x>=30 && x<70) printf("C");
    else (x>=0 && x<30) printf("F");

}


// method 2: switch
int main(){
    int num; // declare a variable
    
    num = scanf("%d",&num); // get input

    printf("Your grade:\n"); 
    printf("using if-statement:"); 
    gradeIf(num);
    printf("\n")
    printf("using switch-statement"); 
    gradeSwitch(num); 
    printf("\n")
    return 0; // end running
}