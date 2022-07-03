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

    public:
        BinaryTreeNode(K key, V value)
        {
            this->key = key;
            this->value = value;
        }

        void setKey(K newkey){
            key = newkey;
        }

        void setvalue(V newvalue){
            value = newvalue;
        }
    };
}
