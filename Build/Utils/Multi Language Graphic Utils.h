#ifndef __MULTI_LANGUAGE_GRAPHIC_UTILS_H
#define __MULTI_LANGUAGE_GRAPHIC_UTILS_H

enum
{
	MLG_AIMSYMBOL,
	MLG_AIMSYMBOL_SMALL,
	MLG_BOBBYNAME,
	MLG_BOBBYRAYAD21,
	MLG_BOBBYRAYLINK,
	MLG_CLOSED,
	MLG_CONFIRMORDER,
	MLG_DESKTOP,
	MLG_FUNERALAD9,
	MLG_GOLDPIECEBUTTONS,
	MLG_HISTORY,
	MLG_IMPSYMBOL,
	MLG_INSURANCEAD10,
	MLG_INSURANCELINK,
	MLG_INSURANCETITLE, //LargeTitle
	MLG_LARGEFLORISTSYMBOL, //LargeSymbol
	MLG_LOADSAVEHEADER, //LoadScreenAddOns
	MLG_MCGILLICUTTYS,
	MLG_MORTUARY,
	MLG_MORTUARYLINK,
	MLG_OPTIONHEADER, //OptionScreenAddOns
	MLG_ORDERGRID,
	MLG_PREBATTLEPANEL,
	MLG_SECTORINVENTORY,
	MLG_SMALLFLORISTSYMBOL, //SmallSymbol
	MLG_SMALLTITLE,
	MLG_SPLASH,
	MLG_STATSBOX,
	MLG_STOREPLAQUE,
	MLG_TITLETEXT,
	MLG_TOALUMNI,
	MLG_TOMUGSHOTS,
	MLG_TOSTATS,
	MLG_WARNING,
	MLG_YOURAD13,
	MLG_TITLETEXT_MP,	// WANNE: Additional multiplayer text
	MLG_BOBBYRAYTITLE,	//inshy: translation needed for russian version
	MLG_BR,
	MLG_MP_GOLDPIECEBUTTONS,
	MLG_ITEMINFOADVANCEDICONS,	// WANNE: Language specific Icons
};

BOOLEAN GetMLGFilename( SGPFILENAME filename, UINT16 usMLGGraphicID );

#endif