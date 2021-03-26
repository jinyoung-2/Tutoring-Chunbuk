#include<stdio.h>
#include<string.h>

struct person
{
	char name[20];
	int age;
	char department[20];
};
void setperson(struct person a);
int main(void)
{
	struct person std;

	strcpy(std.name, "둘리");
	std.age = 11;
	strcpy(std.department, "남극");

	setperson(std);

	printf("%s\n", std.name);
	printf("%d\n", std.age);
	printf("%s\n", std.department);

	return 0;
}

void setperson(struct person a)
{
	strcpy(a.name, "고길동");
	a.age = 40;
	strcpy(a.department, "서울시");
}