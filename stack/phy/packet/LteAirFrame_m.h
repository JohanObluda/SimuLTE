//
// Generated file, do not edit! Created by nedtool 5.6 from stack/phy/packet/LteAirFrame.msg.
//

#ifndef __LTEAIRFRAME_M_H
#define __LTEAIRFRAME_M_H

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0506
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



// cplusplus {{
#include "stack/phy/packet/AirFrame_m.h"
// }}

/**
 * Class generated from <tt>stack/phy/packet/LteAirFrame.msg:20</tt> by nedtool.
 * <pre>
 * //
 * // This is LteAirFrame.
 * //
 * packet LteAirFrame extends AirFrame
 * {
 *     \@customize(true);
 *     //TODO: add txmode for MIMO operations
 * }
 * </pre>
 *
 * LteAirFrame_Base is only useful if it gets subclassed, and LteAirFrame is derived from it.
 * The minimum code to be written for LteAirFrame is the following:
 *
 * <pre>
 * class LteAirFrame : public LteAirFrame_Base
 * {
 *   private:
 *     void copy(const LteAirFrame& other) { ... }

 *   public:
 *     LteAirFrame(const char *name=nullptr, short kind=0) : LteAirFrame_Base(name,kind) {}
 *     LteAirFrame(const LteAirFrame& other) : LteAirFrame_Base(other) {copy(other);}
 *     LteAirFrame& operator=(const LteAirFrame& other) {if (this==&other) return *this; LteAirFrame_Base::operator=(other); copy(other); return *this;}
 *     virtual LteAirFrame *dup() const override {return new LteAirFrame(*this);}
 *     // ADD CODE HERE to redefine and implement pure virtual functions from LteAirFrame_Base
 * };
 * </pre>
 *
 * The following should go into a .cc (.cpp) file:
 *
 * <pre>
 * Register_Class(LteAirFrame)
 * </pre>
 */
class LteAirFrame_Base : public ::AirFrame
{
  protected:

  private:
    void copy(const LteAirFrame_Base& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const LteAirFrame_Base&);
    // make constructors protected to avoid instantiation
    LteAirFrame_Base(const char *name=nullptr, short kind=0);
    LteAirFrame_Base(const LteAirFrame_Base& other);
    // make assignment operator protected to force the user override it
    LteAirFrame_Base& operator=(const LteAirFrame_Base& other);

  public:
    virtual ~LteAirFrame_Base();
    virtual LteAirFrame_Base *dup() const override {throw omnetpp::cRuntimeError("You forgot to manually add a dup() function to class LteAirFrame");}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
};


#endif // ifndef __LTEAIRFRAME_M_H

