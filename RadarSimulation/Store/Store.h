/*
* File: Store.h
*
* Description: Interface to interact with the database
*
*/

#ifndef _STORE_H_
#define _STORE_H_

#include "IStore.h"
#include <map>

//TODO: local file based store or in-memory?
namespace Store
{
    class Store : public Interface::IStore
    {
    public:
        typedef std::map<Model::LUID, Model::Record> RecordMap;

        Store();
        virtual ~Store();

        virtual void Open();

        virtual void Close();

        virtual void Add(const Model::Record& record);

        virtual void Delete(const Model::Record& record);

        virtual void Update(const Model::Record& record);

        virtual void AddMany(const Model::RecordList& records);

        virtual void DeleteMany(const Model::RecordList& records);

        virtual void UpdateMany(const Model::RecordList& records);

    private:
        // TODO: need to make an actual cache...
        RecordMap Cache; // a unique map of records based on Id
    };
}

#endif /*_STORE_H_*/
