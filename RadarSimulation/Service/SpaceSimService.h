/*
* File: SpaceSimService.h
*
* Description: Observes setting for simulation and transmit signal accordingly
*
*/

#ifndef _SPACESIMSERVICE_H_
#define _SPACESIMSERVICE_H_

#include "ISimService.h"
#include "Transmitter.h"

namespace Service
{
    class SpaceSimService : public Interface::ISimService
    {
    public:
        SpaceSimService();
        virtual ~SpaceSimService();

        virtual void Initialize();

        virtual void Execute();
    private:
    };

    //TODO: move to cpp

    void SpaceSimService::Initialize()
    {

    }

    void SpaceSimService::Execute()
    {
        // Get signal strength at range 0
        // simulate targets, clutters
        // calcualte radar power return- simulate multipath
        // output radar power at various ranges
    }
}

#endif /*_SPACESIMSERVICE_H_*/
