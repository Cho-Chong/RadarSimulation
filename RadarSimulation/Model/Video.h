/*
* File: Video.h
*
* Description: Video is the raw signal processed by the receiver
*
*/

#ifndef _VIDEO_H_
#define _VIDEO_H_

#include "Record.h"

namespace Model
{
    class Video : public Record
    {
    public:
        Video() {}
        virtual ~Video() {};

    private:
        static const int MAX_VIDEO_LENGTH = 128;
        double levelVolt[MAX_VIDEO_LENGTH];
    };
}

#endif /*_VIDEO_H_*/
