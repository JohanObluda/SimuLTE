//
//                           SimuLTE
//
// This file is part of a software released under the license included in file
// "license.pdf". This license can be also found at http://www.ltesimulator.com/
// The above file and the present reference are part of the software itself,
// and cannot be removed from it.
//

#ifndef _LTE_LTE_SCHEDULER_ENB_DL_H_
#define _LTE_LTE_SCHEDULER_ENB_DL_H_

#include "stack/mac/scheduler/LteSchedulerEnb.h"
#include "common/LteCommon.h"
#include "stack/mac/amc/LteAmc.h"
#include "stack/mac/amc/UserTxParams.h"

/**
 * @class LteSchedulerEnbDl
 *
 * LTE eNB downlink scheduler.
 */
class LteSchedulerEnbDl : public LteSchedulerEnb
{
    // XXX debug: to call grant from mac
    friend class LteMacEnb;

  protected:

    //---------------------------------------------

    /**
     * Checks Harq Descriptors and return the first free codeword.
     *
     * @param id
     * @param cw
     * @return
     */
    bool checkEligibility(MacNodeId id, Codeword& cw);

  public:

    /**
     * Default Constructor.
     */
    LteSchedulerEnbDl()
    {
    }

  protected:
    /**
     * Updates current schedule list with HARQ retransmissions.
     * @return TRUE if OFDM space is exhausted.
     */
    virtual bool rtxschedule();

    /**
     * Schedules retransmission for the Harq Process of the given UE on a set of logical bands.
     * Each band has also assigned a band limit amount of bytes: no more than the specified
     * amount will be served on the given band for the acid.
     *
     * @param nodeId The node ID
     * @param cw The codeword used to serve the acid process
     * @param bands A vector of logical bands
     * @param acid The ACID
     * @return The allocated bytes. 0 if retransmission was not possible
     */
    virtual unsigned int schedulePerAcidRtx(MacNodeId nodeId, Codeword cw, unsigned char acid,
        std::vector<BandLimit>* bandLim = nullptr, Remote antenna = MACRO, bool limitBl = false);

    bool getBandLimit(std::vector<BandLimit>* bandLimit, MacNodeId ueId);

};

#endif // _LTE_LTE_SCHEDULER_ENB_DL_H_
