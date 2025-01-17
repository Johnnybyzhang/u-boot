// SPDX-License-Identifier: GPL-2.0+
/*
 * Copyright (C) 2022 Krypton Lee
 * Author: Krypton Lee <kryptonlee@outlook.com>
 */

#include <common.h>
#include <dm.h>
#include <init.h>
#include <net.h>
#include <asm/io.h>
#include <asm/arch/axg.h>
#include <asm/arch/sm.h>
#include <asm/arch/eth.h>
#include <asm/arch/mem.h>

int misc_init_r(void)
{
	meson_generate_serial_ethaddr();

	return 0;
}
