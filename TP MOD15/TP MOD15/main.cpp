#include <iostream>
#include "Tree.h"

using namespace std;

int main()
{
    cout<<" ================================================================================= "<<endl;
    int x[9] = {5,3,9,10,4,7,1,8,6};
    int i = 0;

    while(i<9){
        cout<<" "<<x[i];
        i++;
    }

    i = 0;
    adrnode p;
    adrnode root = nil;

    while(i<9){
        p = newnode_1301210280(x[i]);
        insertnode_1301210280(root, p);
        i++;
    }

    printf(" \n ");
    printf(" \n Pre Order\t\t: ");
    printpreorder_1301210280(root);

    printf(" \n ");
    printf(" \n Descendent of Node 9\t: ");
    p = findnode_1301210280(root, 9);
    printdescendant_1301210280(p,9);

    printf(" \n ");
    printf(" \n Sum of BST Info\t: ");
    cout<<sumnode_1301210280(root);

    printf(" \n Number of Leaves\t: ");
    cout<<countleaves_1301210280(root);

    printf(" \n Height of Tree\t\t: ");
    cout<<heightTree_1301210280(root)<<endl;

    cout<<" ================================================================================= "<<endl;

    return 0;
}
