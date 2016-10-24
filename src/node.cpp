/** \file
 * \page Node
 *
 * Source Files:
 *
 * *Node.cxx*
 *
 * (see also *RDataframe*, *csvToStrArray.cpp*, *Category.cpp* and *main.cpp*.)
 *
 * ##A Node Class to contain a variable
 *
 * @author David York
 * @date Sunday September 18, 2016
 * @version 0.8
 *
 * @brief This creates a Node class to contain the data and meta-data of a
 *  variable. The Variable Nodes ultimately formpart of the Dataframe class
 *  which is simply a vector of Nodes.
 *
 *  It's data, is implemented as a pointer to a vector containing the data.
 *
 *  In an Abstract sense, the Nodes are the variables, as contained for example
 *  in a vector of Nodes which is the Dataframe structure.
 *  The meta-data defines the variable fully and a void* pointer to a vector<any>
 *  containing the observation data of the#include "dataframe.cpp" variable.
 *
 *  Class methods allow maintenance and manipulation of the variable it's data
 *  as to variable name, variable (data) type variable id (or position) within
 *  any containing structure and the observation data itself.
 *
 * &copy; 2016 David York
 */


#include "node.h"




node::node()
{
    //ctor
}

node::~node()
{
    //dtor
}

node::node(string nId)
{
    //ctor
}

node::node(string nId, int nPosNumber)
{
    //ctor
}

void node::serialize()
{
    //serialize node object
}

void node::display()
{
    //display node to stdout
}

string node::tostring()
{
    //output node as (continuous) string stream
    string nodeStr = "";
    return nodeStr;
}
