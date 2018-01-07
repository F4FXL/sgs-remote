/*
 *   Copyright (C) 2011 by Jonathan Naylor G4KLX
 *   Copyright (c) 2018 by Thomas A. Early N7TAE
 *
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 2 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program; if not, write to the Free Software
 *   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#pragma once

#include "Defs.h"

#include <string>
#include <cstdint>

class CLinkData {
public:
	CLinkData(const std::string &callsign, int32_t protocol, int32_t linked, int32_t direction, int32_t dongle);
	~CLinkData();

	std::string  getCallsign() const;
	PROTOCOL     getProtocol() const;
	bool         isLinked() const;
	DIRECTION    getDirection() const;
	bool         isDongle() const;

private:
	std::string  m_callsign;
	PROTOCOL     m_protocol;
	bool         m_linked;
	DIRECTION    m_direction;
	bool         m_dongle;
};
