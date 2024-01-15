#include<stdio.h>

int main(){
    int age = 22;
    int oldage = age;
    int newage = oldage + 2;
    printf("new age is : %d", newage);

    int rupee = 1, dollar;
    dollar = 75;

    /*
        oder of declaration is important - worng declaration order
        float pi = 3.14;
        float area = pi * rad * rad;
        float rad = 3;
    */
   /*valid declaration*/
    int age1, age2, age3;
    age1 = age2 = age3 = 22;
    print("the age is: %d", age3 );
    /*invalid declaration*/
    // int a1 = a2 = a3 = 23;
return 0;

}