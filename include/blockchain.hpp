#ifndef BLOCKCHAIN_HPP
#define BLOCKCHAIN_HPP


#include <cstdint>
#include <vector>
#include <block.hpp>


class Blockchain{
public:
    Blockchain();

    void AddBlock(Block newBlock);

private:
    uint32_t _difficulty;
    std::vector<Block> _chain;

    Block GetLastBlock() const;
};


#endif // BLOCKCHAIN_HPP
