#ifndef NODE_H
#define NODE_H

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

using namespace std;

class node
{
    public:
        /** Default constructor */
        node();
        /** Default destructor */
        virtual ~node();

        /** */
        node(string nId);

        /** */
        node(string nId, int nPosNumber);

        /** Access nodeId
         * \return The current value of nodeId
         */
        string GetnodeId() { return nodeId; }
        /** Set nodeId
         * \param val New value to set
         */
        void SetnodeId(string val) { nodeId = val; }
        /** Access nodePosNumber
         * \return The current value of nodePosNumber
         */
        int GetnodePosNumber() { return nodePosNumber; }
        /** Set nodePosNumber
         * \param val New value to set
         */
        void SetnodePosNumber(int val) { nodePosNumber = val; }
        /** Access nodeName
         * \return The current value of nodeName
         */
        string GetnodeName() { return nodeName; }
        /** Set nodeName
         * \param val New value to set
         */
        void SetnodeName(string val) { nodeName = val; }
        /** Access nodeType
         * \return The current value of nodeType
         */
        string GetnodeType() { return nodeType; }
        /** Set nodeType
         * \param val New value to set
         */
        void SetnodeType(string val) { nodeType = val; }
        /** Access nodePrev
         * \return The current value of nodePrev
         */
        void* GetnodePrev() { return nodePrev; }
        /** Set nodePrev
         * \param val New value to set
         */
        void SetnodePrev(void* val) { nodePrev = val; }
        /** Access nodeNext
         * \return The current value of nodeNext
         */
        void* GetnodeNext() { return nodeNext; }
        /** Set nodeNext
         * \param val New value to set
         */
        void SetnodeNext(void* val) { nodeNext = val; }
        /** Access nodeData
         * \return The current value of nodeData
         */
        void* GetnodeData() { return nodeData; }
        /** Set nodeData
         * \param val New value to set
         */
        void SetnodeData(void* val) { nodeData = val; }

        void serialize();
        void display();
        string tostring();

    protected:

    private:
        string nodeId; //!< Member variable "nodeId"
        int nodePosNumber; //!< Member variable "nodePosNumber"
        string nodeName; //!< Member variable "nodeName"
        string nodeType; //!< Member variable "nodeType"
        void* nodePrev; //!< Member variable "nodePrev"
        void* nodeNext; //!< Member variable "nodeNext"
        void* nodeData; //!< Member variable "nodeData"
};

#endif // NODE_H
