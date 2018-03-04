#include "block.hpp"
#include "sha256.hpp"
#include <sstream>

Block::Block(uint32_t index, const std::string &data): _index(index), _data(data)
{
    this->_nonce = -1;
    this->_time = time(nullptr);
}

std::string Block::GetHash(){
    return this->_hash;

}

void Block::MineBlock(uint32_t difficulty){
    char cstr[difficulty+1];
    for(int i = 0; i<difficulty; i++){
        cstr[i] = 0;
    }
    cstr[difficulty] = '\0';

    std::string str(cstr);

    do{
        this->_nonce ++;
        // std::cout << "Nonce : " << this->_nonce << std::endl;
        this->_hash = this->_CalculateHash();
    } while ((this->_hash).substr(0, difficulty) != str);

    std::cout << "Block mined - Hash : " << this->_hash << " - Nonce : " << this->_nonce << std::endl;

}

std::string Block::_CalculateHash() const{
    std::stringstream ss;
    ss << _index << _time << _data << _nonce << prevHash;
    return(sha256(ss.str()));
}
