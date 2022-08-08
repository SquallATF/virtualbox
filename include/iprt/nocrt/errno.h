/** @file
 * IPRT / No-CRT - Dummy errno.h.
 */

/*
 * Copyright (C) 2006-2022 Oracle Corporation
 *
 * This file is part of VirtualBox Open Source Edition (OSE), as
 * available from http://www.virtualbox.org. This file is free software;
 * you can redistribute it and/or modify it under the terms of the GNU
 * General Public License (GPL) as published by the Free Software
 * Foundation, in version 2 as it comes in the "COPYING" file of the
 * VirtualBox OSE distribution. VirtualBox OSE is distributed in the
 * hope that it will be useful, but WITHOUT ANY WARRANTY of any kind.
 *
 * The contents of this file may alternatively be used under the terms
 * of the Common Development and Distribution License Version 1.0
 * (CDDL) only, as it comes in the "COPYING.CDDL" file of the
 * VirtualBox OSE distribution, in which case the provisions of the
 * CDDL are applicable instead of those of the GPL.
 *
 * You may elect to license modified versions of this file under the
 * terms and conditions of either the GPL or the CDDL or both.
 */

#ifndef IPRT_INCLUDED_nocrt_errno_h
#define IPRT_INCLUDED_nocrt_errno_h
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include <iprt/types.h>
#ifdef IPRT_NO_CRT_FOR_3RD_PARTY
# include <iprt/errno.h>

RT_C_DECLS_BEGIN

RTDECL(int *) rtNoCrtGetErrnoPtr(void);
# define errno (*rtNoCrtGetErrnoPtr())

RT_C_DECLS_END

#endif /* IPRT_NO_CRT_FOR_3RD_PARTY */

#endif /* !IPRT_INCLUDED_nocrt_errno_h */
