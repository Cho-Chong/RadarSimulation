/*
* File: ISimService.h
*
* Description: Data Processing for received signals. Will determine system state
*
*/

#ifndef ISIMSERVICE_H
#define ISIMSERVICE_H

namespace Interface
{
    class ISimService
    {
    public:
        virtual ~ISimService() {}

        virtual void Initialize() = 0;

        virtual void Execute() = 0;
    private:
    };
}

#endif /*ISIMSERVICE_H*/

