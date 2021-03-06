////////////////////////////////////////////////////////////////////////
// This file is part of Grappa, a system for scaling irregular
// applications on commodity clusters. 

// Copyright (C) 2010-2014 University of Washington and Battelle
// Memorial Institute. University of Washington authorizes use of this
// Grappa software.

// Grappa is free software: you can redistribute it and/or modify it
// under the terms of the Affero General Public License as published
// by Affero, Inc., either version 1 of the License, or (at your
// option) any later version.

// Grappa is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// Affero General Public License for more details.

// You should have received a copy of the Affero General Public
// License along with this program. If not, you may obtain one from
// http://www.affero.org/oagpl.html.
////////////////////////////////////////////////////////////////////////

#ifndef __GLOBAL_MEMORY_HPP__
#define __GLOBAL_MEMORY_HPP__

#include <glog/logging.h>

#include "GlobalMemoryChunk.hpp"
#include "GlobalAllocator.hpp"

/// Representative of global memory in each process.
class GlobalMemory
{
private:
  size_t size_per_node_;
  GlobalMemoryChunk chunk_;
  GlobalAllocator allocator_;

public:
  GlobalMemory( size_t total_size_bytes );

};

/// Global memory pointer
/// TODO: remove. we're using an allocator pointer instead of this for stuff
extern GlobalMemory * global_memory;

#endif
