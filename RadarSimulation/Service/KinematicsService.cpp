/*
* File: KinematicsService.h
*
* Description: Takes care of how the physical objects will move
*
*/

#ifndef KINEMATICSSERVICE_H
#define KINEMATICSSERVICE_H

#include "ISimService.h"
#include "Position.h"

namespace Service
{
    class KinematicsService : public Interface::ISimService
    {
    public:
        KinematicsService();
        virtual ~KinematicsService();

        virtual void Initialize();

        virtual void Execute();
        
    private:
        void CalcVelocity(const Model::Position &position);
        void CalcNextPosition(const Model::Position &position);
    };
}

#endif /*KINEMATICSSERVICE_H*/