#include "MateriaSource.hpp"

MateriaSource::MateriaSource(): _amount(0) {

	for (int i = 0; i < 4; i++)
		this->_materiaSources[i] = nullptr;
}

MateriaSource::MateriaSource(MateriaSource const &copy): _amount(0) {

	for (int i = 0; i < copy._amount; i++) {
		this->learnMateria(copy._materiaSources[i]->clone());
	}
	for (int i = 0; i < 4; i++) {
		this->_materiaSources[i] = nullptr;
	}
}

MateriaSource::~MateriaSource() {

	for (int i = 0; i < this->_amount; i++)
		delete this->_materiaSources[i];
}

MateriaSource &MateriaSource::operator = (MateriaSource const &copy) {

	for (int i = 0; i < this->_amount; i++)
		delete this->_materiaSources[i];
	this->_amount = 0;
	for (int i = 0; i < copy._amount; i++)
		this->learnMateria(copy._materiaSources[i]->clone());
	for (int i = 0; i < 4; i++) {
		this->_materiaSources[i] = nullptr;
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria *aMateria) {

	if (this->_amount == 4 || !aMateria)
		return;
	for (int i = 0; i < this->_amount; i++)
		if (this->_materiaSources[i] == aMateria)
			return ;
	this->_materiaSources[this->_amount++] = aMateria;
}

AMateria* MateriaSource::createMateria(std::string const &type) {

	for (int i = 0; i < this->_amount; i++)
		if (this->_materiaSources[i]->getType() == type)
			return (this->_materiaSources[i]->clone());
	return nullptr;
}