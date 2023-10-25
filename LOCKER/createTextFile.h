#pragma once

#include <fstream>
#include <string>

using namespace std;

// Declare the entriesFile and entriesFileHandler variables
string entriesFile;
ofstream entriesFileHandler;

// Function to create the numberOfEntries.txt file
void createNumberOfEntriesFile(const string& folderName);

// Function to write to the numberOfEntries.txt file
void writeToNumberOfEntriesFile(const string& folderName, const string& content);