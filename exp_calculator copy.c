// CS2211a 2020
// Assignment 2
// Shirley Wu
// 251082034
// SWU546
// OCT 6 2020

#include <stdio.h>

/* declare variables and functions*/
float a;
int n;
int calculated;
float evenNum();
float oddNum();
float lessThanZero();
int power();

int main () {

    /* use printf() prompt user for exponent and base */
    printf("Enter an exponent: ");
    scanf(" %d", &n); // read user input using scanf()

    /* use if statement to check if n is greater or less than 0*/
    if (n>0){
        /* use mod operator to check if n is odd or even */
        if (n%2==0){
            calculated = evenNum();
        }
        else if (n%2!=0){
            calculated = oddNum();
        }
    }
    else if (n<0){
        calculated = lessThanZero();
    }

}

/* define recursive function for calculating exponents*/
int power(int a, int n){
    if (n==0){
        return 1;
    } else {
        return a * power(a, n-1);
    }

}

/*function for if n is an even number*/
float evenNum (){
    printf("Enter a base: ");
    scanf(" %f", &a);

    /* check if base is 0*/
    if (a == 0) {
        return 0; //if a is 0, exit program
    }
    else {
        calculated = power(a, (n / 2)) * power(a, (n / 2));
        printf("Exponent calculated: ");
        printf("%d", calculated);
    }
}

/* function for if n is an odd number*/
float oddNum(){
    printf("Enter a base: ");
    scanf(" %f", &a);
    if (a==0){
        return 0;
    } else {
        calculated = power(a, (n - 1) / 2) * power(a, (n - 1) / 2) * a;
        printf("Exponent calculated: ");
        printf(" %d", calculated);
    }
}

/* function for if n is less than zero*/
float lessThanZero(){
    printf("Enter a base: ");
    scanf(" %f", &a);
    if (a==0){
        return 0;
    }else {
        calculated = 1/power(a, -n);
        printf("Exponent calculated: ");
        printf(" %d", calculated);
    }
}