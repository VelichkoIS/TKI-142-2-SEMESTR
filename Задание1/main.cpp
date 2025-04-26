#include <iostream>
#include "Person.h"

int main()
{
	Person person("Velichko", "Ivan", "Sergeevich");
	person.Show();
	person.ShowFormal();
	return 0;
}
