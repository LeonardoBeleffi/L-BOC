#ifndef _DOG_H_
#define _DOG_H_

#include <stdio.h>
#include <string.h>

#define MAX_NAME_LEN 25


typedef struct {
        char name[MAX_NAME_LEN];
        unsigned char age;
        void (*bark)(); 
        void (*eat)();  
        void (*print)();
} dog;

void _dog_h_print(const dog d);

dog _dog_h_initialize(const char name[], const unsigned char age);

#endif /* _DOG_H_ */
