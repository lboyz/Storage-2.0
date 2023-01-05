#include "Tree.h"

adrnode newnode_1301210280(infotype x){
    adrnode p = new node;
    info(p) = x;
    right(p) = nil;
    left(p) = nil;
}

adrnode findnode_1301210280(adrnode root, infotype x){
    if(root == nil){
        return nil;
    }else if(info(root) == x){
        return root;
    }else if(info(root) > x){
        return findnode_1301210280(left(root), x);
    }else{
        return findnode_1301210280(right(root), x);
    }
}

void insertnode_1301210280(adrnode &root, adrnode p){
    if(root == nil){
        root = p;
    }else if(info(p) < info(root)){
        insertnode_1301210280(left(root), p);
    }else{
        insertnode_1301210280(right(root), p);
    }
}

void printpreorder_1301210280(adrnode root){
    if(root != nil){
        cout << info(root) << " ";
        printpreorder_1301210280(left(root));
        printpreorder_1301210280(right(root));
    }
}

void printdescendant_1301210280(adrnode root, infotype x){
    if(root != nil){
        printdescendant_1301210280(left(root), x);
        if(info(root) != x){
            cout << info(root) << " ";
        }
        printdescendant_1301210280(right(root), x);
    }
}

int sumnode_1301210280(adrnode root){
    if(root == nil){
        return 0;
    }else{
        return info(root) + sumnode_1301210280(left(root)) + sumnode_1301210280(right(root));
    }
}

int countleaves_1301210280(adrnode root){
    if(root == nil){
        return 0;
    }else if(left(root) == nil && right(root) == nil){
        return 1;
    }else{
        return countleaves_1301210280(left(root)) + countleaves_1301210280(right(root));
    }
}

int heightTree_1301210280(adrnode root){
    if(root == nil){
        return -1;
    }else{
        return max(heightTree_1301210280(left(root))+1, heightTree_1301210280(right(root))+1);
    }
}

