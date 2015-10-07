/*
* File: IStore.h
*
* Description: Interface to interact with the database
*
*/

#ifndef _ISTORE_H_
#define _ISTORE_H_

#include "Record.h"
#include <vector>

namespace Interface
{

    class IStore
    {
    public:
        typedef std::vector<Model::Record> RecordList;

        virtual ~IStore() {};

        //TODO: should I use IRepo pattern or is it too much?

        virtual void Open() = 0;

        virtual void Close() = 0;

        virtual void Add(Model::Record record) = 0;

        virtual void Delete(Model::Record record) = 0;

        virtual void Update(Model::Record record) = 0;

        virtual void AddMany(RecordList record) = 0;

        virtual void DeleteMany(RecordList record) = 0;

        virtual void UpdateMany(RecordList record) = 0;
        
        //TODO: add eventhandlers


    };
}

#endif /*_ISTORE_H_*/
