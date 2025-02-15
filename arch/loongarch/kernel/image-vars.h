/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (C) 2020-2022 Loongson Technology Corporation Limited
 */
#ifndef __LOONGARCH_KERNEL_IMAGE_VARS_H
#define __LOONGARCH_KERNEL_IMAGE_VARS_H

#ifdef CONFIG_EFI_STUB

__efistub_memcmp		= memcmp;
__efistub_memchr		= memchr;
__efistub_memcpy		= memcpy;
__efistub_memmove		= memmove;
__efistub_memset		= memset;
__efistub_strcat		= strcat;
__efistub_strcmp		= strcmp;
__efistub_strlen		= strlen;
__efistub_strncat		= strncat;
__efistub_strnstr		= strnstr;
__efistub_strnlen		= strnlen;
__efistub_strrchr		= strrchr;
__efistub_kernel_entry		= kernel_entry;
__efistub_kernel_asize		= kernel_asize;
__efistub_kernel_fsize		= kernel_fsize;
__efistub_kernel_offset		= kernel_offset;
__efistub_screen_info		= screen_info;

#endif

#endif /* __LOONGARCH_KERNEL_IMAGE_VARS_H */
