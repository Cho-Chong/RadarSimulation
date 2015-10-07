/*
* File: SpaceSimService.h
*
* Description: Observes setting for simulation and transmit signal accordingly
*
*/

#ifndef _SPACESIMSERVICE_H_
#define _SPACESIMSERVICE_H_

#include "ISimService.h"
#include "TransmitService.h"

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
        //TODO: needs to know target and enviornment shape
        //Each point in space maps to a value of Radar Cross Section
    };

}

#endif /*_SPACESIMSERVICE_H_*/
