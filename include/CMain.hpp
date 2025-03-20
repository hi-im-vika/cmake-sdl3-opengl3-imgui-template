/**
 * CMain.hpp - new file
 * 2025-03-20
 * vika <https://github.com/hi-im-vika>
 */

#pragma once

#include <iostream>

#include "CBase.hpp"

class CMain : public CBase {
private:
    std::string _text;
    uint _count;

public:
    CMain();
    ~CMain();

    void update() override;
    void draw() override;
};