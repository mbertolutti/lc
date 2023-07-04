// lc1108.cpp 'Defanging an IP Address', mt19337, chrono, mod256, ipaddress, substr;

#include <fmt/core.h>
#include <algorithm>
#include <cstdint>
#include <chrono>
#include <random>
#include <string>

std::uint16_t my_mt19937(uint16_t my_mod)
{
    std::mt19937 gen32 = std::mt19937(std::chrono::steady_clock::now().time_since_epoch().count());
    return std::uint16_t(gen32() % my_mod);
}

std::string my_solution(std::string &address)
{
    std::string result;
    std::string token;

    size_t pos = 0;
    while ((pos = address.find(".")) != std::string::npos)
    {
        token = address.substr(0, pos);
        address.erase(0, pos + 1);
        result += token + "[.]";
    }
    result += address;

    return result;
}

int main()
{
    constexpr uint16_t my_mod = 256;
    auto address = fmt::format("{}.{}.{}.{}",my_mt19937(my_mod) ,my_mt19937(my_mod) ,my_mt19937(my_mod) ,my_mt19937(my_mod));
    fmt::print("{}", address);
    fmt::print(" -> ");
    fmt::print("{}\n", my_solution(address));
}
