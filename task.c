#include <stdio.h>
#include <string.h>

typedef struct Person {
    char* name;
    int age;
    double height;
} Person;

void P_ctor(Person* const this) {
    this->name = "Unknown";
    this->age = 0;
    this->height = 0;
} 

void P_p_ctor(Person* const this, char* n, int a, double h) {
    this->name = n;
    this->age = a;
    this->height = h;
}

char* getName(const Person* const this) {
    return this->name;
}

int getAge(const Person* const this) {
    return this->age;
}

double getHeight(const Person* const this) {
    return this->height;
}

void setName(Person* const this, const char* n) {
    strcpy(this->name, n);
}

void setAge(Person* const this, int a) {
    this->age = a;
}

void setHeight(Person* const this, double h) {
    this->height = h;
}

void z_printInfo(const Person* const this) {
    printf("Name: %s, Age: %d, Height: %lf\n", this->name, this->age, this->height);
}

void p_printInfo(const Person* const this, int showHeight) {
    printf("Name: %s, Age: %d", this->name, this->age);
    if (showHeight) {
        printf(", Height: %lf", this->height);
    }
    printf("\n");
}

int main() {
    Person p1;
    P_p_ctor(&p1, "Bob", 19, 1.75);

    z_printInfo(&p1);
    p_printInfo(&p1, 1);

    setAge(&p1 ,20);
    printf("Updated Age: %d", getAge(&p1));
}