//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
// 
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see http://www.gnu.org/licenses/.
// 

#ifndef __EVALUATION_FOR_THE_ICT_SYSTEM_RESTORATION_METHODS_VIRTUALROUTER_H_
#define __EVALUATION_FOR_THE_ICT_SYSTEM_RESTORATION_METHODS_VIRTUALROUTER_H_

#include <omnetpp.h>
#include "common/LteCommon.h"
#include "virtual/packet/RoutingTableMsg.h"
#include "corenetwork/binder/LteBinder.h"
#include "inet/networklayer/ipv4/IPv4Datagram.h"
#include "virtual/algorithm/dijkstra.h"

using namespace omnetpp;

class virtualRouter : public cSimpleModule
{
    LteBinder* binder_;
    // Link State self message
    cMessage* lsa_;
    // Timer to send LSA again
    double lsaTimer_;
    // Timer to start sending LSA
    double lsaStart_;
    // adjacency map, maps nodeID to vertexID
    adjMap adjmap_;
    // adjacency matrix, represent topo
    adjMatrix adj_;

  protected:
    MacNodeId nodeId_;
    virtualRouterState* state_;

    virtualRoutingTableEntry directNeighbors_;

    virtualRoutingTable directNeighborsTable_;
    virtualRoutingTable networkTopoTable_;
    virtualRoutingTable actualRoutingTable_;

    simsignal_t sendLsaHello;

    virtual void initialize(int stage) override;
  public:
//    virtualRouter();
    virtual ~virtualRouter();

    /*
     * Table setter methods
     * */
    // Add new entry to a table
    void addTableEntry(virtualRoutingTable& table, const virtualRoutingTableEntry entry);
    // Set information of direct neighbor nodes to the tables
    void setDirectNeighbors(const ueCqi uecqi);

    /*
     * Table getter methods
     * */
    virtualRoutingTable getDirectNeighborsTable() const;
    virtualRoutingTable getNetworkTopoTable() const;
    virtualRoutingTable getActualRoutingTable() const;

    /*
     * Table printer methods
     * */
    // print neighbors information
    void printDirectNeighbors() const;
    // print a table
    void printTable(const virtualRoutingTable table, const char* name);

    /*
     * LSA handler methods
     * */
    // handle LSA
    virtual void handleMessage(cMessage *msg) override;
    // send LSA
    void sendLSA();

    /*
     * Routing methods
     * */
    adjMap createAdjMap();
    adjMatrix createAdjMatrix(adjMap& adjmap);
    // return next hop for the shortest path to destination eNB
    MacNodeId computeRoute(MacNodeId dst);

};

#endif
