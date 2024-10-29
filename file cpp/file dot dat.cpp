#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream file("example.dat", std::ios::binary);
    
    if (!file) {
        std::cerr << "File tidak bisa dibuka!" << std::endl;
        return 1;
    }

    std::string data;
    while (file >> data) {
        std::cout << data << std::endl;
    }

    file.close();
    return 0;
}
