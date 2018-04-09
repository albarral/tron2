#ifndef __TRON2_TEST_PLOT_H
#define __TRON2_TEST_PLOT_H

/***************************************************************************
 *   Copyright (C) 2017 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/tivy/plot/Plot.h"

// Testing of a tivy plot derived class.
class TestPlot : public tron2::Plot
{
public:
    TestPlot();
     //~TestPlot();
    
    // draws a line from axes origin to given point in space
    void drawLineAndPoint(int x, int y);
};
#endif
