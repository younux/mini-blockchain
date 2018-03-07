#include <iostream>
#include "blockchain.hpp"

using namespace std;

int main()
{
    uint32_t difficulty = 6;

    Blockchain blockchain = Blockchain(difficulty);

    cout << "Blockchain created with difficulty : "<< difficulty << endl;

    cout << "Creating block 1 with 1 transaction ..." << endl;
    Block block1 = Block();
    block1.NewTransaction("Omar", "Redouane", 10);

    cout << "Mining block 1 ...." << endl;
    blockchain.NewBlock(block1);

    cout << "Creating block 2 with 4 transactions ..." << endl;
    Block block2 = Block();
    block2.NewTransaction("Pape", "Julien", 100);
    block2.NewTransaction("Hummer", "Mercedes", 20.5);
    block2.NewTransaction("Francois", "Jones", 30.5);
    block2.NewTransaction("Karim", "Alain", 300);

    cout << "Mining block 2 ...." << endl;
    blockchain.NewBlock(block2);

    cout << "Creating block 3 with 10 transactions ..." << endl;
    Block block3 = Block();
    block3.NewTransaction("Younes", "Taoufik", 100);
    block3.NewTransaction("Paris Saint Germain", "Real Madrid", 200);
    block3.NewTransaction("Bayern", "Liverpool", 300);
    block3.NewTransaction("Jean", "Alex", 20.55);
    block3.NewTransaction("toto", "papo", 35.8);
    block3.NewTransaction("Enstein", "Euler", 200);
    block3.NewTransaction("Gauss", "Ronaldo", 300);
    block3.NewTransaction("Messi", "Ribery", 300);
    block3.NewTransaction("Matin", "Martin", 300);
    block3.NewTransaction("Daniel", "Pierre", 300);

    cout << "Mining block 3 ...." << endl;
    blockchain.NewBlock(block3);

    return 0;
}
