/*
* File: ISimService.h
*
* Description: Data Processing for received signals. Will determine system state
*
*/

#ifndef _ISIMSERVICE_H_
#define _ISIMSERVICE_H_

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

#endif /*_ISIMSERVICE_H_*/

