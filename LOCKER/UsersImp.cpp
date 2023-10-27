#include "Users.h"
#include <filesystem>
#include "json.hpp"

namespace fs = std::filesystem;

std::vector<loginCredentials> users;
extern std::string currUser;
static std::string folderName;
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
	folderName = fs::current_path().string() + "\\UserFolders\\" + newUser.username;
	if (!fs::exists(folderName)) {
		fs::create_directories(folderName);
	}

	nlohmann::ordered_json emptyJson;
	emptyJson["images"] = {};
	std::ofstream outfile(fs::current_path().string() + "\\UserFolders\\" + newUser.username + "\\" + newUser.username + ".json");
	outfile << std::setw(4) << emptyJson;
	outfile.close();

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