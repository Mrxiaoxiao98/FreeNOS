/*
 * Copyright (C) 2015 Niek Linnenbank
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __BIN_NETSEND_H
#define __BIN_NETSEND_H

#include <IPV4.h>
#include <Ethernet.h>
#include <POSIXApplication.h>

/**
 * @addtogroup bin
 * @{
 */

/**
 * Network send application.
 */
class NetSend : public POSIXApplication
{
  public:

    /**
     * Class constructor.
     */
    NetSend(int argc, char **argv);

    /**
     * Class destructor.
     */
    virtual ~NetSend();

    /**
     * Execute the application event loop.
     */
    virtual Result exec();

  private:

    /**
     * Send ARP request.
     */
    Result arpRequest(IPV4::Address ipAddr, Ethernet::Address *ethAddr);

    /** Socket */
    int m_socket;
};

/**
 * @}
 */

#endif /* __BIN_NETSEND_H */
