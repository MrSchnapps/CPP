#if !defined(HUMAN_HPP)
#define HUMAN_HPP

# include <string>

class Contact
{
	public:
		void				setFirstName(const std::string str);
		void				setLastName(const std::string str);
		void				setNickname(const std::string str);
		void				setLogin(const std::string str);
		void				setPostalAdress(const std::string str);
		void				setEmailAdress(const std::string str);
		void				setPhoneNumber(const std::string str);
		void				setBirthdayDate(const std::string str);
		void				setFavoriteMeal(const std::string str);
		void				setUnderwearColor(const std::string str);
		void				setDarkestSecret(const std::string str);

		const std::string	getFirstName();
		const std::string	getLastName();
		const std::string	getNickname();
		const std::string	getLogin();
		const std::string	getPostalAdress();
		const std::string	getEmailAdress();
		const std::string	getPhoneNumber();
		const std::string	getBirthdayDate();
		const std::string	getFavoriteMeal();
		const std::string	getUnderwearColor();
		const std::string	getDarkestSecret();
	
	private:
		int         index;
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string login;
		std::string postal_adress;
		std::string email_adress;
		std::string phone_number;
		std::string birthday_date;
		std::string favorite_meal;
		std::string underwear_color;
		std::string darkest_secret;
};

#endif