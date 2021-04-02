#include "Squad.hpp"

Squad::Squad(): _squadCount(0), _units(nullptr) {

}

Squad::Squad(Squad const &copy): _squadCount(0), _units(nullptr) {

	if (copy._units) {

		this->_units = new ISpaceMarine*[this->_squadCount];
		for (int i = 0; i < this->_squadCount; i++) {

			this->_units[i] = copy._units[i];
		}
	}
}
Squad::~Squad() {

	delete[] this->_units;
}

Squad &Squad::operator = (Squad const &copy) {

	if (this == &copy)
		return *this;
	delete[] this->_units;
	this->_squadCount = copy._squadCount;
	if (copy._units)
	{

		this->_units = new ISpaceMarine*[this->_squadCount];
		for (int i = 0; i < this->_squadCount; i++) {
		}
	}
	else
		this->_units = nullptr;
	return *this;
}

int Squad::getCount() const {

	return this->_squadCount;
}

ISpaceMarine* Squad::getUnit(int index) const {

	if (this->_squadCount == 0 || index < 0 || index >= this->_squadCount)
		return nullptr;
	return (this->_units[index]);
}

int Squad::push(ISpaceMarine *unit) {

	if (!unit)
		return this->_squadCount;
	if (this->_units) {

		for (int i = 0; i < this->_squadCount; i++) {

			if (this->_units[i] == unit)
				return (this->_squadCount);
		}
		ISpaceMarine **copy = new ISpaceMarine*[this->_squadCount + 1];
		for (int i = 0; i < this->_squadCount; i++)
			copy[i] = this->_units[i];
		delete [] this->_units;
		this->_units = copy;
		this->_units[this->_squadCount] = unit;
		this->_squadCount++;
	}
	else {
		this->_units = new ISpaceMarine*[1];
		this->_units[0] = unit;
		this->_squadCount++;
	}
	return (this->_squadCount);
}