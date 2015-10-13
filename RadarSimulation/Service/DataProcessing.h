/*
* File: DataProcessing.h
*
* Description: Data Processing for received signals. Will determine system state
*
*/

#ifndef DATAPROCESSING_H
#define DATAPROCESSING_H

#include "Video.h"

namespace Service
{
    class DataProcessing
    {
    public:
        DataProcessing();
        virtual ~DataProcessing();

        void ProcessVideo(const Model::Video &video) const;

    private:
    };
}

#endif /*DATAPROCESSING_H*/
