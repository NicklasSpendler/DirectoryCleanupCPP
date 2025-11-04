#include <iostream>
#include "lib/DirectoryCleanup.h"

int main() {

    const fs::path testFolderPath = "/home/niggerlas/CLionProjects/MyProjects/DirectoryCleanup/TestFolder/";

    std::cout << testFolderPath << std::endl;

    DirectoryCleanup::CreateTestFolders(testFolderPath, 10);
    //DirectoryCleanup::DeleteTestFolders(testFolderPath);

    return 0;
}