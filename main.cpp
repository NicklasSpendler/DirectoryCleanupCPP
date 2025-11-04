#include <iostream>
#include "lib/DirectoryCleanup.h"

int main() {

    const fs::path testFolderPath = "/home/niggerlas/CLionProjects/MyProjects/DirectoryCleanup/TestFolder/";

    const auto directoryCleanup = std::make_unique<DirectoryCleanup>(testFolderPath);

    directoryCleanup->Cleanup();

    //DirectoryCleanup::CreateTestFolders(testFolderPath, 10);
    //DirectoryCleanup::DeleteTestFolders(testFolderPath);

    return 0;
}