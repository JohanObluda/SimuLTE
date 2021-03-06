//
// Generated file, do not edit! Created by nedtool 5.6 from stack/mac/packet/LteHarqFeedback.msg.
//

#ifndef __LTEHARQFEEDBACK_M_H
#define __LTEHARQFEEDBACK_M_H

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0506
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



/**
 * Class generated from <tt>stack/mac/packet/LteHarqFeedback.msg:11</tt> by nedtool.
 * <pre>
 * packet LteHarqFeedback
 * {
 *     // H-ARQ acid to which this fb is addressed
 *     unsigned char acid;
 *     // H-ARQ cw id to which this fb is addressed
 *     unsigned char cw;
 *     // H-ARQ feedback: true for ACK, false for NACK
 *     bool result;
 *     // Id of the pdu to which the feedback is addressed
 *     long fbMacPduId;
 *     // if this flag is true, then the feedback refers to a D2D connection
 *     bool d2dFeedback = false;
 * }
 * </pre>
 */
class LteHarqFeedback : public ::omnetpp::cPacket
{
  protected:
    unsigned char acid;
    unsigned char cw;
    bool result;
    long fbMacPduId;
    bool d2dFeedback;

  private:
    void copy(const LteHarqFeedback& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const LteHarqFeedback&);

  public:
    LteHarqFeedback(const char *name=nullptr, short kind=0);
    LteHarqFeedback(const LteHarqFeedback& other);
    virtual ~LteHarqFeedback();
    LteHarqFeedback& operator=(const LteHarqFeedback& other);
    virtual LteHarqFeedback *dup() const override {return new LteHarqFeedback(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual unsigned char getAcid() const;
    virtual void setAcid(unsigned char acid);
    virtual unsigned char getCw() const;
    virtual void setCw(unsigned char cw);
    virtual bool getResult() const;
    virtual void setResult(bool result);
    virtual long getFbMacPduId() const;
    virtual void setFbMacPduId(long fbMacPduId);
    virtual bool getD2dFeedback() const;
    virtual void setD2dFeedback(bool d2dFeedback);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const LteHarqFeedback& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, LteHarqFeedback& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>stack/mac/packet/LteHarqFeedback.msg:25</tt> by nedtool.
 * <pre>
 * packet LteHarqFeedbackMirror extends LteHarqFeedback
 * {
 *     d2dFeedback = true;
 * 
 *     // Id of the D2D Transmitter
 *     long d2dSenderId;
 *     // Id of the D2D Receiver
 *     long d2dReceiverId;
 *     // Length (in bytes) of the corresponding PDU
 *     long pduLength;
 * }
 * </pre>
 */
class LteHarqFeedbackMirror : public ::LteHarqFeedback
{
  protected:
    long d2dSenderId;
    long d2dReceiverId;
    long pduLength;

  private:
    void copy(const LteHarqFeedbackMirror& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const LteHarqFeedbackMirror&);

  public:
    LteHarqFeedbackMirror(const char *name=nullptr, short kind=0);
    LteHarqFeedbackMirror(const LteHarqFeedbackMirror& other);
    virtual ~LteHarqFeedbackMirror();
    LteHarqFeedbackMirror& operator=(const LteHarqFeedbackMirror& other);
    virtual LteHarqFeedbackMirror *dup() const override {return new LteHarqFeedbackMirror(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual long getD2dSenderId() const;
    virtual void setD2dSenderId(long d2dSenderId);
    virtual long getD2dReceiverId() const;
    virtual void setD2dReceiverId(long d2dReceiverId);
    virtual long getPduLength() const;
    virtual void setPduLength(long pduLength);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const LteHarqFeedbackMirror& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, LteHarqFeedbackMirror& obj) {obj.parsimUnpack(b);}


#endif // ifndef __LTEHARQFEEDBACK_M_H

