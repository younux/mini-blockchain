#include <iostream>
#include "blockchain.hpp"

using namespace std;

int main()
{
    uint32_t difficulty = 1;
    Blockchain blockchain = Blockchain(difficulty);

    cout << "Mining block 1 ...." << endl;
    blockchain.AddBlock(Block(1, "Block 1 data"));

    cout << "Mining block 2 ...." << endl;
    blockchain.AddBlock(Block(2, "Block 2 data"));

    cout << "Mining block 3 ...." << endl;
    blockchain.AddBlock(Block(3, "Block 2 data"));

    return 0;
}
