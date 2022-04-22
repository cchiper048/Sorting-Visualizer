#include "src/Merge.h"

using namespace std;

int main() {
    vector<int> arr = {5,3,10,12,19,14,15,17,9,1,7,11,13,20,6,2,18,8,16,4};

    Merge merge(arr);
    merge.Sort();
    merge.printArr();

    return 0;
}
