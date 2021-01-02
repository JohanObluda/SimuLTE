//
// Generated file, do not edit! Created by nedtool 5.6 from stack/mac/packet/LteSchedulingGrant.msg.
//

#ifndef __LTESCHEDULINGGRANT_M_H
#define __LTESCHEDULINGGRANT_M_H

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
 * Class generated from <tt>stack/mac/packet/LteSchedulingGrant.msg:15</tt> by nedtool.
 * <pre>
 * //
 * // TODO generated message class
 * //
 * packet LteSchedulingGrant
 * {
 *     \@customize(true);  // see the generated C++ header for more info
 *     bool periodic;
 *     unsigned int period;
 *     unsigned int expiration;
 *        // blocks granted on all Remotes, all Bands
 *     unsigned int totalGrantedBlocks;
 *     // number of codewords
 *     unsigned int codewords;
 *     // granted bytes per codeword
 *     abstract unsigned int grantedCwBytes[];
 * 
 *     //#  in LteSchedulingGrant.h
 *     //# const UserTxParams* userTxParams;
 *     //# RbMap grantedBlocks;
 *     //#
 * }
 * </pre>
 *
 * LteSchedulingGrant_Base is only useful if it gets subclassed, and LteSchedulingGrant is derived from it.
 * The minimum code to be written for LteSchedulingGrant is the following:
 *
 * <pre>
 * class LteSchedulingGrant : public LteSchedulingGrant_Base
 * {
 *   private:
 *     void copy(const LteSchedulingGrant& other) { ... }

 *   public:
 *     LteSchedulingGrant(const char *name=nullptr, short kind=0) : LteSchedulingGrant_Base(name,kind) {}
 *     LteSchedulingGrant(const LteSchedulingGrant& other) : LteSchedulingGrant_Base(other) {copy(other);}
 *     LteSchedulingGrant& operator=(const LteSchedulingGrant& other) {if (this==&other) return *this; LteSchedulingGrant_Base::operator=(other); copy(other); return *this;}
 *     virtual LteSchedulingGrant *dup() const override {return new LteSchedulingGrant(*this);}
 *     // ADD CODE HERE to redefine and implement pure virtual functions from LteSchedulingGrant_Base
 * };
 * </pre>
 *
 * The following should go into a .cc (.cpp) file:
 *
 * <pre>
 * Register_Class(LteSchedulingGrant)
 * </pre>
 */
class LteSchedulingGrant_Base : public ::omnetpp::cPacket
{
  protected:
    bool periodic;
    unsigned int period;
    unsigned int expiration;
    unsigned int totalGrantedBlocks;
    unsigned int codewords;

  private:
    void copy(const LteSchedulingGrant_Base& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const LteSchedulingGrant_Base&);
    // make constructors protected to avoid instantiation
    LteSchedulingGrant_Base(const char *name=nullptr, short kind=0);
    LteSchedulingGrant_Base(const LteSchedulingGrant_Base& other);
    // make assignment operator protected to force the user override it
    LteSchedulingGrant_Base& operator=(const LteSchedulingGrant_Base& other);

  public:
    virtual ~LteSchedulingGrant_Base();
    virtual LteSchedulingGrant_Base *dup() const override {throw omnetpp::cRuntimeError("You forgot to manually add a dup() function to class LteSchedulingGrant");}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual bool getPeriodic() const;
    virtual void setPeriodic(bool periodic);
    virtual unsigned int getPeriod() const;
    virtual void setPeriod(unsigned int period);
    virtual unsigned int getExpiration() const;
    virtual void setExpiration(unsigned int expiration);
    virtual unsigned int getTotalGrantedBlocks() const;
    virtual void setTotalGrantedBlocks(unsigned int totalGrantedBlocks);
    virtual unsigned int getCodewords() const;
    virtual void setCodewords(unsigned int codewords);
    virtual void setGrantedCwBytesArraySize(unsigned int size) = 0;
    virtual unsigned int getGrantedCwBytesArraySize() const = 0;
    virtual unsigned int getGrantedCwBytes(unsigned int k) const = 0;
    virtual void setGrantedCwBytes(unsigned int k, unsigned int grantedCwBytes) = 0;
};


#endif // ifndef __LTESCHEDULINGGRANT_M_H

