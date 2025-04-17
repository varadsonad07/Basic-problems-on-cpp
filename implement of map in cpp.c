// implement of map in cpp

#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> rc;

    rc[1] = "varad";
    rc[2] = "keshav";
    rc[3] = "pranav";
    rc[4] = "rohan";

    map<int, string>::iterator it;
    for (it = rc.begin(); it != rc.end(); ++it) {
        cout << it->first << " -> " << it->second << endl;
    }

    return 0;
}
