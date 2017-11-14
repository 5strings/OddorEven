//
//  main.c
//  Odd or Even
//
//  Created by Eun Jae Lee on 14/11/17.
//  Copyright © 2017 Eun Jae Lee. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    int num;
    printf("Enter any number: \n");
    scanf("%d\n",&num);
    
    if (num%2 == 0) {
        printf("Even Number\n");
    } else {
        
        printf("Odd Number\n");
        
    }
    
   // getch();
    
    return 0;
}
