#include <iostream> 

class Address
{
    public:
        Address(std::string street, std::string city, std::string country, int postalCode);
        std::string getStreet();
        std::string getCity();
        std::string getCountry();
        int getPostalCode();
        void setStreet(std::string street);
        void setCity(std::string city);
        void setCountry(std::string country);
        void setPostalCode(int postalCode);
    private:
        std::string _street;
        std::string _city;
        std::string _country;
        int _postalCode;
};
bool isPostalCodeValid(int postalCode);
