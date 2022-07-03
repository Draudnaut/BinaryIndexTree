#pragma once
#include <string>
namespace BinaryTreeNode
{
    template <class K, class V>
    class BinaryTreeNode
    {
    private:
        K key;
        V value;
        int depth;
        BinaryTreeNode *left;
        BinaryTreeNode *right;

    public:
        BinaryTreeNode(K key, V value)
        {
            this->key = key;
            this->value = value;
            left = nullptr;
            right = nullptr;
            depth = 0;
            std::cout << "constructor constructs object." << std::endl;
        }

        ~BinaryTreeNode()
        {
            delete[] left;
            delete[] right;
            std::cout << "deconstructor destroyed object." << std::endl;
        }
        void setKey(K newkey)
        {
            key = newkey;
        }

        void setvalue(V newvalue)
        {
            value = newvalue;
        }

        K getKey()
        {
            return key;
        }

        V getValue()
        {
            return value;
        }
    };
}
