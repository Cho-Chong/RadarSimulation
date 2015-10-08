/*
* File: IStore.h
*
* Description: Interface to interact with the database
*
*/

#ifndef _ISTORE_H_
#define _ISTORE_H_

#include "Record.h"

namespace Interface
{
    class IStore
    {
    public:

        virtual ~IStore() {};

        //TODO: should I use IRepo pattern or is it too much?

        virtual void Open() = 0;

        virtual void Close() = 0;

        virtual void Add(Model::Record record) = 0;

        virtual void Delete(Model::Record record) = 0;

        virtual void Update(Model::Record record) = 0;

        virtual void AddMany(const Model::RecordList& records) = 0;

        virtual void DeleteMany(const Model::RecordList& records) = 0;

        virtual void UpdateMany(const Model::RecordList& records) = 0;
        
        //TODO: add eventhandlers


    };
}

#endif /*_ISTORE_H_*/
