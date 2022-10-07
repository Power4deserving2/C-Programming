#include <stdio.h>

int main()
{
	int PizzasToEat = 2000;
	printf("Pizzas to eat today will be %i\n", PizzasToEat);
 	PizzasToEat += 100;
	printf("Pizzas to eat today will be %i\n", PizzasToEat);
 	PizzasToEat -= 100;
	printf("Pizzas to eat today will be %i\n", PizzasToEat);
 	PizzasToEat /= 100;
	printf("Pizzas to eat today will be %i\n", PizzasToEat);
 	PizzasToEat *= 100;
	printf("Pizzas to eat today will be %i\n", PizzasToEat);
 	PizzasToEat %= 100;
	printf("Pizzas to eat today will be %i\n", PizzasToEat);
	return 0;
}
