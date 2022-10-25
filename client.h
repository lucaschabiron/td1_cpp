#include <iostream>
#include "address.h"
#include "date.h"

class Client
{
public:
    Client(std::string name, std::string surname, Address address, date::Date birthDate);
    std::string getName();
    std::string getSurname();
    Address getAddress();
    date::Date getBirthDate();
    void setName(std::string name);
    void setSurname(std::string surname);
    void setAddress(Address address);
    void setBirthDate(date::Date birthDate);

private:
    std::string _name;
    std::string _surname;
    Address _address;
    date::Date _birthDate;
};
