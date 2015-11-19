/*
 * @licence app begin@
 * SPDX license identifier: MPL-2.0
 *
 * Copyright (C) 2011-2015, BMW AG
 *
 * This file is part of GENIVI Project DLT - Diagnostic Log and Trace.
 *
 * This Source Code Form is subject to the terms of the
 * Mozilla Public License (MPL), v. 2.0.
 * If a copy of the MPL was not distributed with this file,
 * You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * For further information see http://www.genivi.org/.
 * @licence end@
 */

/*!
 * \author Sven Hassler <sven_hassler@mentor.com>
 *
 * \copyright Copyright © 2011-2015 BMW AG. \n
 * License MPL-2.0: Mozilla Public License version 2.0 http://mozilla.org/MPL/2.0/.
 *
 * \file dlt-procfs-interrupt.h
 */

#ifndef SRC_PROCFS_DLT_PROCFS_INTERRUPT_H_
#define SRC_PROCFS_DLT_PROCFS_INTERRUPT_H_

#include "dlt.h"
#include "dlt-procfs-common.h"

DltReturnValue dlt_procfs_log_interrupts(DltContext *ctx, DltLogLevelType log_level);

#endif /* SRC_PROCFS_DLT_PROCFS_INTERRUPT_H_ */
