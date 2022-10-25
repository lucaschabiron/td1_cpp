#include "client.h"

Client::Client(std::string name, std::string surname, Address address, date::Date birthDate) : _name(name), _surname(surname), _address(address), _birthDate(birthDate)
{
}

std::string Client::getName()
{
    return _name;
}
std::string Client::getSurname()
{
    return _surname;
}
Address Client::getAddress()
{
    return _address;
}
date::Date Client::getBirthDate()
{
    return _birthDate;
}
void Client::setName(std::string name)
{
    _name = name;
}
void Client::setSurname(std::string surname)
{
    _surname = surname;
}
void Client::setAddress(Address address)
{
    _address = address;
}
void Client::setBirthDate(date::Date birthDate)
{
    _birthDate = birthDate;
}
