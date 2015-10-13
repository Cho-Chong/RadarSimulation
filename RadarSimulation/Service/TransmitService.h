/*
* File: TransmitService.h
*
* Description: Observes setting for simulation and transmit signal accordingly
*
*/

#ifndef TRANSMITSERVICE_H
#define TRANSMITSERVICE_H

#include "ISimService.h"
#include "Transmitter.h"

namespace Service
{
    class TransmitService : public Interface::ISimService
    {
    public:
        TransmitService();
        virtual ~TransmitService();

        virtual void Initialize();

        virtual void Execute();
    private:
    };

}

#endif /*TRANSMITSERVICE_H*/
