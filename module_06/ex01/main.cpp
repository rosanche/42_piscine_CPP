#include "Serialize.hpp"

int main()
{
	char *data_serialize;
	Data *data_deserialize;

	std::cout << "SERIALIZE\n";
	data_serialize = (char *) serialize();
	std::cout << "8 first characters: ";
	for (int i = 0; i < 8; i++)
		std::cout << data_serialize[i];
	int result;
	result = *(data_serialize + 8);
	std::cout << "\nn: " << result << "\n";
	std::cout << "8 last characters: ";
	for (int i = 0; i < 8; i++)
		std::cout << data_serialize[i + 12];

	std::cout << "\n\nDESERIALIZE\n";
	data_deserialize = (Data*) deserialize(data_serialize);
	std::cout << "s1: " << data_deserialize->s1 << "\n";
	std::cout << "n :" << data_deserialize->n << "\n";
	std::cout << "s2: " << data_deserialize->s2 << "\n";
}
