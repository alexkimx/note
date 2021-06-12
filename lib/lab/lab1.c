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
void gradeSwitch(int x){
    // unfinished
    
    for (int i = 0; i < 4; i++)
    {
        switch (x)
        {
        case 90 ... 100:
            printf("A");
            break;
        case 70 ... 89:
            printf("B");
            break;
        case 30 ... 69:
            printf("C");
            break;
        case 0 ... 29:
            printf("F");
            break;
        default:
            printf("TRY AGAIN\n");
            break;
        }
    }
}



int main(){
    int num; // declare a variable
    
    num = scanf("%d",&num); // get input

    printf("Your grade:\n"); 
    gradeIf(num);
    //gradeSwitch(num);

    return 0; // end running
}