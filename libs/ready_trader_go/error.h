// Copyright 2021 Optiver Asia Pacific Pty. Ltd.
//
// This file is part of Ready Trader Go.
//
//     Ready Trader Go is free software: you can redistribute it and/or
//     modify it under the terms of the GNU Affero General Public License
//     as published by the Free Software Foundation, either version 3 of
//     the License, or (at your option) any later version.
//
//     Ready Trader Go is distributed in the hope that it will be useful,
//     but WITHOUT ANY WARRANTY; without even the implied warranty of
//     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//     GNU Affero General Public License for more details.
//
//     You should have received a copy of the GNU Affero General Public
//     License along with Ready Trader Go.  If not, see
//     <https://www.gnu.org/licenses/>.
#ifndef CPPREADY_TRADER_GO_LIBS_READY_TRADER_GO_ERROR_H
#define CPPREADY_TRADER_GO_LIBS_READY_TRADER_GO_ERROR_H

#include <stdexcept>

namespace ReadyTraderGo {

struct ReadyTraderGoError : public std::runtime_error
{
    using std::runtime_error::runtime_error;
};

}

#endif //CPPREADY_TRADER_GO_LIBS_READY_TRADER_GO_ERROR_H
