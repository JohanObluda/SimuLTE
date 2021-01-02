//
// Generated file, do not edit! Created by nedtool 5.6 from x2/packet/LteX2Message.msg.
//

#ifndef __LTEX2MESSAGE_M_H
#define __LTEX2MESSAGE_M_H

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
 * Class generated from <tt>x2/packet/LteX2Message.msg:16</tt> by nedtool.
 * <pre>
 * //
 * // This is the X2 message flowing through X2 interface.
 * // It contains a vector of Information Elements (see LteX2Message.h),
 * // the total length of the message and the type of the message
 * //
 * packet LteX2Message
 * {
 *     \@customize(true);
 *     unsigned int sourceId;
 *     unsigned int destinationId;
 * }
 * </pre>
 *
 * LteX2Message_Base is only useful if it gets subclassed, and LteX2Message is derived from it.
 * The minimum code to be written for LteX2Message is the following:
 *
 * <pre>
 * class LteX2Message : public LteX2Message_Base
 * {
 *   private:
 *     void copy(const LteX2Message& other) { ... }

 *   public:
 *     LteX2Message(const char *name=nullptr, short kind=0) : LteX2Message_Base(name,kind) {}
 *     LteX2Message(const LteX2Message& other) : LteX2Message_Base(other) {copy(other);}
 *     LteX2Message& operator=(const LteX2Message& other) {if (this==&other) return *this; LteX2Message_Base::operator=(other); copy(other); return *this;}
 *     virtual LteX2Message *dup() const override {return new LteX2Message(*this);}
 *     // ADD CODE HERE to redefine and implement pure virtual functions from LteX2Message_Base
 * };
 * </pre>
 *
 * The following should go into a .cc (.cpp) file:
 *
 * <pre>
 * Register_Class(LteX2Message)
 * </pre>
 */
class LteX2Message_Base : public ::omnetpp::cPacket
{
  protected:
    unsigned int sourceId;
    unsigned int destinationId;

  private:
    void copy(const LteX2Message_Base& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const LteX2Message_Base&);
    // make constructors protected to avoid instantiation
    LteX2Message_Base(const char *name=nullptr, short kind=0);
    LteX2Message_Base(const LteX2Message_Base& other);
    // make assignment operator protected to force the user override it
    LteX2Message_Base& operator=(const LteX2Message_Base& other);

  public:
    virtual ~LteX2Message_Base();
    virtual LteX2Message_Base *dup() const override {throw omnetpp::cRuntimeError("You forgot to manually add a dup() function to class LteX2Message");}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual unsigned int getSourceId() const;
    virtual void setSourceId(unsigned int sourceId);
    virtual unsigned int getDestinationId() const;
    virtual void setDestinationId(unsigned int destinationId);
};

/**
 * Class generated from <tt>x2/packet/LteX2Message.msg:23</tt> by nedtool.
 * <pre>
 * packet X2InformationElement
 * {
 *     \@customize(true);
 * }
 * </pre>
 *
 * X2InformationElement_Base is only useful if it gets subclassed, and X2InformationElement is derived from it.
 * The minimum code to be written for X2InformationElement is the following:
 *
 * <pre>
 * class X2InformationElement : public X2InformationElement_Base
 * {
 *   private:
 *     void copy(const X2InformationElement& other) { ... }

 *   public:
 *     X2InformationElement(const char *name=nullptr, short kind=0) : X2InformationElement_Base(name,kind) {}
 *     X2InformationElement(const X2InformationElement& other) : X2InformationElement_Base(other) {copy(other);}
 *     X2InformationElement& operator=(const X2InformationElement& other) {if (this==&other) return *this; X2InformationElement_Base::operator=(other); copy(other); return *this;}
 *     virtual X2InformationElement *dup() const override {return new X2InformationElement(*this);}
 *     // ADD CODE HERE to redefine and implement pure virtual functions from X2InformationElement_Base
 * };
 * </pre>
 *
 * The following should go into a .cc (.cpp) file:
 *
 * <pre>
 * Register_Class(X2InformationElement)
 * </pre>
 */
class X2InformationElement_Base : public ::omnetpp::cPacket
{
  protected:

  private:
    void copy(const X2InformationElement_Base& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const X2InformationElement_Base&);
    // make constructors protected to avoid instantiation
    X2InformationElement_Base(const char *name=nullptr, short kind=0);
    X2InformationElement_Base(const X2InformationElement_Base& other);
    // make assignment operator protected to force the user override it
    X2InformationElement_Base& operator=(const X2InformationElement_Base& other);

  public:
    virtual ~X2InformationElement_Base();
    virtual X2InformationElement_Base *dup() const override {throw omnetpp::cRuntimeError("You forgot to manually add a dup() function to class X2InformationElement");}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
};


#endif // ifndef __LTEX2MESSAGE_M_H

