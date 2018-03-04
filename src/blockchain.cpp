#include "blockchain.hpp"


Blockchain::Blockchain(uint32_t difficulty): _difficulty(difficulty){
    _chain.emplace_back(Block(0, "Genesis block"));
}

void Blockchain::AddBlock(Block newBlock){
    newBlock.prevHash = this->GetLastBlock().GetHash();
    newBlock.MineBlock(_difficulty);
    this->_chain.push_back(newBlock);
}

Block Blockchain::GetLastBlock() const{
    return this->_chain.back();
}


