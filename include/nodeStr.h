#ifndef NODESTR_H
#define NODESTR_H

#include <node.h>


class nodeStr : public node
{
    public:
        /** Default constructor */
        nodeStr();
        /** Default destructor */
        virtual ~nodeStr();

        /** Access nodeData
         * \return The current value of nodeData
         */
        void* GetnodeData() { return nodeData; }
        /** Set nodeData
         * \param val New value to set
         */

        void SetnodeData(void* val) {
            nodeData = val;
            nStrData = static_cast<vector<string>* >( nodeData);
            vStrData = *nStrData;
        }

        void serialize();
        void display();
        string tostring();

    protected:

    private:
        vector<string>* nStrData; //!< Member variable "nodeData"
        void* nodeData;
        vector<string> vStrData;
};

#endif // NODESTR_H
