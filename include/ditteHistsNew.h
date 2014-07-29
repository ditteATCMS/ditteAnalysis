#ifndef ditteHistsNew_H
#define ditteHistsNew_H

#include "SFrameTools/include/AnalysisModule.h"

/**
 *   ditte class for booking and filling histograms, the new version using AnalysisModule mechanisms.
 */

class ditteHistsNew: public Hists {
public:
    // use the same constructor arguments as Hists for forwarding:
    ditteHistsNew(Context & ctx, const string & dirname);

    virtual void fill(EventCalc & ev);
};


#endif
