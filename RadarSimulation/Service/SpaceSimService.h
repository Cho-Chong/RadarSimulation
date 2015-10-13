/*
* File: SpaceSimService.h
*
* Description: Observes setting for simulation and transmit signal accordingly. Takes care of how radar moves
*
*/

#ifndef SPACESIMSERVICE_H
#define SPACESIMSERVICE_H

#include "ISimService.h"
#include "TransmitService.h"
#include "Space.h"
#include "Position.h"
#include <map>

namespace Service
{
    typedef std::map<Model::Position, double> PosToRCSType;

    class SpaceSimService : public Interface::ISimService
    {
    public:
        SpaceSimService();
        virtual ~SpaceSimService();

        virtual void Initialize();

        virtual void Execute();
    private:
        double CalcRCS(const Model::Position &position);
        bool IsRadarCollision(const Model::Position &position);
        void CalcRadarEnergy(const Model::Position &position);

        //TODO: belongs somewhere else
        static const int MAX_X = 50;
        static const int MAX_Y = 50;

        //Each point in space maps to a value of Radar Cross Section
        PosToRCSType PosToRCSMap;

        //TODO: needs to know target and enviornment shape

    };

}

#endif /*SPACESIMSERVICE_H*/
