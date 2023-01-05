#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED

#include <iostream>
using namespace std;

#define info(p) (p)->info
#define right(p) (p)->right
#define left(p) (p)->left
#define nil NULL

typedef int infotype;
typedef struct node *adrnode;

struct node{
    infotype info;
    adrnode right;
    adrnode left;
};

adrnode newnode_1301210280(infotype x);
adrnode findnode_1301210280(adrnode root, infotype x);
void insertnode_1301210280(adrnode &root, adrnode p);
void printpreorder_1301210280(adrnode root);
void printdescendant_1301210280(adrnode root, infotype x);
int sumnode_1301210280(adrnode root);
int countleaves_1301210280(adrnode root);
int heightTree_1301210280(adrnode root);

#endif // TREE_H_INCLUDED
