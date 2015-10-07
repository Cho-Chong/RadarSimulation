#include "Store.h"
#include <functional>

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

    void Store::TestLambda(const Model::Record &record, std::function<void(const Model::Record)> test)
    {
        RecordMap::const_iterator it = Cache.find(record.GetId());

        if (it != Cache.end())
        {
            test(record);
        }
    }

    void Store::Add(const Model::Record &record)
    {
        auto add_func = [](auto x)
        {
            Cache[record.GetId()] = record;
        };

        TestLambda(record, add_func);
    }

    void Store::Delete(const Model::Record &record)
    {
        
    }

    void Store::Update(Model::Record record)
    {

    }

    void Store::AddMany(RecordList record)
    {
    }

    void Store::DeleteMany(RecordList record)
    {

    }

    void Store::UpdateMany(RecordList record)
    {

    }

}
