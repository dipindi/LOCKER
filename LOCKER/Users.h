#ifndef USERS_H
#define USERS_H

#include <string>
#include <fstream>
#include <msclr\marshal_cppstd.h>

struct loginCredentials {
	std::string username;
	std::string password;
};

extern std::vector<loginCredentials> users;
extern std::string currentUser;

void getCredentials(const std::string& filename);
bool checkCredentials(System::String^ username, System::String^ password);
void addCredentials(System::String^ username, System::String^ password);
void setCurrentUser(System::String^ username);

#endif