//
// Created by niggerlas on 04/11/2025.
//

#include "DirectoryCleanup.h"

#include <random>

void DirectoryCleanup::CreateTestFolders(const fs::path& path,const int& amount) {
    if (fs::exists(path)) {
        DeleteTestFolders(path);
    }

    fs::create_directories(path /"test" /"test01" /"test02" /"test03" /"test04");

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> distrib(0, amount);

    for (int i = 1; i <= amount; i++) {
        std::string folderName = "test" + std::to_string(i);
        fs::create_directory(path / folderName);
    }

}

void DirectoryCleanup::DeleteTestFolders(const fs::path& path) {
    fs::remove_all(path);
}
