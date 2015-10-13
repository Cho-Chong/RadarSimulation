/*
* File: IStore.h
*
* Description: Interface to interact with the database
*
*/

#ifndef ISTORE_H
#define ISTORE_H

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

        virtual void Add(Model::Record &record) = 0;

        virtual void Delete(const Model::Record &record) = 0;

        virtual void Update(const Model::Record &record) = 0;

        virtual void AddMany(const Model::RecordList& records) = 0;

        virtual void DeleteMany(const Model::RecordList& records) = 0;

        virtual void UpdateMany(const Model::RecordList& records) = 0;
        
        //TODO: add eventhandlers


    };
}

#endif /*ISTORE_H*/
