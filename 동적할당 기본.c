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

	strcpy(std.name, "�Ѹ�");
	std.age = 11;
	strcpy(std.department, "����");

	setperson(std);

	printf("%s\n", std.name);
	printf("%d\n", std.age);
	printf("%s\n", std.department);

	return 0;
}

void setperson(struct person a)
{
	strcpy(a.name, "��浿");
	a.age = 40;
	strcpy(a.department, "�����");
}