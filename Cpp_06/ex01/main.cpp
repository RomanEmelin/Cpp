#include <iostream>
#include <string>

struct Data {
	std::string stringOne;
	std::string stringTwo;
	int			num;
};

void *serialize() {

	char *serializedObject = new char[20];
	*reinterpret_cast<int *>(&serializedObject[8]) = rand() % 20;
	for (int i = 0 , j = 12; i < 7 && j < 20; i++, j ++) {
		serializedObject[i] = rand() % 26 + 97;
		serializedObject[j] = rand() % 26 + 97;
	}
	serializedObject[7] = '\0';
	serializedObject[19] = '\0';
	std::cout << "Serialized Object" << std::endl;
	std::cout << "stringOne: " << static_cast<char *>(&serializedObject[0]) << std::endl;
	std::cout << "stringTwo: " << static_cast<char *>(&serializedObject[12]) << std::endl;
	std::cout << "num: " << *reinterpret_cast<int *>(&serializedObject[8]) << std::endl;
	return (static_cast<void *>(serializedObject));
}

Data *deserialize(void *raw) {

	Data *data = new Data;
	data->stringOne = std::string(static_cast<char *>(raw));
	data->stringTwo = std::string(static_cast<char *>(raw) + 12);
	data->num = *reinterpret_cast<int *>(static_cast<char *>(raw) + 8);
	return data;
}

int main() {

	srand(time(0));
	void *d = serialize();
	Data *data = deserialize(d);

	std::cout << "Deserialized object" << std::endl;
	std::cout << "stringOne: " << data->stringOne << std::endl;
	std::cout << "stringTwo: " <<  data->stringTwo << std::endl;
	std::cout << "num: " << data->num << std::endl;
	delete static_cast<char *>(d);
	delete data;
	return (0);
}

