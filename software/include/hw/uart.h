/*
 * Milkymist VJ SoC (Software)
 * Copyright (C) 2007, 2008, 2009, 2010 Sebastien Bourdeauducq
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, version 3 of the License.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __HW_UART_H
#define __HW_UART_H

#include <hw/common.h>

#define CSR_UART_RXTX 		MMPTR(0xe0000000)
#define CSR_UART_DIVISOR	MMPTR(0xe0000004)
#define CSR_UART_THRU		MMPTR(0xe0000008)
#define CSR_UART_BREAK		MMPTR(0xe000000c)

#define UART_THRU		(0x1)

#define UART_BREAK_EN		(0x1)
#define UART_TX_PENDING		(0x2)

#endif /* __HW_UART_H */
