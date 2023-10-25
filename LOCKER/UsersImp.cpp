#include "Users.h"
#include <filesystem>

namespace fs = std::filesystem;

extern std::vector<loginCredentials> users;
extern std::string currUser;

void getCredentials(const std::string& filename) {
	std::ifstream file(filename);
	loginCredentials user;
	while (file >> user.username >> user.password) {
		users.push_back(user);
	}
	file.close();
}

bool checkCredentials(System::String^ username, System::String^ password) {
	for (const auto& user : users) {
		if (username == gcnew System::String(user.username.c_str()) && password == gcnew System::String(user.password.c_str())) {
			return true;
		}
	}
	return false;
}

void addCredentials(System::String^ username, System::String^ password) {
	loginCredentials newUser;
	newUser.username = msclr::interop::marshal_as<std::string>(username);
	newUser.password = msclr::interop::marshal_as<std::string>(password);
	newUser.numEntries = 0;

	// creates a folder named after the username
	std::string folderName = fs::current_path().string() + "\\UserFolders\\" + newUser.username;
	if (!fs::exists(folderName)) {
		fs::create_directories(folderName);
	}

	// Create numberOfEntries.txt file
	std::string entriesFile = folderName + "\\numberOfEntries.txt";
	std::ofstream entriesFileHandler(entriesFile, std::ios::trunc);
	if (entriesFileHandler.is_open()) {
		entriesFileHandler << "0";
		entriesFileHandler.close();
	}

	// adds username and password in users.txt
	std::ofstream file("users.txt", std::ios::app);
	if (file.is_open()) {
		file << newUser.username << " " << newUser.password << std::endl;
		file.close();
	}
}

// NOT WORKING
std::string setCurrentUser(System::String^ username) {
	std::string currUser = msclr::interop::marshal_as<std::string>(username);
	return currUser;
}

