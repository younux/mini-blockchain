#ifndef BLOCK_HPP
#define BLOCK_HPP

#include <cstdint>
#include <iostream>
#include <string.h>
#include <ctime>

class Block{
public :
    std::string prevHash;

    Block(uint32_t index, const std::string &data);

    std::string GetHash();
    void MineBlock(uint32_t difficulty);


private:
    uint32_t _index;
    int64_t _nonce;
    std::string _data;
    std::string _hash;
    time_t _time;


    std::string _CalculateHash() const;

};



#endif // BLOCK_HPP
