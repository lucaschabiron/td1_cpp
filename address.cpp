#include "address.h"

Address::Address(std::string street, std::string city, std::string country, int postalCode)
{
    bool valid = isPostalCodeValid(postalCode);
    assert(valid && "Postal code is not valid");
    _street = street;
    _city = city;
    _country = country;
    _postalCode = postalCode;    
}
std::string Address::getStreet()
{
    return _street;
}
std::string Address::getCity()
{
    return _city;
}
std::string Address::getCountry()
{
    return _country;
}
int Address::getPostalCode()
{
    return _postalCode;
}
void Address::setStreet(std::string street)
{
    _street = street;
}
void Address::setCity(std::string city)
{
    _city = city;
}
void Address::setCountry(std::string country)
{
    _country = country;
}
void Address::setPostalCode(int postalCode)
{
    _postalCode = postalCode;
}
bool isPostalCodeValid(int postalCode)
{
    if(postalCode > 1000 && postalCode < 99999)
    {
        return true;
    }
    return false;
}


