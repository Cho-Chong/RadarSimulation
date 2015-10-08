#include "Store.h"

namespace Store
{
    Store::Store()
    {

    }

    Store::~Store()
    {
        Close();
    }

    void Store::Open()
    {

    }

    void Store::Close()
    {
        Cache.clear();
    }

    void Store::Add(const Model::Record &record)
    {
        if (Cache.find(record.GetId()) != Cache.end())
        {
            Cache[record.GetId()] = record;
        }
    }

    void Store::Delete(const Model::Record &record)
    {
        if (Cache.find(record.GetId()) != Cache.end())
        {
            Cache.erase(record.GetId());
        }
    }

    void Store::Update(const Model::Record& record)
    {
        if (Cache.find(record.GetId()) != Cache.end())
        {
            Cache[record.GetId()] = record;
        }
    }

    void Store::AddMany(const Model::RecordList& records)
    {
        for (auto record : records)
        {
            Add(record);
        }
    }

    void Store::DeleteMany(const Model::RecordList& records)
    {
        for (auto record : records)
        {
            Delete(record);
        }
    }

    void Store::UpdateMany(const Model::RecordList& records)
    {
        for (auto record : records)
        {
            Update(record);
        }
    }

}
