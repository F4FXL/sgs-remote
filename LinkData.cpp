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

#include "LinkData.h"

CLinkData::CLinkData(const std::string &callsign, int32_t protocol, int32_t linked, int32_t direction, int32_t dongle) :
m_callsign(callsign),
m_protocol(PROTOCOL(protocol)),
m_linked(false),
m_direction(DIRECTION(direction)),
m_dongle(false)
{
	m_linked = linked == 1;
	m_dongle = dongle == 1;
}

CLinkData::~CLinkData()
{
}

std::string CLinkData::getCallsign() const
{
	return m_callsign;
}

PROTOCOL CLinkData::getProtocol() const
{
	return m_protocol;
}

bool CLinkData::isLinked() const
{
	return m_linked;
}

DIRECTION CLinkData::getDirection() const
{
	return m_direction;
}

bool CLinkData::isDongle() const
{
	return m_dongle;
}
