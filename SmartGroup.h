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

#include <string>
#include <cstdint>
#include <vector>

#include "Defs.h"
#include "SmartGroupUser.h"

class CSmartGroup {
public:
	CSmartGroup(const std::string &callsign, const std::string &logoff, const std::string &repeater, const std::string &infoText, const std::string &reflector,
			LINK_STATUS linkStatus, unsigned int userTimeout);
	~CSmartGroup();

	void addUser(const std::string &callsign, int32_t timer, int32_t timeout);

	std::string getCallsign() const;
	std::string getLogoff() const;
	std::string getRepeater() const;
	std::string getInfoText() const;
	std::string getReflector() const;
	LINK_STATUS getLinkStatus();
	unsigned int getUserTimeout();

	unsigned int getUserCount() const;
	const CSmartGroupUser &getUser(unsigned int n) const;

private:
	std::string m_callsign;
	std::string m_logoff;
	std::string m_repeater;
	std::string m_infoText;
	std::string m_linkReflector;
	LINK_STATUS m_linkStatus;
	unsigned int m_userTimeout;
	std::vector<CSmartGroupUser> m_users;
};

