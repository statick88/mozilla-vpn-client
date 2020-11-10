/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef COMMANDLOGIN_H
#define COMMANDLOGIN_H

#include "command.h"

class CommandLogin : public Command
{
public:
    CommandLogin();

    int run(QStringList &tokens) override;
};

#endif // COMMANDLOGIN_H
