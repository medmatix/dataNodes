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

using namespace std;

/** Unit test module for all node types */
int main() {

    cout << "   . . . blank functions tests done" << endl << endl;

    nodeInt* nInt = new nodeInt();  // !! remember 'new' returns a pointer !!!!!!

    cout << "  built nodeInt n  " << endl;
    return 0;

}

