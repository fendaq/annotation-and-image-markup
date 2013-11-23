// Module:  Log4CPLUS
// File:    pointer.cxx
// Created: 6/2001
// Author:  Tad E. Smith
//
//
// Copyright 2001-2009 Tad E. Smith
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "dcmtk/oflog/streams.h"
#include "dcmtk/oflog/helpers/pointer.h"
#include "dcmtk/oflog/helpers/threads.h"
//#include <assert.h>


namespace dcmtk { namespace log4cplus { namespace helpers {


///////////////////////////////////////////////////////////////////////////////
// dcmtk::log4cplus::helpers::SharedObject dtor
///////////////////////////////////////////////////////////////////////////////

SharedObject::~SharedObject()
{
    assert(count == 0);
    DCMTK_LOG4CPLUS_MUTEX_FREE( access_mutex );
}



///////////////////////////////////////////////////////////////////////////////
// dcmtk::log4cplus::helpers::SharedObject public methods
///////////////////////////////////////////////////////////////////////////////

void
SharedObject::addReference() const
{
    DCMTK_LOG4CPLUS_BEGIN_SYNCHRONIZE_ON_MUTEX( access_mutex )
        assert (count >= 0);
        ++count;
    DCMTK_LOG4CPLUS_END_SYNCHRONIZE_ON_MUTEX;
}


void
SharedObject::removeReference() const
{
    bool destroy = false;
    DCMTK_LOG4CPLUS_BEGIN_SYNCHRONIZE_ON_MUTEX( access_mutex );
        assert (count > 0);
        if (--count == 0)
            destroy = true;
    DCMTK_LOG4CPLUS_END_SYNCHRONIZE_ON_MUTEX;
    if (destroy)
        delete this;
}


} } } // namespace dcmtk { namespace log4cplus { namespace helpers