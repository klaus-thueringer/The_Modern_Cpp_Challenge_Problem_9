#include <iostream>
using namespace std;
#include<string>
#include <cmath>
#include <stdio.h>
#include <stdlib.h>
#include<time.h>

void primfactors(int number){
    for(int i = 2; i <=number; i++){
        while(number%i==0){
            cout << i << " ";
            number = number/i;
        }
    }
}


int main() {
    /*
    Prime factors of a number
    Write a program that prints the prime factors of a number
    entered by the user.
    */
    int number;
    cin >> number;
    primfactors(number);
}


