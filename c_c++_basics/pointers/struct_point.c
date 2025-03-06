#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Game {
	char title[20];
	int size;
	char genre[30];
};

struct Employee {
	char name[50];
	int salary;
	char role[30];
};

int main() {
	struct Employee *p;

	p = (struct Employee *)malloc(sizeof(struct Employee));
	// used strcpy because name is a char array, not an actual string
	// NOTE: strcpy doesn't take into account how big a char array is, so it can cause buffer overflow - strncopy 
	// DOES take into account how big one is
	strcpy(p->name, "Nikolai Escondo");
	// -> notation is the same as (*p).salary=45000
	p->salary=45000;
	strcpy(p->role, "Software Engineer");
		
	printf("Employee Name: %s\n", p->name);
	printf("Employee Salary: %d\n", (*p).salary);
	printf("Employee Role: %s\n", (*p).role);

	free(p);
	
	struct Game *p2;
	p2 = (struct Game *)malloc(sizeof(struct Game));
	strcpy(p2->title, "Dark Souls 3");
	p2->size=500;
	strcpy(p2->genre, "Souls-like");
	
	printf("Game title: %s\n", p2->title);
	printf("Game size: %dGB\n", p2->size);
	printf("Game genre: %s\n", p2->genre);
	
	free(p2);
	
	return 0;
}
	

	
