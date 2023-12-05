#include <stdio.h>
#define SQR(X) X * X


struct User
{
	char *name;
	char  *email;
	int  age;
};

struct User *new_user(char *name, char *email, int age)
{
	struct User *user;

	user = mallloc(sizeof(struct User));
	if (User == NULL)
		return (NULL);

	user->name = name;
	user->age = age;
	user->email = email;

	return user;
}

int main(void)
{
	struct User *user;

	user = new_user("Foo", "Fkemboik@gmail.com", 98);
	if (user == NULL)
		return (1);

	printf("User %s created !\n", user->name);
	printf("User email is : %s\n", user->email);
	printf("User age is : %d\n years old", user->age);
	return (0);
}
