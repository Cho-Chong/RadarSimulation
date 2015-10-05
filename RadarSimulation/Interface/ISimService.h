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
        ISimService();
        virtual ~ISimService();
        virtual void Initialize();
        virtual void Execute();
    private:
    };
}

#endif /*_ISIMSERVICE_H_*/

