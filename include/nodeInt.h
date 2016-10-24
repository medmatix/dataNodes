#ifndef NODEINT_H
#define NODEINT_H

#include <node.h>


class nodeInt : public node
{
    public:
        /** Default constructor */
        nodeInt();
        /** Default destructor */
        virtual ~nodeInt();

        /** Access nodeData
         * \return The current value of nodeData
         */
        void* GetnodeData() { return nodeData; }
        /** Set nodeData
         * \param val New value to set
         */

        void SetnodeData(void* val) {
            nodeData = val;
            nIntData = static_cast<vector<int>* >( nodeData);
            vIntData = *nIntData;
        }

        void serialize();
        void display();
        string tostring();

    protected:

    private:
        vector<int>* nIntData; //!< Member variable "nodeData"
        void* nodeData;
        vector<int> vIntData;
};

#endif // NODEINT_H
