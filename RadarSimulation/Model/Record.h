/*
* File: Record.h
* 
* Description: Record is an abstract type for model classes to inherit for database handling
*/

#ifndef _RECORD_H_
#define _RECORD_H_

#include <vector>

namespace Model
{
    typedef unsigned long long LUID; // fake ass guid

    class Record
    {
    public:

        Record() 
        {
            
        }

        virtual ~Record() {};

        LUID GetId() const { return Id; }
        void SetId(const LUID &id) { Id = id; }

    private:
        LUID Id;
    };

    typedef std::vector<Model::Record> RecordList;
}

#endif /*_RECORD_H_*/
