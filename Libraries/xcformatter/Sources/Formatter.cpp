/**
 Copyright (c) 2015-present, Facebook, Inc.
 All rights reserved.

 This source code is licensed under the BSD-style license found in the
 LICENSE file in the root directory of this source tree.
 */

#include <xcformatter/Formatter.h>

using xcformatter::Formatter;

Formatter::
Formatter()
{
}

Formatter::
~Formatter()
{
}

void Formatter::
Print(std::string const &output)
{
    fputs(output.c_str(), stdout);
}

