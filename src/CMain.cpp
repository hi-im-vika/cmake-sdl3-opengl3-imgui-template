/**
 * CMain.cpp - new file
 * 2025-03-20
 * vika <https://github.com/hi-im-vika>
 */

#include "../include/CMain.hpp"

CMain::CMain() {
    _text = "Hello world!";
    _count = 0;
}

CMain::~CMain() = default;

void CMain::update() {
    _count++;
}

void CMain::draw() {
    std::cout << _text << std::endl;
    std::cout << "Current count: " << _count << std::endl;
    std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::milliseconds(1000));
}

int main(int argc, char *argv[]) {
    CMain c = CMain();
    c.run();
    return 0;
}