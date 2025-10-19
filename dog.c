#include <stdio.h>
#include <string.h>

#define MAX_NAME_LEN 25

void bark() {
	printf("Woof\n");
}

void eat() {
	printf("Eating...\n");
	printf("Done eating.\n");
}

void print();

typedef struct {
	char name[MAX_NAME_LEN];
	unsigned char age;
	void (*bark)();
	void (*eat)();
	void (*print)();
} dog;

void print(const dog d) {
	printf("\n\nDOG\nName: %s\nAge: %hh\n", d.name, d.age);
	printf("Bark action:\n"); d.bark();
	printf("Eat action:\n"); d.eat();
}

dog create_dog(char name[], unsigned char age) {
	dog d = {.age = age, .bark = bark, .eat = eat, .print = print};
	strncpy(d.name, name, MAX_NAME_LEN);
	return d;
}

int main() {
	dog d = create_dog("pippo", 4);
	printf("%s, %d\n", d.name, d.age);
	d.bark();
	d.eat();

	d.print(d);
	return 0;
}

