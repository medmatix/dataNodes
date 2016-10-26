#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <iostream>
#include <ostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <tuple>
#include <algorithm>
#include <typeinfo>
#include <cxxabi.h>
#include <array>
#include <initializer_list>
#include <boost/any.hpp>
#include <node.h>
#include <nodeInt.h>
#include <nodeDbl.h>
#include <nodeStr.h>
#include <nodeCat.h>

using namespace std;

/** Unit test module for all node types */
int main() {

    cout << "   . . . blank functions tests done" << endl << endl;

    nodeInt* nInt = new nodeInt();  // !! remember 'new' returns a pointer !!!!!!

    cout << "  built nodeInt nInt  " << endl;

    nodeDbl* nDbl = new nodeDbl();  // !! remember 'new' returns a pointer !!!!!!

    cout << "  built nodeDbl nDbl  " << endl;

    nodeStr* nStr = new nodeStr();  // !! remember 'new' returns a pointer !!!!!!

    cout << "  built nodeStr nStr  " << endl;

    nodeCat* nCat = new nodeCat();  // !! remember 'new' returns a pointer !!!!!!

    cout << "  built nodeCat nCat  " << endl;

    return 0;

}

