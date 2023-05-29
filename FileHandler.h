#ifndef FILEHANDLER_H
#define FILEHANDLER_H

#include <fstream>
#include <string>

class FileHandler {
public:
    // Write content to a file
    static bool writeFile(const std::string& filename, const std::string& content);

    // Read content from a file
    static std::string readFile(const std::string& filename);
};

// Write content to a file
bool FileHandler::writeFile(const std::string& filename, const std::string& content) {
    std::ofstream file(filename);
    if (!file) {
        return false;  // Failed to open the file
    }

    file << content;
    file.close();
    return true;
}

// Read content from a file
std::string FileHandler::readFile(const std::string& filename) {
    std::ifstream file(filename);
    if (!file) {
        return "";  // Failed to open the file
    }

    std::string content((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
    file.close();
    return content;
}

#endif  // FILEHANDLER_H
