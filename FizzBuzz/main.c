//
//  main.c
//  FizzBuzz
//
//  Created by Graeme Harrison on 2015-12-16.
//  Copyright © 2015 Graeme Harrison. All rights reserved.
//
//Write a program that prints the numbers from 1 to 100. For the multiples of 3, print "Fizz" instead of the number and for the multiples of 5, print "Buzz" instead of the number. For numbers which are multiples of both 3 and 5 print "FizzBuzz"

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int x = 1;
    while (x <=100)
    {
        if (x % 3 == 0 && x % 5 == 0) {
            printf("FizzBuzz \n");
            x++;
        } else if (x % 3 == 0) {
            printf("Fizz \n");
            x++;
        } else if (x % 5 == 0) {
            printf("Buzz \n");
            x++;
        } else {
            printf("%d\n", x);
            x++;
        }
    }
    return 0;
}
