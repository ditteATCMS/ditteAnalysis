#if !defined(ditteCycleNew_H) && !defined(__CINT__)
#define ditteCycleNew_H

#include "SFrameTools/include/AnalysisModule.h"
#include <memory>

/**
 *   @short ditte of an analysis cycle, new version using AnalysisModule
 */
class ditteCycleNew : public AnalysisModule {
public:
    
    virtual void begin_dataset(Context & ctx);
    virtual void process(EventCalc & event, Context & ctx);

private:
   
    // declare a vector for storing all modules doing some work with EventCalc:
    boost::ptr_vector<AndSelection> selection_modules;
    
    // store the Hists collection as member variables for now:
    std::auto_ptr<Hists> h_nocuts, h_btag, h_nobtag, h_topsel;
    
    // demonstrate how to write additional data to the output event tree:
    int event_intdata;
    Jet event_jetdata;
    
    // example for additional TTrees in the output:
    double tree2_double;
    Jet tree2_jet;
    
    bool read_example_data;
    int event_intdata_in;
    Jet event_jetdata_in;
};

#endif

