#ifndef BLOCK_HPP
#define BLOCK_HPP

#include <cstdint>
#include <iostream>
#include <string.h>
#include <time.h>

class Block{
public :
    Block(uint32_t index, const std::string &data);

    void MineBlock(uint32_t difficulty);

    std::string GetHash();

    std::string prevHash;

private:
    uint32_t _index;
    int64_t _nonce;
    std::string _data;
    std::string _hash;
    time_t _time;

};



#endif // BLOCK_HPP
