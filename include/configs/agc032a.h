/*
 * SPDX-License-Identifier: GPL-2.0+
 */

#ifndef __AGC032A_CONFIG_H
#define __AGC032A_CONFIG_H

#define CONFIG_AGC032A 1

#ifndef CONFIG_SYS_LONGHELP
#define CONFIG_SYS_LONGHELP
#endif

#define CONFIG_BOOTARGS "debug console=ttyS4,115200n8 root=/dev/ram rw"
#define CONFIG_BOOTFILE "flash-agc032a"

/*
 * Enable DRAM ECC, going to lose 1/8 of memory
 */
#define CONFIG_DRAM_ECC

/*
 * Serial configuration
 */
#define CONFIG_SYS_NS16550_MEM32
#define CONFIG_SYS_NS16550_REG_SIZE -4
#define CONFIG_SYS_NS16550_COM1 AST_UART0_BASE
#define CONFIG_CONS_INDEX 1
#define CONFIG_ASPEED_COM AST_UART0_BASE
/*
 * UART configurtion
 */
#define CONFIG_ASPEED_UART1_ENABLE
#define CONFIG_ASPEED_UART1_BMC // by default, src is LPC for UART1
#define CONFIG_ASPEED_UART2_ENABLE
#define CONFIG_ASPEED_UART2_BMC // by default, src is LPC for UART2
#define CONFIG_ASPEED_UART3_ENABLE
#define CONFIG_ASPEED_UART4_ENABLE
/*
 * NIC configuration
 */
#define CONFIG_MAC2_ENABLE
#define CONFIG_MAC1_PHY_SETTING 0
#define CONFIG_MAC2_PHY_SETTING 0
#define CONFIG_MAC2_PHY_LINK_INTERRUPT
#define CONFIG_ASPEED_MAC_NUMBER 2
#define CONFIG_ASPEED_MAC_CONFIG 2

/*
 * Watchdog configuration
 */
// #define CONFIG_ASPEED_ENABLE_WATCHDOG
// #define CONFIG_ASPEED_WATCHDOG_2ND_BOOT

// #define CONFIG_MII_
// #define CONFIG_CMD_MII

/*
 * SPI flash configuration
 */
// #define CONFIG_2SPIFLASH

#include "facebook_common.h"
#include "ast2500_common.h"

#endif /* __AGC032A_CONFIG_H */