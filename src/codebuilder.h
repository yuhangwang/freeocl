/*
	FreeOCL - a free OpenCL implementation for CPU
	Copyright (C) 2011  Roland Brochard

	This program is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program.  If not, see <http://www.gnu.org/licenses/>
*/
#ifndef __FREEOCL_CODEBUILDER_H__
#define __FREEOCL_CODEBUILDER_H__

#include "../config.h"
#include <string>
#include <cstdio>

namespace FreeOCL
{
	// Return a string to the .so file built
	// In case an error occurs, it returns an empty string
	// In any case it'll write logs
	std::string build_program(const std::string &code, std::string &log);
}

#endif
