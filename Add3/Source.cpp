#include<iostream>
#include<string>

std::string spaces_str(std::string str);
bool is_spam(std::string str);
int calculate(std::string str);

int main() {

	//Ex1
	/*
	std::cout << "Enter string" << std::endl;
	std::string str1;
	std::getline(std::cin, str1);
	std::cout << spaces_str(str1);
	*/
	//Ex2
	/*std::cout << "Ex2\nEnter string -> ";
	std::string str2;
	std::getline(std::cin, str2);

	if (is_spam(str2))
		std::cout << "spam!" << std::endl;

	else
		std::cout << "no spam" << std::endl;

		*/
	//Ex3
	/*
	std::cout << "Ex3\n";
	std::string url = "http://google.com/search/cats";
	int domen_index = url.find("://") + 3;
	int path_index = url.find('/', domen_index) + 1;


	std::string protocol = url.substr(0,domen_index - 3);
	std::string domen = url.substr(domen_index, path_index - 1 - domen_index);
	std::string path = url.substr(path_index);
	 

	


	std::cout << "protocol: " << protocol << std::endl;
	std::cout << "domen: " << domen << std::endl;
	std::cout << "path: " << path << std::endl;
	*/

	//Ex4
	std::cout << "Ex4\n";
	std::string str4 = "6 + 7 + 10 + 3 + 4";
	std::cout << str4 << std::endl;
	std::cout << calculate(str4);
	


	return 0;


}
//Ex4
int calculate(std::string str) {
	int sum = 0;
	int index = 0;
	while(true){
		int tmp = str.find(" + ", index);
		if (tmp < str.length()) {
			sum += std::stoi(str.substr(index, tmp - index));
			index = tmp + 3;
		}
		else {
			sum += std::stoi(str.substr(index));
			break;
		}
	}
	return sum;

}



//Ex2
bool is_spam(std::string str) {
	for (int i = 0; i < str.length(); i++){
		str[i] = std::tolower(str[i]);
	}

	const int spams_number = 4;
	std::string spams[spams_number]{
		"100% free",
		"sales increase",
		"only today",
		"black friday"
	};
	for (int i = 0; i < spams_number; i++)	{
		if (str.find(spams[i]) < str.length()) //проверка на наличие, подстроки в строке
			return true;
	}
	return false;
	
}

std::string spaces_str(std::string str) {
	std::string result;
	for (size_t i = 0; i < str.length(); i++){
		result += str[i];
		if(i != str.length() - 1)
			result += ' ';
	}



	


	
	return result;


}

