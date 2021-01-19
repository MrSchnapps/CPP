#include "Contact.hpp"

void Contact::setFirstName(const std::string str)
{
    this.first_name = str;
}

void Contact::setLastName(const std::string str)
{
    this.last_name = str;
}

void Contact::setNickname(const std::string str)
{
    this.nickname = str;
}

void Contact::setLogin(const std::string str)
{
    this.login = str;
}

void Contact::setPostalAdress(const std::string str)
{
    this.postal_adress = str;
}

void Contact::setEmailAdress(const std::string str)
{
    this.email_adress = str;
}

void Contact::setPhoneNumber(const std::string str)
{
    this.phone_number = str;
}

void Contact::setBirthdayDate(const std::string str)
{
    this.birthday_date = str;
}

void Contact::setFavoriteMeal(const std::string str)
{
    this.favorite_meal = str;
}

void Contact::setUnderwearColor(const std::string str)
{
    this.underwear_color = str;
}

void Contact::setDarkestSecret(const std::string str)
{
    this.email_adarkest_secretdress = str;
}

const std::string getFirstName()
{
    return (this.first_name);
}

const std::string getLastName()
{
    return (this.last_name);
}

const std::string getNickname()
{
    return (this.nickname);
}

const std::string getLogin()
{
    return (this.login);
}

const std::string getPostalAdress()
{
    return (this.postal_adress);
}

const std::string getEmailAdress()
{
    return (this.email_adress);
}

const std::string getPhoneNumber()
{
    return (this.phone_number);
}

const std::string getBirthdayDate()
{
    return (this.birthday_date);
}

const std::string getFavoriteMeal()
{
    return (this.favorite_meal);
}

const std::string getUnderwearColor()
{
    return (this.underwear_color);
}

const std::string getDarkestSecret()
{
    return (this.darkest_secret);
}
