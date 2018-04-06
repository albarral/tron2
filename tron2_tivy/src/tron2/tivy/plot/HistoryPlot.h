#ifndef __TRON2_TIVY_HISTORYPLOT_H
#define __TRON2_TIVY_HISTORYPLOT_H

/***************************************************************************
 *   Copyright (C) 2017 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <string>
#include "opencv2/core/core.hpp"    // for cv::Scalar

#include "tron2/tivy/plot/Plot.h"
#include "tron2/tivy/history/History.h"
#include "tron2/tivy/history/History2D.h"

namespace tron2 
{
// Class used to plot the historic evolution of a signal (for a given time span).
// Time represented by x-axis: present shown on the right, past traveling to the left.
// Derived from Plot
class HistoryPlot : public Plot
{
private:    
    cv::Scalar color1;      // color of signal 1
    cv::Scalar color2;      // color of signal 2
    // params
    int timeSpan;   // represented time span (ms)
    int signalRange;    // represented signal range

public:
    HistoryPlot();
     //~HistoryPlot();

    // sets params
    void setParams(int timeSpan, int signalRange);
    // configure plot (defines window size and name)
    void configDraw(std::string name, int w, int h);
    
    // draw the given history
    void drawHistory(History& oHistory);
    // draw the given 2D history
    void draw2DHistory(History2D& oHistory2D);
};
}    
#endif
