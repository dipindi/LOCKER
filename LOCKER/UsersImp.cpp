#include "Users.h"
#include <fstream>

std::vector<loginCredentials> users;

void getCredentials(const std::string& filename) {
	std::ifstream file(filename);
	loginCredentials user;
	while (file >> user.username >> user.password) {
		users.push_back(user);
	}
	file.close();
};

bool checkCredentials(System::String^ username, System::String^ password) {
	for (const auto& user : users) {
		if (username == gcnew System::String(user.username.c_str()) && password == gcnew System::String(user.password.c_str())) {
			return true;
		}
	}
	return false;
};

void addCredentials(System::String^ username, System::String^ password) {
	loginCredentials newUser;
	newUser.username = msclr::interop::marshal_as<std::string>(username);
	newUser.password = msclr::interop::marshal_as<std::string>(password);

	std::ofstream file("users.txt", std::ios::app);

	// adds username and password in users.txt
	if (file.is_open()) {
		file << newUser.username << " " << newUser.password << std::endl;
		file.close();
	}
	// create folder directory under [username]
	//
	// implementation here
	//
};