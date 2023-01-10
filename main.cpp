#include <iostream>
#include "Func.h"
#include "Father.h"

using namespace std;

int main() {
    cout << "Hello,1------1 11World!" << endl;
    Func func;
    func.showMessage();

    Father father;
    father.showMessageIndex();

    return 0;
}
