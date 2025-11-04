//
// Created by niggerlas on 04/11/2025.
//

#ifndef DIRECTORYCLEANUP_DIRECTORYCLEANUP_H
#define DIRECTORYCLEANUP_DIRECTORYCLEANUP_H
#include <filesystem>
#include <iostream>

namespace fs = std::filesystem;

class DirectoryCleanup {

public:
    DirectoryCleanup() = default;
    explicit DirectoryCleanup(fs::path path) :
        m_targetDirectory{std::move(path)} {

    }
    ~DirectoryCleanup() = default;

    void Cleanup() const {
        if (!fs::exists(m_targetDirectory)) {
            std::cout << "Target directory does not exist" << std::endl;
            return;
        }
    }

    static void Cleanup(const fs::path& path) {

    }

    static void CreateTestFolders(const fs::path& path,const int& amount);

    static void DeleteTestFolders(const fs::path& path);

private:
    fs::path m_targetDirectory;

};


#endif //DIRECTORYCLEANUP_DIRECTORYCLEANUP_H