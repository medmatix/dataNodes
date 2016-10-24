#ifndef NODEDBL_H
#define NODEDBL_H

#include <node.h>


class nodeDbl : public node
{
    public:
        /** Default constructor */
        nodeDbl();
        /** Default destructor */
        virtual ~nodeDbl();

        /** Access nodeData
         * \return The current value of nodeData
         */
        void* GetnodeData() { return nodeData; }
        /** Set nodeData
         * \param val New value to set
         */

        void SetnodeData(void* val) {
            nodeData = val;
            nDblData = static_cast<vector<double>* >( nodeData);
            vDblData = *nDblData;
        }

        void serialize();
        void display();
        string tostring();

    protected:

    private:
        vector<double>* nDblData; //!< Member variable "nodeData"
        void* nodeData;
        vector<double> vDblData;
};

#endif // NODEDBL_H
