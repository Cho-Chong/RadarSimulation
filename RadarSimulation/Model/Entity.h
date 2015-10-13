/*
* File: Entity.h
*
* Description: An entity is a physical object in space. It HAS A position
*
*/

#ifndef ENTITY_H_
#define ENTITY_H_

#include "Record.h"
#include "Position.h"


namespace Model
{
    class Entity : public Record
    {
    public:
        Entity();
        virtual ~Entity();

    private:
        LUID PositionId;
        Model::Position* Position;

    };
}

#endif /*ENTITY_H_*/
