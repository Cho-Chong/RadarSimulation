/*
* File: ModelingService.h
*
* Description: Puts together the radar model
*
*/

#ifndef _MODELINGSERVICE_H_
#define _MODELINGSERVICE_H_

#include "ISimService.h"
#include "Transmitter.h"

namespace Service
{
    class ModelingService
    {
    public:
        ModelingService();
        virtual ~ModelingService();

        virtual void CreateRadarModel();
    private:
    };

}

#endif /*_MODELINGSERVICE_H_*/
