#include "Student.h"
#include <cstring>
#include <stdio.h>

void Student::setName(const char name[]) {
	strcpy_s(this->name, name);
}

char* Student::getName() {
	return this->name;
}

void  setGradeMath(float grade) {

}

float getGradeMath() {

}