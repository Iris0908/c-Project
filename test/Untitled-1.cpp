#include <iostream>
#include <boost/dynamic_bitset.hpp>

int main()
{
    boost::dynamic_bitset<> db(std::string("01010111"));
    std::cout << "hello word " << db << std::endl;
    return 0;
}