//
// Created by muham on 2025-03-27.
//

#ifndef HUFFMANTREE_H
#define HUFFMANTREE_H

#include <string>
#include <map>
#include <queue>


// HuffmanNode structure to store character data and tree linkages
struct HuffmanTree {
    char character;
    int frequency;
    HuffmanNode* left;
    HuffmanNode* right;

    HuffmanNode(char ch, int freq)
        : character(ch), frequency(freq), left(nullptr), right(nullptr) {}

    HuffmanNode(int freq)
        : character('\0'), frequency(freq), left(nullptr), right(nullptr) {}
};




};



#endif //HUFFMANTREE_H
