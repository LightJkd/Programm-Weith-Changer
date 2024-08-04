#include <iostream>
#include <fstream>
#include <string>
#include <chrono>
#include <thread>

void increaseWeight(const std::string& filePath, int kbToAdd) {
    std::ifstream fileIn(filePath, std::ios::binary);
    if (!fileIn.is_open()) {
        std::cout << "Error opening file!" << std::endl;
        return;
    }

    std::ofstream fileOut(filePath, std::ios::binary | std::ios::app);
    if (!fileOut.is_open()) {
        std::cout << "Error opening file for writing!" << std::endl;
        return;
    }

    fileIn.seekg(0, std::ios::end);
    int fileSize = fileIn.tellg();

    for (int i = 0; i < kbToAdd * 1024; ++i) {
        fileOut.put(0);
    }

    std::cout << "File weight increased by " << kbToAdd << " KB" << std::endl;
}

void Animete(const std::string& text, int delayMs) {
    for (char c : text) {
        std::cout << c << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(delayMs));
    }
}

int main() {
    std::string filePath;
    std::string demo =
    "  ____                   _   \n"
    " / ___| ___   ___   __ _| |_ \n"
    "| |  _ / _ \\ / _ \\ / _` | __|\n"
    "| |_| | (_) | (_) | (_| | |_ \n"
    " \\____|\\___/ \\___/ \\__,_|\\__|\n"
    
    "Author: Light\n\n";
    
    Animete(demo, 6);
    
    std::cout << "Enter the path to the file: ";
    std::getline(std::cin, filePath);

    int kbChange;
    std::cout << "Enter the number of kilobytes to change: ";
    std::cin >> kbChange;

    increaseWeight(filePath, kbChange);

    return 0;
}
