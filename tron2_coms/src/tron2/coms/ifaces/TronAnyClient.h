#ifndef __TRON2_COMS_IANYCLIENT_H
#define __TRON2_COMS_IANYCLIENT_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

namespace tron2
{
// Interface class for any robot client
class TronAnyClient
{        
 public:     
    // full stop of control actions 
    virtual bool fullStop() = 0;
    // end control process
    virtual bool endNode() = 0;        

};
}
#endif
