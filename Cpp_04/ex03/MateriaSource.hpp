#ifndef CPP_MATERIASOURCE_H
#define CPP_MATERIASOURCE_H
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource: public IMateriaSource {

private:
	AMateria	*_materiaSources[4];
	int			_amount;

public:
	MateriaSource();
	MateriaSource(MateriaSource const &copy);
	virtual ~MateriaSource();

	MateriaSource &operator = (MateriaSource const &copy);

	void learnMateria(AMateria *aMateria);
	AMateria* createMateria(std::string const & type);
};


#endif //CPP_MATERIASOURCE_H
