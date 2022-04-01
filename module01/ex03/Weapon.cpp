#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type){
}

Weapon::~Weapon() {

}

std::string const & Weapon::getType() const {
	return this->_type;
}

std::string const & Weapon::setType(std::string type) {
	return this->_type = type;
}