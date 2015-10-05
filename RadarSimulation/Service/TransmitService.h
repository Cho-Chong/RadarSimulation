/*
* File: TransmitService.h
*
* Description: Observes setting for simulation and transmit signal accordingly
*
*/

#ifndef _TRANSMITSERVICE_H_
#define _TRANSMITSERVICE_H_

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

    //TODO: move to cpp

    void TransmitService::Initialize()
    {

    }

    void TransmitService::Execute()
    {
        // Get Transmitter from db
        // Simulate fluctuations
        // Output Transmit Signal
    }
}

#endif /*_TRANSMITSERVICE_H_*/
