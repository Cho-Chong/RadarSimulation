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
        Record() {}
        virtual ~Record() = 0;
    };
}

#endif /*_RECORD_H_*/
