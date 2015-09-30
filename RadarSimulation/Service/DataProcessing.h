/*
* File: DataProcessing.h
*
* Description: Data Processing for received signals. Will determine system state
*
*/

#ifndef _DATAPROCESSING_H_
#define _DATAPROCESSING_H_

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

#endif /*_DATAPROCESSING_H_*/
