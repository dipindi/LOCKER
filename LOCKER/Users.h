#ifndef USERS_H
#define USERS_H

#include <fstream>
#include <vector>
#include <msclr\marshal_cppstd.h>

struct loginCredentials {
	std::string username;
	std::string password;
	int numEntries;
};

void getCredentials(const std::string& filename);
bool checkCredentials(System::String^ username, System::String^ password);
void addCredentials(System::String^ username, System::String^ password);
int getNumEntries(const loginCredentials& user);
void setNumEntries(loginCredentials& user, int newValue);

#endif