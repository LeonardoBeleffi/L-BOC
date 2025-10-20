#include "dog.h"

static void _dog_h_bark() {
	printf("Woof\n");
}

static void _dog_h_eat() {
	printf("Eating...\n");
	printf("Done eating.\n");
}

void _dog_h_print(const dog d) {
	printf("--- DOG DATA ---\nName: %s\nAge: %u\n", d.name, d.age);
	printf("--- DOG ACTIONS ---\n");
	printf("Bark:\n"); d.bark();
	printf("Eat:\n"); d.eat();
}

dog _dog_h_initialize(const char name[], const unsigned char age) {
	dog d = {"", 0, _dog_h_bark, _dog_h_eat, _dog_h_print};
	strncpy(d.name, name, MAX_NAME_LEN);
	d.age = age;
	return d;
}

