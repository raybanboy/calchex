#include "iostream"
#include "string"

char hex[20];
char hex1[20];
char hex2[20];
void Menu(void);

void Conversor(void)
{
	long a = 0;
	
	int opcion = 0;

	do {

		std::cout << "\t\t1 -> Decimal.\n\t\t2 -> Hexadecimal.\n";

		std::cin >> opcion;
	} while (opcion != 1 && opcion != 2);
	if (opcion == 1)
	{
		std::cout << "Introduce un valor para convertir." << std::endl;
		std::cin >> a;
		std::cout << "El valor decimal de " << std::dec << a << " en hexadecimal es " << std::hex << a << std::endl;
	}
	if (opcion == 2)
	{
		std::cout << "Introduce un valor para convertir." << std::endl;
		std::cin >> hex;
		long b = std::stol(hex, 0, 16);
		std::cout << "El hexadecimal" << std::hex << hex << " en decimal es " << std::dec << b << std::endl;

	}
	std::cin.ignore(std::cin.rdbuf()->in_avail());
	Menu();

}
void Calculadora(void)
{
	int n = 0, n1 = 0;
	char opcion = 'T';
	std::cout << "Elije tipo de operacion 'S' para sumar o 'R' para restar.\n";
	std::cin >> opcion;
	opcion = toupper(opcion);
	std::cout << "Introduce los dos numeros a sumar o restar.\n";
	std::cin >> n;
	std::cin >> n1;

	if (opcion == 'S')
	{
		long resultado = n + n1;
		std::cout << std::hex << n << "+" << std::hex << n1 << "=" << std::hex << resultado << std::endl;
	}
	if (opcion == 'R')
	{
		long resultado = n - n1;
		std::cout << std::hex << n << "-" << std::hex << n1 << "=" << std::hex << resultado << std::endl;
	}

	std::cin.ignore(std::cin.rdbuf()->in_avail());
	Menu();

}

void Menu(void)
{
	int opcionswitch = 0;
	std::cout << "Selecione un tipo de operacion.\n\t1.Conversor.\n\t2.Calculadora Hexadecimal." << std::endl;
	puts("\n");
	std::cin >> opcionswitch;
	switch (opcionswitch)
	{
	case 1:
		Conversor();
		break;
	case 2:
		Calculadora();
		break;
	}
}
