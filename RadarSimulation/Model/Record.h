/*
* File: Record.h
* 
* Description: Record is an abstract type for model classes to inherit for database handling
*/

#ifndef _RECORD_H_
#define _RECORD_H_

namespace Model
{
    class Record
    {
    public:
        typedef unsigned long long LUID; // fake ass guid

        Record() 
        {
            // Make unique Id...
        }

        virtual ~Record() {};

        LUID GetId() const { return Id; }
        void SetId(const LUID &id) { Id = id; }

    private:
        LUID Id;
    };
}

#endif /*_RECORD_H_*/
