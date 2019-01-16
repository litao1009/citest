#include "gtest/gtest.h"

#include <filesystem>
#include <iostream>

TEST(S1, C1)
{
    std::cout << std::filesystem::current_path();
}