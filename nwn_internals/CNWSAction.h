/*
 *  NWNeXalt - Empty File
 *  (c) 2007 Doug Swarin (zac@intertex.net)
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 *  $Id$
 *  $HeadURL$
 *
 */

#ifndef _NX_NWN_STRUCT_CNWSACTION_
#define _NX_NWN_STRUCT_CNWSACTION_

struct CNWSAction_s {
    uint32_t            act_type;//0x0
    uint32_t            act_subtype;//0x4
    uint32_t            field_08;
	uint32_t			field_0C;
	uint32_t			field_10;
	uint32_t			field_14;
	uint32_t			field_18;
	uint32_t			field_1C;
	uint32_t			field_20;
	uint32_t			field_24;
	uint32_t			field_28;
	uint32_t			field_2C;
	uint32_t			field_30;
	uint32_t			act_target;//0x34
	uint32_t			field_38;
	uint32_t			field_3C;
	uint32_t			field_40;
	uint32_t			field_44;
	uint32_t			field_48;
	uint32_t			field_4C;	
};

#endif /* _NX_NWN_STRUCT_CNWSACTION_ */

/* vim: set sw=4: */