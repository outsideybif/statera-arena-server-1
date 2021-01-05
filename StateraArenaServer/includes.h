#pragma once
#define _WIN32_WINNT 0x0501
#define BOOST_BIND_NO_PLACEHOLDERS

#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <boost/bind.hpp>
#include <boost/asio.hpp>
#include <boost/thread/thread.hpp>

using boost::asio::ip::udp;

#include "EquipmentProperties.h"
#include "Equipment.h"
#include "Character.h"
#include "Actor.h"
#include "Bot.h"

#include "Room.h"

#include "Server.h"