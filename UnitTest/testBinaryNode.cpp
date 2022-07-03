#include "../BinaryTreeNode.hpp"
#include <iostream>

int main(int argc, char **argv)
{
    BinaryTreeNode::BinaryTreeNode<std::string, int> *testNode = new BinaryTreeNode::BinaryTreeNode<std::string, int>("test1", 2);
    std::cout << testNode->getKey() << " " << testNode->getValue() << std::endl;
    delete testNode;
    return 0;
}