/***********************************************************************
* font3.h - 8x8 fonts defined for ascii characters with codes > 32;
*         - used in Wise Clock 2;
* Copyright by FlorinC;
*   Copyrighted and distributed under the terms of the Berkeley license
*   (copy freely, but include this notice of original author.)
***********************************************************************
*/

//*********************************************************************************************************
//*	Edit History, started April, 2010
//*	please put your initials and comments here anytime you make changes
//*********************************************************************************************************
//* Oct  10/10 (rp) "improved" number 2 and lower case m
//* Jun  12/11 (rp) added degree symbol as ascii 127
//* Oct  15/11 (rp) "improved" semicolon
//*********************************************************************************************************


// define all ascii characters starting with 32 (blank);
const unsigned char PROGMEM myfont[96][8] = {
	{
		0x00,    // ________   blank (ascii 32)
		0x00,    // ________
		0x00,    // ________
		0x00,    // ________
		0x00,    // ________
		0x00,    // ________
		0x00,    // ________
		0x00     // ________
	},
	{
		0x00,    // ________  !
		0x08,    // ____X___
		0x08,    // ____X___
		0x08,    // ____X___
		0x08,    // ____X___
		0x00,    // ________
		0x08,    // ____X___
		0x00,    // ________
	},
	{
		0x00,    // ________  "
		0x36,    // __XX_XX_
		0x12,    // ___X__X_
		0x24,    // __X__X_
		0x00,    // ________
		0x00,    // ________
		0x00,    // ________
		0x00,    // ________
	},
	{
		0x00,    // ________  #
		0x00,    // ________
		0x14,    // ___X_X__
		0x3E,    // __XXXXX_
		0x14,    // ___X_X__
		0x3E,    // __XXXXX_
		0x14,    // ___X_X__
		0x00,    // ________
	},
	{
		0x00,    // ________  $
		0x08,    // ____X___
		0x1E,    // ___XXXX_
		0x28,    // __X_X___
		0x1C,    // ___XXX__
		0x0A,    // ____X_X_
		0x3C,    // __XXXX__
		0x00,    // ________
	},
	{
		0x00,    // ________  %
		0x00,    // ________
		0x32,    // __XX__X_
		0x34,    // __XX_X__
		0x08,    // ____X___
		0x16,    // ___X_XX_
		0x26,    // __X__XX_
		0x00,    // ________
	},
	{
		0x00,    // ________  &
		0x00,    // ________
		0x18,    // ___XX___
		0x24,    // __X__X__
		0x18,    // ___XX___
		0x26,    // __X__XX_
		0x1E,    // ___XXXX_
		0x00,    // ________
	},
	{
		0x00,    // ________  '
		0x18,    // ___XX___
		0x18,    // ___XX___
		0x10,    // ___X____
		0x00,    // ________
		0x00,    // ________
		0x00,    // ________
		0x00,    // ________
	},
	{
		0x00,    // ________  (
		0x08,    // ____X___
		0x10,    // ___X____
		0x10,    // ___X____
		0x10,    // ___X____
		0x10,    // ___X____
		0x08,    // ____X___
		0x00,    // ________
	},
	{
		0x00,    // ________  )
		0x10,    // ___X____
		0x08,    // ____X___
		0x08,    // ____X___
		0x08,    // ____X___
		0x08,    // ____X___
		0x10,    // ___X____
		0x00,    // ________
	},
	{
		0x00,    // ________  *
		0x00,    // ________
		0x08,    // ____X___
		0x2A,    // __X_X_X_
		0x08,    // ____X___
		0x2A,    // __X_X_X_
		0x08,    // ____X___
		0x00,    // ________
	},
	{
		0x00,    // ________  +
		0x00,    // ________
		0x08,    // ____X___
		0x08,    // ____X___
		0x3E,    // __XXXXX_
		0x08,    // ____X___
		0x08,    // ____X___
		0x00,    // ________
	},
	{
		0x00,    // ________  ,
		0x00,    // ________
		0x00,    // ________
		0x00,    // ________
		0x00,    // ________
		0x18,    // ___XX___
		0x08,    // ____X___
		0x10,    // ___X____
	},
	{
		0x00,    // ________  -
		0x00,    // ________
		0x00,    // ________
		0x00,    // ________
		0x3E,    // __XXXXX_
		0x00,    // ________
		0x00,    // ________
		0x00,    // ________
	},
	{
		0x00,    // ________  .
		0x00,    // ________
		0x00,    // ________
		0x00,    // ________
		0x00,    // ________
		0x0C,    // ____XX__
		0x0C,    // ____XX__
		0x00,    // ________
	},
	{
		0x00,    // ________  /
		0x00,    // ________
		0x02,    // ______X_
		0x04,    // _____X__
		0x08,    // ____X___
		0x10,    // ___X____
		0x20,    // __X_____
		0x00,    // ________
	},
	/*
	// (fc, Jan 29/2011) the following digits are defined on 5 columns (suitable for 2416 display);
	// they are disabled for Wise Clock 3;
	{
	0x00,    // ________  0
	0x0C,    // ____XX__
	0x12,    // ___X__X_
	0x12,    // ___X__X_
	0x12,    // ___X__X_
	0x12,    // ___X__X_
	0x0C,    // ____XX__
	0x00,    // ________
	},
	{
	0x00,    // ________  1
	0x04,    // _____X__
	0x0C,    // ____XX__
	0x04,    // _____X__
	0x04,    // _____X__
	0x04,    // _____X__
	0x0E,    // ____XXX_
	0x00,    // ________
	},
	{
	0x00,    // ________  2
	0x0C,    // ____XX__
	0x12,    // ___X__X_
	0x02,    // ______X_
	0x04,    // _____X__
	0x08,    // ____X___
	0x1E,    // ___XXXX_
	0x00,    // ________
	},
	{
	0x00,    // ________  3
	0x1E,    // ___XXXX_
	0x02,    // ______X_
	0x0C,    // ____XX__
	0x02,    // ______X_
	0x12,    // ___X__X_
	0x0C,    // ____XX__
	0x00,    // ________
	},
	{
	0x00,    // ________  4
	0x12,    // ___X__X_
	0x12,    // ___X__X_
	0x1E,    // ___XXXX_
	0x02,    // ______X_
	0x02,    // ______X_
	0x02,    // ______X_
	0x00,    // ________
	},
	{
	0x00,    // ________  5
	0x1E,    // ___XXXX_
	0x10,    // ___X____
	0x1C,    // ___XXX__
	0x02,    // ______X_
	0x12,    // ___X__X_
	0x0C,    // ____XX__
	0x00,    // ________
	},
	{
	0x00,    // ________  6
	0x0C,    // ____XX__
	0x10,    // ___X____
	0x1C,    // ___XXX__
	0x12,    // ___X__X_
	0x12,    // ___X__X_
	0x0C,    // ____XX__
	0x00,    // ________
	},
	{
	0x00,    // ________  7
	0x1E,    // ___XXXX_
	0x02,    // ______X_
	0x04,    // _____X__
	0x08,    // ____X___
	0x08,    // ____X___
	0x08,    // ____X___
	0x00,    // ________
	},
	{
	0x00,    // ________  8
	0x0C,    // ____XX__
	0x12,    // ___X__X_
	0x0C,    // ____XX__
	0x12,    // ___X__X_
	0x12,    // ___X__X_
	0x0C,    // ____XX__
	0x00,    // ________
	},
	{
	0x00,    // ________  9
	0x0C,    // ____XX__
	0x12,    // ___X__X_
	0x0E,    // ____XXX_
	0x02,    // ______X_
	0x12,    // ___X__X_
	0x0C,    // ____XX__
	0x00,    // ________
	},
	*/
	// (fc, Jan 29/2011) the following digits are defined on 6 columns (like the letters),
	// more suitable for the 3216 display of Wise Clock 3;
	{
		0x00,    // ________  0
			0x1C,    // ___XXX__
			0x26,    // __X__XX_
			0x26,    // __X__XX_
			0x26,    // __X__XX_
			0x26,    // __X__XX_
			0x1C,    // ___XXX__
			0x00,    // ________
	},
	{
		0x00,    // ________  1
		0x0C,    // ____XX__
		0x1C,    // ___XXX__
		0x0C,    // ____XX__
		0x0C,    // ____XX__
		0x0C,    // ____XX__
		0x1E,    // ___XXXX_
		0x00,    // ________
	},
	{
		0x00,    // ________  2
		0x1C,    // ___XXX__
		0x26,    // __X__XX_
		0x0C,    // ____XX__
		0x18,    // ___XX___
		0x30,    // __XX____
		0x3E,    // __XXXXX_
		0x00,    // ________
	},
	{
		0x00,    // ________  3
		0x3E,    // __XXXXX_
		0x06,    // _____XX_
		0x1C,    // ___XXX__
		0x06,    // _____XX_
		0x26,    // __X__XX_
		0x1C,    // ___XXX__
		0x00,    // ________
	},
	{
		0x00,    // ________  4
		0x26,    // __X__XX_
		0x26,    // __X__XX_
		0x3E,    // __XXXXX_
		0x06,    // _____XX_
		0x06,    // _____XX_
		0x06,    // _____XX_
		0x00,    // ________
	},
	{
		0x00,    // ________  5
		0x3E,    // __XXXXX_
		0x30,    // __XX____
		0x3C,    // __XXXX__
		0x06,    // _____XX_
		0x26,    // __X__XX_
		0x1C,    // ___XXX__
		0x00,    // ________
	},
	{
		0x00,    // ________  6
		0x1C,    // ___XXX__
		0x20,    // __X_____
		0x3C,    // __XXXX__
		0x26,    // __X__XX_
		0x26,    // __X__XX_
		0x1C,    // ___XXX__
		0x00,    // ________
	},
	{
		0x00,    // ________  7
		0x3E,    // __XXXXX_
		0x06,    // _____XX_
		0x0C,    // ____XX__
		0x18,    // ___XX___
		0x18,    // ___XX___
		0x18,    // ___XX___
		0x00,    // ________
	},
	{
		0x00,    // ________  8
		0x1C,    // ___XXX__
		0x26,    // __X__XX_
		0x1C,    // ___XXX__
		0x26,    // __X__XX_
		0x26,    // __X__XX_
		0x1C,    // ___XXX__
		0x00,    // ________
	},
	{
		0x00,    // ________  9
		0x1C,    // ___XXX__
		0x26,    // __X__XX_
		0x1E,    // ___XXXX_
		0x06,    // _____XX_
		0x26,    // __X__XX_
		0x1C,    // ___XXX__
		0x00,    // ________
	},
	{
		0x00,    // ________  :
		0x00,    // ________
		0x0C,    // ____XX__
		0x0C,    // ____XX__
		0x00,    // ________
		0x0C,    // ____XX__
		0x0C,    // ____XX__
		0x00,    // ________
	},
	{
		0x00,    // ________  ;
		0x00,    // ________
		0x0C,    // ____XX__
		0x0C,    // ____XX__
		0x00,    // ________
		0x0C,    // ____XX__
		0x04,    // _____X__
		0x08,    // ____X___
	},
	{
		0x00,    // ________  <
		0x00,    // ________
		0x04,    // _____X__
		0x08,    // ____X___
		0x10,    // ___X____
		0x08,    // ____X___
		0x04,    // _____X__
		0x00,    // ________
	},
	{
		0x00,    // ________  =
		0x00,    // ________
		0x00,    // ________
		0x3E,    // __XXXXX_
		0x00,    // ________
		0x3E,    // __XXXXX_
		0x00,    // ________
		0x00,    // ________
	},
	{
		0x00,    // ________  >
		0x00,    // ________
		0x10,    // ___X____
		0x08,    // ____X___
		0x04,    // _____X__
		0x08,    // ____X___
		0x10,    // ___X____
		0x00,    // ________
	},
	{
		0x00,    // ________  ?
		0x1C,    // ___XXX__
		0x22,    // __X___X_
		0x04,    // _____X__
		0x08,    // ____X___
		0x00,    // ________
		0x08,    // ____X___
		0x00,    // ________
	},
	{
		0x00,    // ________  @
		0x1C,    // ___XXX__
		0x26,    // __X__XX_
		0x2A,    // __X_X_X_
		0x2E,    // __X_XXX_
		0x20,    // __X_____
		0x1E,    // ___XXXX_
		0x00,    // ________
	},
	{
		0x00,    // ________   A
		0x1C,    // ___XXX__
		0x22,    // __X___X_
		0x22,    // __X___X_
		0x3E,    // __XXXXX_
		0x22,    // __X___X_
		0x22,    // __X___X_
		0x00     // ________
	},
	{
		0x00,    // ________   B
		0x3C,    // __XXXX__
		0x22,    // __X___X_
		0x3C,    // __XXXX__
		0x22,    // __X___X_
		0x22,    // __X___X_
		0x3C,    // __XXXX__
		0x00     // ________
	},
	{
		0x00,    // ________   C
		0x1C,    // ___XXX__
		0x22,    // __X___X_
		0x20,    // __X_____
		0x20,    // __X_____
		0x22,    // __X___X_
		0x1C,    // ___XXX__
		0x00     // ________
	},
	{
		0x00,    // ________   D
		0x3C,    // __XXXX__
		0x22,    // __X___X_
		0x22,    // __X___X_
		0x22,    // __X___X_
		0x22,    // __X___X_
		0x3C,    // __XXXX__
		0x00     // ________
	},
	{
		0x00,    // ________   E
		0x3E,    // __XXXXX_
		0x20,    // __X_____
		0x3C,    // __XXXX__
		0x20,    // __X_____
		0x20,    // __X_____
		0x3E,    // __XXXXX_
		0x00     // ________
	},
	{
		0x00,    // ________   F
		0x3E,    // __XXXXX_
		0x20,    // __X_____
		0x3C,    // __XXXX__
		0x20,    // __X_____
		0x20,    // __X_____
		0x20,    // __X_____
		0x00     // ________
	},
	{
		0x00,    // ________  G
		0x1C,    // ___XXX__
		0x20,    // __X_____
		0x20,    // __X_____
		0x26,    // __X__XX_
		0x22,    // __X___X_
		0x1E,    // ___XXXX_
		0x00     // ________
	},
	{
		0x00,    // ________  H
		0x22,    // __X___X_
		0x22,    // __X___X_
		0x3E,    // __XXXXX_
		0x22,    // __X___X_
		0x22,    // __X___X_
		0x22,    // __X___X_
		0x00     // ________
	},
	{
		0x00,    // ________  I
		0x1C,    // ___XXX__
		0x08,    // ____X___
		0x08,    // ____X___
		0x08,    // ____X___
		0x08,    // ____X___
		0x1C,    // ___XXX__
		0x00     // ________
	},
	{
		0x00,    // ________  J
		0x3E,    // __XXXXX_
		0x02,    // ______X_
		0x02,    // ______X_
		0x02,    // ______X_
		0x22,    // __X___X_
		0x1C,    // ___XXX__
		0x00     // ________
	},
	{
		0x00,    // ________  K
		0x22,    // __X___X_
		0x24,    // __X__X__
		0x38,    // __XXX___
		0x38,    // __XXX___
		0x24,    // __X__X__
		0x22,    // __X___X_
		0x00,    // ________
	},
	{
		0x00,    // ________  L
		0x20,    // __X_____
		0x20,    // __X_____
		0x20,    // __X_____
		0x20,    // __X_____
		0x20,    // __X_____
		0x3E,    // __XXXXX_
		0x00,    // ________
	},
	{
		0x00,    // ________   M
		0x22,    // __X___X_
		0x36,    // __XX_XX_
		0x2A,    // __X_X_X_
		0x22,    // __X___X_
		0x22,    // __X___X_
		0x22,    // __X___X_
		0x00     // ________
	},
	{
		0x00,    // ________  N
		0x22,    // __X___X_
		0x32,    // __XX__X_
		0x2A,    // __X_X_X_
		0x26,    // __X__XX_
		0x22,    // __X___X_
		0x22,    // __X___X_
		0x00,    // ________
	},
	{
		0x00,    // ________  O
		0x1C,    // ___XXX__
		0x22,    // __X___X_
		0x22,    // __X___X_
		0x22,    // __X___X_
		0x22,    // __X___X_
		0x1C,    // ___XXX__
		0x00,    // ________
	},
	{
		0x00,    // ________  P
		0x3C,    // __XXXX__
		0x22,    // __X___X_
		0x3C,    // __XXXX__
		0x20,    // __X_____
		0x20,    // __X_____
		0x20,    // __X_____
		0x00,    // ________
	},
	{
		0x00,    // ________  Q
		0x18,    // ___XX___
		0x24,    // __X__X__
		0x24,    // __X__X__
		0x24,    // __X__X__
		0x2C,    // __X_XX__
		0x1A,    // ___XX_X_
		0x00,    // ________
	},
	{
		0x00,    // ________  R
		0x3C,    // __XXXX__
		0x22,    // __X___X_
		0x3C,    // __XXXX__
		0x22,    // __X___X_
		0x22,    // __X___X_
		0x22,    // __X___X_
		0x00,    // ________
	},
	{
		0x00,    // ________  S
		0x1E,    // ___XXXX_
		0x20,    // __X_____
		0x1C,    // ___XXX__
		0x02,    // ______X_
		0x22,    // __X___X_
		0x1C,    // ___XXX__
		0x00,    // ________
	},
	{
		0x00,    // ________  T
		0x3E,    // __XXXXX_
		0x08,    // ____X___
		0x08,    // ____X___
		0x08,    // ____X___
		0x08,    // ____X___
		0x08,    // ____X___
		0x00,    // ________
	},
	{
		0x00,    // ________  U
		0x22,    // __X___X_
		0x22,    // __X___X_
		0x22,    // __X___X_
		0x22,    // __X___X_
		0x22,    // __X___X_
		0x1C,    // ___XXX__
		0x00,    // ________
	},
	{
		0x00,    // ________  V
		0x22,    // __X___X_
		0x22,    // __X___X_
		0x22,    // __X___X_
		0x14,    // ___X_X__
		0x14,    // ___X_X__
		0x08,    // ____X___
		0x00,    // ________
	},
	{
		0x00,    // ________  W
		0x22,    // __X___X_
		0x22,    // __X___X_
		0x22,    // __X___X_
		0x2A,    // __X_X_X_
		0x2A,    // __X_X_X_
		0x14,    // ___X_X__
		0x00,    // ________
	},
	{
		0x00,    // ________ X
		0x22,    // __X___X_
		0x14,    // ___X_X__
		0x08,    // ____X___
		0x08,    // ____X___
		0x14,    // ___X_X__
		0x22,    // __X___X_
		0x00,    // ________
	},
	{
		0x00,    // ________  Y
		0x22,    // __X___X_
		0x22,    // __X___X_
		0x14,    // ___X_X__
		0x08,    // ____X___
		0x08,    // ____X___
		0x08,    // ____X___
		0x00,    // ________
	},
	{
		0x00,    // ________  Z
		0x3E,    // __XXXXX_
		0x04,    // _____X__
		0x08,    // ____X___
		0x10,    // ___X____
		0x20,    // __X_____
		0x3E,    // __XXXXX_
		0x00,    // ________
	},
	{
		0x00,    // ________  :
		0x1C,    // ___XXX__
		0x10,    // ___X____
		0x10,    // ___X____
		0x10,    // ___X____
		0x10,    // ___X____
		0x1C,    // ___XXX__
		0x00,    // ________
	},
	{
		0x00,    // ________  \
				     0x00,    // ________
					 0x20,    // __X_____
					 0x10,    // ___X____
					 0x08,    // ____X___
					 0x04,    // _____X__
					 0x02,    // ______X_
					 0x00,    // ________
	},
	{
		0x00,    // ________  ]
		0x1C,    // ___XXX__
		0x04,    // _____X__
		0x04,    // _____X__
		0x04,    // _____X__
		0x04,    // _____X__
		0x1C,    // ___XXX__
		0x00,    // ________
	},
	{
		0x00,    // ________  ^
		0x08,    // ____X___
		0x14,    // ___X_X__
		0x22,    // __X___X_
		0x00,    // ________
		0x00,    // ________
		0x00,    // ________
		0x00,    // ________
	},
	{
		0x00,    // ________  _
		0x00,    // ________
		0x00,    // ________
		0x00,    // ________
		0x00,    // ________
		0x00,    // ________
		0x3E,    // __XXXXX_
		0x00,    // ________
	},
	{
		0x00,    // ________  `
		0x08,    // ____X___
		0x04,    // _____X__
		0x00,    // ________
		0x00,    // ________
		0x00,    // ________
		0x00,    // ________
		0x00,    // ________
	},
	{
		0x00,    // ________   a
		0x00,    // ________
		0x1C,    // ___XXX__
		0x02,    // ______X_
		0x1E,    // ___XXXX_
		0x22,    // __X___X_
		0x3E,    // ___XXXX_
		0x00     // ________
	},
	{
		0x00,    // ________   b
		0x20,    // __X_____
		0x20,    // __X_____
		0x3C,    // __XXXX__
		0x22,    // __X___X_
		0x22,    // __X___X_
		0x3C,    // __XXXX__
		0x00     // ________
	},
	{
		0x00,    // ________   c
		0x00,    // ________
		0x1C,    // ___XXXX_
		0x20,    // __X_____
		0x20,    // __X_____
		0x20,    // __X_____
		0x1C,    // ___XXXX_
		0x00     // ________
	},
	{
		0x00,    // ________   d
		0x02,    // ______X_
		0x02,    // ______X_
		0x1E,    // ___XXXX_
		0x22,    // __X___X_
		0x22,    // __X___X_
		0x1E,    // ___XXXX_
		0x00     // ________
	},
	{
		0x00,    // ________   e
		0x00,    // ________
		0x1C,    // ___XXX__
		0x22,    // __X___X_
		0x3E,    // __XXXXX_
		0x20,    // __X_____
		0x1C,    // ___XXX__
		0x00     // ________
	},
	{
		0x00,    // ________   f
		0x0E,    // ____XXX_
		0x10,    // ___X____
		0x10,    // ___X____
		0x3C,    // __XXXX__
		0x10,    // ___X____
		0x10,    // ___X____
		0x00,    // ________
	},
	{
		0x00,    // ________   g
		0x00,    // ________
		0x1E,    // ___XXXX_
		0x22,    // __X___X_
		0x3E,    // __XXXXX_
		0x02,    // ______X_
		0x02,    // ______X_
		0x1C     // ___XXX__
	},
	{
		0x00,    // ________   h
		0x20,    // __X_____
		0x20,    // __X_____
		0x3C,    // __XXXX__
		0x22,    // __X___X_
		0x22,    // __X___X_
		0x22,    // __X___X_
		0x00     // ________
	},
	{
		0x00,    // ________   i
		0x08,    // ____X___
		0x00,    // ________
		0x18,    // ___XX___
		0x08,    // ____X___
		0x08,    // ____X___
		0x1C,    // ___XXX__
		0x00     // ________
	},
	{
		0x00,    // ________   j
		0x08,    // ____X___
		0x00,    // ________
		0x1E,    // ___XXXX_
		0x02,    // ______X_
		0x02,    // ______X_
		0x22,    // __X___X_
		0x1C     // ___XXX__
	},
	{
		0x00,    // ________   k
		0x20,    // __X_____
		0x20,    // __X_____
		0x24,    // __X__X__
		0x38,    // __XXX___
		0x24,    // __X__X__
		0x22,    // __X___X_
		0x00     // ________
	},
	{
		0x00,    // ________   l
		0x18,    // ___XX___
		0x08,    // ____X___
		0x08,    // ____X___
		0x08,    // ____X___
		0x08,    // ____X___
		0x1C,    // ___XXX__
		0x00     // ________
	},
	{
		0x00,    // ________  m
		0x00,    // ________  m
		0x34,    // __XX_X__
		0x2A,    // __X_X_X_
		0x2A,    // __X_X_X_
		0x2A,    // __X_X_X_
		0x2A,    // __X_X_X_
		0x00,    // ________
	},
	{
		0x00,    // ________   n
		0x00,    // ________
		0x2C,    // __X_XX__
		0x32,    // __XX__X_
		0x22,    // __X___X_
		0x22,    // __X___X_
		0x22,    // __X___X_
		0x00     // ________
	},
	{
		0x00,    // ________   o
		0x00,    // ________
		0x1C,    // ___XXX__
		0x22,    // __X___X_
		0x22,    // __X___X_
		0x22,    // __X___X_
		0x1C,    // ___XXX__
		0x00     // ________
	},
	{
		0x00,    // ________   p
		0x00,    // ________
		0x3C,    // __XXXX__
		0x22,    // __X___X_
		0x3C,    // __XXXX__
		0x20,    // __X_____
		0x20,    // __X_____
		0x20     // __X_____
	},
	{
		0x00,    // ________   q
		0x00,    // ________
		0x1C,    // ___XXX__
		0x24,    // __X__X__
		0x1C,    // ___XXX__
		0x04,    // _____X__
		0x04,    // _____X__
		0x06     // _____XX_
	},
	{
		0x00,    // ________   r
		0x00,    // ________
		0x2E,    // __X_XXX_
		0x30,    // __XX____
		0x20,    // __X_____
		0x20,    // __X_____
		0x20,    // __X_____
		0x00     // ________
	},
	{
		0x00,    // ________   s
		0x00,    // ________
		0x1E,    // ___XXXX_
		0x20,    // __X_____
		0x1C,    // ___XXX__
		0x02,    // ______X_
		0x3C,    // __XXXX__
		0x00     // ________
	},
	{
		0x00,    // ________   t
		0x08,    // ____X___
		0x3E,    // __XXXXX_
		0x08,    // ____X___
		0x08,    // ____X___
		0x08,    // ____X___
		0x06,    // _____XX_
		0x00     // ________
	},
	{
		0x00,    // ________   u
		0x00,    // ________
		0x22,    // __X___X_
		0x22,    // __X___X_
		0x22,    // __X___X_
		0x22,    // __X___X_
		0x1E,    // ___XXXX_
		0x00     // ________
	},
	{
		0x00,    // ________   v
		0x00,    // ________
		0x22,    // __X___X_
		0x22,    // __X___X_
		0x22,    // __X___X_
		0x14,    // ___X_X__
		0x08,    // ____X___
		0x00     // ________
	},
	{
		0x00,    // ________   w
		0x00,    // ________
		0x22,    // __X___X_
		0x22,    // __X___X_
		0x2A,    // __X_X_X_
		0x2A,    // __X_X_X_
		0x14,    // ___X_X__
		0x00     // ________
	},
	{
		0x00,    // ________   x
		0x00,    // ________
		0x22,    // __X___X_
		0x14,    // ___X_X__
		0x08,    // ____X___
		0x14,    // ___X_X__
		0x22,    // __X___X_
		0x00     // ________
	},
	{
		0x00,    // ________   y
		0x00,    // ________
		0x22,    // __X___X_
		0x22,    // __X___X_
		0x1E,    // ___XXXX_
		0x02,    // ______X_
		0x04,    // _____X__
		0x18     // ___XX___
	},
	{
		0x00,    // ________   z
		0x00,    // ________
		0x3E,    // __XXXXX_
		0x04,    // _____X__
		0x08,    // ____X___
		0x10,    // ___X____
		0x3E,    // __XXXXX_
		0x00     // ________
	},
	{
		0x00,    // ________   {
		0x04,    // _____X__
		0x08,    // ____X___
		0x08,    // ____X___
		0x10,    // ___X____
		0x08,    // ____X___
		0x08,    // ____X___
		0x04     // _____X__
	},
	{
		0x00,    // ________   |
		0x08,    // ____X___
		0x08,    // ____X___
		0x08,    // ____X___
		0x08,    // ____X___
		0x08,    // ____X___
		0x08,    // ____X___
		0x00     // ________
	},
	{
		0x00,    // ________   }
		0x10,    // ___X____
		0x08,    // ____X___
		0x08,    // ____X___
		0x04,    // _____X__
		0x08,    // ____X___
		0x08,    // ____X___
		0x10     // ___X____
	},
	{
		0x00,    // ________   ~ (ascii 126)
		0x00,    // ________
		0x10,    // ___X____
		0x2A,    // __X_X_X_
		0x04,    // _____X__
		0x00,    // ________
		0x00,    // ________
		0x00     // ________
	},
	{
		0x00,    // ________   degree symbol (ascii 127)
		0x10,    // ___X____
		0x28,    // __X_X___
		0x10,    // ___X____
		0x00,    // ________
		0x00,    // ________
		0x00,    // ________
		0x00     // ________
	},
};


const unsigned char PROGMEM myfont8x8[128][8] = {
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },   // U+0020 (space)
	{ 0x18, 0x3C, 0x3C, 0x18, 0x18, 0x00, 0x18, 0x00 },   // U+0021 (!)
	{ 0x36, 0x36, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },   // U+0022 (")
	{ 0x36, 0x36, 0x7F, 0x36, 0x7F, 0x36, 0x36, 0x00 },   // U+0023 (#)
	{ 0x0C, 0x3E, 0x03, 0x1E, 0x30, 0x1F, 0x0C, 0x00 },   // U+0024 ($)
	{ 0x00, 0x63, 0x33, 0x18, 0x0C, 0x66, 0x63, 0x00 },   // U+0025 (%)
	{ 0x1C, 0x36, 0x1C, 0x6E, 0x3B, 0x33, 0x6E, 0x00 },   // U+0026 (&)
	{ 0x06, 0x06, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00 },   // U+0027 (')
	{ 0x18, 0x0C, 0x06, 0x06, 0x06, 0x0C, 0x18, 0x00 },   // U+0028 (()
	{ 0x06, 0x0C, 0x18, 0x18, 0x18, 0x0C, 0x06, 0x00 },   // U+0029 ())
	{ 0x00, 0x66, 0x3C, 0xFF, 0x3C, 0x66, 0x00, 0x00 },   // U+002A (*)
	{ 0x00, 0x0C, 0x0C, 0x3F, 0x0C, 0x0C, 0x00, 0x00 },   // U+002B (+)
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x0C, 0x06 },   // U+002C (,)
	{ 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00 },   // U+002D (-)
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x0C, 0x00 },   // U+002E (.)
	{ 0x60, 0x30, 0x18, 0x0C, 0x06, 0x03, 0x01, 0x00 },   // U+002F (/)
	{ 0x3E, 0x63, 0x73, 0x7B, 0x6F, 0x67, 0x3E, 0x00 },   // U+0030 (0)
	{ 0x0C, 0x0E, 0x0C, 0x0C, 0x0C, 0x0C, 0x3F, 0x00 },   // U+0031 (1)
	{ 0x1E, 0x33, 0x30, 0x1C, 0x06, 0x33, 0x3F, 0x00 },   // U+0032 (2)
	{ 0x1E, 0x33, 0x30, 0x1C, 0x30, 0x33, 0x1E, 0x00 },   // U+0033 (3)
	{ 0x38, 0x3C, 0x36, 0x33, 0x7F, 0x30, 0x78, 0x00 },   // U+0034 (4)
	{ 0x3F, 0x03, 0x1F, 0x30, 0x30, 0x33, 0x1E, 0x00 },   // U+0035 (5)
	{ 0x1C, 0x06, 0x03, 0x1F, 0x33, 0x33, 0x1E, 0x00 },   // U+0036 (6)
	{ 0x3F, 0x33, 0x30, 0x18, 0x0C, 0x0C, 0x0C, 0x00 },   // U+0037 (7)
	{ 0x1E, 0x33, 0x33, 0x1E, 0x33, 0x33, 0x1E, 0x00 },   // U+0038 (8)
	{ 0x1E, 0x33, 0x33, 0x3E, 0x30, 0x18, 0x0E, 0x00 },   // U+0039 (9)
	{ 0x00, 0x0C, 0x0C, 0x00, 0x00, 0x0C, 0x0C, 0x00 },   // U+003A (:)
	{ 0x00, 0x0C, 0x0C, 0x00, 0x00, 0x0C, 0x0C, 0x06 },   // U+003B (//)
	{ 0x18, 0x0C, 0x06, 0x03, 0x06, 0x0C, 0x18, 0x00 },   // U+003C (<)
	{ 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00 },   // U+003D (=)
	{ 0x06, 0x0C, 0x18, 0x30, 0x18, 0x0C, 0x06, 0x00 },   // U+003E (>)
	{ 0x1E, 0x33, 0x30, 0x18, 0x0C, 0x00, 0x0C, 0x00 },   // U+003F (?)
	{ 0x3E, 0x63, 0x7B, 0x7B, 0x7B, 0x03, 0x1E, 0x00 },   // U+0040 (@)
	{ 0x0C, 0x1E, 0x33, 0x33, 0x3F, 0x33, 0x33, 0x00 },   // U+0041 (A)
	{ 0x3F, 0x66, 0x66, 0x3E, 0x66, 0x66, 0x3F, 0x00 },   // U+0042 (B)
	{ 0x3C, 0x66, 0x03, 0x03, 0x03, 0x66, 0x3C, 0x00 },   // U+0043 (C)
	{ 0x1F, 0x36, 0x66, 0x66, 0x66, 0x36, 0x1F, 0x00 },   // U+0044 (D)
	{ 0x7F, 0x46, 0x16, 0x1E, 0x16, 0x46, 0x7F, 0x00 },   // U+0045 (E)
	{ 0x7F, 0x46, 0x16, 0x1E, 0x16, 0x06, 0x0F, 0x00 },   // U+0046 (F)
	{ 0x3C, 0x66, 0x03, 0x03, 0x73, 0x66, 0x7C, 0x00 },   // U+0047 (G)
	{ 0x33, 0x33, 0x33, 0x3F, 0x33, 0x33, 0x33, 0x00 },   // U+0048 (H)
	{ 0x1E, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x1E, 0x00 },   // U+0049 (I)
	{ 0x78, 0x30, 0x30, 0x30, 0x33, 0x33, 0x1E, 0x00 },   // U+004A (J)
	{ 0x67, 0x66, 0x36, 0x1E, 0x36, 0x66, 0x67, 0x00 },   // U+004B (K)
	{ 0x0F, 0x06, 0x06, 0x06, 0x46, 0x66, 0x7F, 0x00 },   // U+004C (L)
	{ 0x63, 0x77, 0x7F, 0x7F, 0x6B, 0x63, 0x63, 0x00 },   // U+004D (M)
	{ 0x63, 0x67, 0x6F, 0x7B, 0x73, 0x63, 0x63, 0x00 },   // U+004E (N)
	{ 0x1C, 0x36, 0x63, 0x63, 0x63, 0x36, 0x1C, 0x00 },   // U+004F (O)
	{ 0x3F, 0x66, 0x66, 0x3E, 0x06, 0x06, 0x0F, 0x00 },   // U+0050 (P)
	{ 0x1E, 0x33, 0x33, 0x33, 0x3B, 0x1E, 0x38, 0x00 },   // U+0051 (Q)
	{ 0x3F, 0x66, 0x66, 0x3E, 0x36, 0x66, 0x67, 0x00 },   // U+0052 (R)
	{ 0x1E, 0x33, 0x07, 0x0E, 0x38, 0x33, 0x1E, 0x00 },   // U+0053 (S)
	{ 0x3F, 0x2D, 0x0C, 0x0C, 0x0C, 0x0C, 0x1E, 0x00 },   // U+0054 (T)
	{ 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x3F, 0x00 },   // U+0055 (U)
	{ 0x33, 0x33, 0x33, 0x33, 0x33, 0x1E, 0x0C, 0x00 },   // U+0056 (V)
	{ 0x63, 0x63, 0x63, 0x6B, 0x7F, 0x77, 0x63, 0x00 },   // U+0057 (W)
	{ 0x63, 0x63, 0x36, 0x1C, 0x1C, 0x36, 0x63, 0x00 },   // U+0058 (X)
	{ 0x33, 0x33, 0x33, 0x1E, 0x0C, 0x0C, 0x1E, 0x00 },   // U+0059 (Y)
	{ 0x7F, 0x63, 0x31, 0x18, 0x4C, 0x66, 0x7F, 0x00 },   // U+005A (Z)
	{ 0x1E, 0x06, 0x06, 0x06, 0x06, 0x06, 0x1E, 0x00 },   // U+005B ([)
	{ 0x03, 0x06, 0x0C, 0x18, 0x30, 0x60, 0x40, 0x00 },   // U+005C (\)
	{ 0x1E, 0x18, 0x18, 0x18, 0x18, 0x18, 0x1E, 0x00 },   // U+005D (])
	{ 0x08, 0x1C, 0x36, 0x63, 0x00, 0x00, 0x00, 0x00 },   // U+005E (^)
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF },   // U+005F (_)
	{ 0x0C, 0x0C, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00 },   // U+0060 (`)
	{ 0x00, 0x00, 0x1E, 0x30, 0x3E, 0x33, 0x6E, 0x00 },   // U+0061 (a)
	{ 0x07, 0x06, 0x06, 0x3E, 0x66, 0x66, 0x3B, 0x00 },   // U+0062 (b)
	{ 0x00, 0x00, 0x1E, 0x33, 0x03, 0x33, 0x1E, 0x00 },   // U+0063 (c)
	{ 0x38, 0x30, 0x30, 0x3e, 0x33, 0x33, 0x6E, 0x00 },   // U+0064 (d)
	{ 0x00, 0x00, 0x1E, 0x33, 0x3f, 0x03, 0x1E, 0x00 },   // U+0065 (e)
	{ 0x1C, 0x36, 0x06, 0x0f, 0x06, 0x06, 0x0F, 0x00 },   // U+0066 (f)
	{ 0x00, 0x00, 0x6E, 0x33, 0x33, 0x3E, 0x30, 0x1F },   // U+0067 (g)
	{ 0x07, 0x06, 0x36, 0x6E, 0x66, 0x66, 0x67, 0x00 },   // U+0068 (h)
	{ 0x0C, 0x00, 0x0E, 0x0C, 0x0C, 0x0C, 0x1E, 0x00 },   // U+0069 (i)
	{ 0x30, 0x00, 0x30, 0x30, 0x30, 0x33, 0x33, 0x1E },   // U+006A (j)
	{ 0x07, 0x06, 0x66, 0x36, 0x1E, 0x36, 0x67, 0x00 },   // U+006B (k)
	{ 0x0E, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x1E, 0x00 },   // U+006C (l)
	{ 0x00, 0x00, 0x33, 0x7F, 0x7F, 0x6B, 0x63, 0x00 },   // U+006D (m)
	{ 0x00, 0x00, 0x1F, 0x33, 0x33, 0x33, 0x33, 0x00 },   // U+006E (n)
	{ 0x00, 0x00, 0x1E, 0x33, 0x33, 0x33, 0x1E, 0x00 },   // U+006F (o)
	{ 0x00, 0x00, 0x3B, 0x66, 0x66, 0x3E, 0x06, 0x0F },   // U+0070 (p)
	{ 0x00, 0x00, 0x6E, 0x33, 0x33, 0x3E, 0x30, 0x78 },   // U+0071 (q)
	{ 0x00, 0x00, 0x3B, 0x6E, 0x66, 0x06, 0x0F, 0x00 },   // U+0072 (r)
	{ 0x00, 0x00, 0x3E, 0x03, 0x1E, 0x30, 0x1F, 0x00 },   // U+0073 (s)
	{ 0x08, 0x0C, 0x3E, 0x0C, 0x0C, 0x2C, 0x18, 0x00 },   // U+0074 (t)
	{ 0x00, 0x00, 0x33, 0x33, 0x33, 0x33, 0x6E, 0x00 },   // U+0075 (u)
	{ 0x00, 0x00, 0x33, 0x33, 0x33, 0x1E, 0x0C, 0x00 },   // U+0076 (v)
	{ 0x00, 0x00, 0x63, 0x6B, 0x7F, 0x7F, 0x36, 0x00 },   // U+0077 (w)
	{ 0x00, 0x00, 0x63, 0x36, 0x1C, 0x36, 0x63, 0x00 },   // U+0078 (x)
	{ 0x00, 0x00, 0x33, 0x33, 0x33, 0x3E, 0x30, 0x1F },   // U+0079 (y)
	{ 0x00, 0x00, 0x3F, 0x19, 0x0C, 0x26, 0x3F, 0x00 },   // U+007A (z)
	{ 0x38, 0x0C, 0x0C, 0x07, 0x0C, 0x0C, 0x38, 0x00 },   // U+007B ({)
	{ 0x18, 0x18, 0x18, 0x00, 0x18, 0x18, 0x18, 0x00 },   // U+007C (|)
	{ 0x07, 0x0C, 0x0C, 0x38, 0x0C, 0x0C, 0x07, 0x00 },   // U+007D (})
	{ 0x6E, 0x3B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },   // U+007E (~)
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }    // U+007F
};