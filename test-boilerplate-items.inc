// built-in include guard removal
// just in case the user has a local dependency with the same file name
#if defined _inc_test_boilerplate_items
	#undef _inc_test_boilerplate_items
#endif
// custom include-guard to ensure we don't duplicate
#if defined _test_boilerplate_item_included
	#endinput
#endif
#define _test_boilerplate_item_included


#include <a_samp>
#include <logger>
#include <test-boilerplate>
#include <item>
#include <YSI\y_hooks>


new stock
	ItemType:item_Medkit,
	ItemType:item_Sign,
	ItemType:item_Screwdriver,
	ItemType:item_MobilePhone,
	ItemType:item_Bottle,
	ItemType:item_Backpack,
	ItemType:item_Bucket,
	ItemType:item_GasMask,
	ItemType:item_Bandage,
	ItemType:item_Wrench,
	ItemType:item_Crowbar,
	ItemType:item_Hammer,
	ItemType:item_Shield,
	ItemType:item_HelmArmy;

hook OnScriptInit() {
	item_Medkit			= DefineItemType("Medkit",				"Medkit",			11736,	1,	0.0, 0.0, 0.0,			0.004,	0.197999, 0.038000, 0.021000,  79.700012, 0.000000, 90.899978, .maxhitpoints = 1);
	item_Sign			= DefineItemType("Sign",				"Sign",				19471,	6,	0.0, 0.0, 270.0,		0.0,	.longpickup = true, .maxhitpoints = 6);
	item_Screwdriver	= DefineItemType("Screwdriver",			"Screwdriver",		18644,	1,	90.0, 0.0, 0.0,			0.0,	0.099341, 0.021018, 0.009145, 193.644195, 0.000000, 0.000000, .maxhitpoints = 1);
	item_MobilePhone	= DefineItemType("Mobile Phone",		"MobilePhone",		18865,	1,	0.0, 0.0, 0.0,			0.0,	0.103904, -0.003697, -0.015173, 94.655189, 184.031860, 0.000000, .maxhitpoints = 1);
	item_Bottle			= DefineItemType("Bottle",				"Bottle",			1543,	1,	0.0, 0.0, 0.0,			0.0,	0.060376, 0.032063, -0.204802, 0.000000, 0.000000, 0.000000, .maxhitpoints = 1);
	item_Backpack		= DefineItemType("Backpack",			"Backpack",			3026,	4,	270.0, 0.0, 90.0,		0.0,	0.470918, 0.150153, 0.055384, 181.319580, 7.513789, 163.436065, .longpickup = true, .maxhitpoints = 4);
	item_Bucket			= DefineItemType("Bucket",				"Bucket",			19468,	2,	0.0, 0.0, 0.0,			0.0,	0.293691, -0.074108, 0.020810, 148.961685, 280.067260, 151.782791, .maxhitpoints = 2);
	item_GasMask		= DefineItemType("Gas Mask",			"GasMask",			19472,	1,	180.0, 0.0, 0.0,		0.0,	0.062216, 0.055396, 0.001138, 90.000000, 0.000000, 180.000000, .maxhitpoints = 1);
	item_Bandage		= DefineItemType("Dirty Bandage",		"Bandage",			11747,	2,	90.0, 0.0, 0.0,			0.0,	0.076999, 0.059000, 0.000000,  2.799999, -5.600000, 0.000000, .maxhitpoints = 2);
	item_Wrench			= DefineItemType("Wrench",				"Wrench",			18633,	2,	0.0, 90.0, 0.0,			0.0,	0.084695, -0.009181, 0.152275, 98.865089, 270.085449, 0.000000, .maxhitpoints = 2);
	item_Crowbar		= DefineItemType("Crowbar",				"Crowbar",			18634,	2,	0.0, 90.0, 0.0,			0.0,	0.066177, 0.011153, 0.038410, 97.289527, 270.962554, 1.114514, .maxhitpoints = 2);
	item_Hammer			= DefineItemType("Hammer",				"Hammer",			18635,	2,	270.0, 0.0, 0.0,		0.01,	0.000000, -0.008230, 0.000000, 6.428617, 0.000000, 0.000000, .maxhitpoints = 2);
	item_Shield			= DefineItemType("Shield",				"Shield",			18637,	8,	0.0, 0.0, 0.0,			0.0,	-0.262389, 0.016478, -0.151046, 103.597534, 6.474381, 38.321765, .maxhitpoints = 8);
	item_HelmArmy		= DefineItemType("Army Helmet",			"HelmArmy",			19106,	2,	345.0, 270.0, 0.0,		0.045,	0.184999, -0.007999, 0.046999, 94.199989, 22.700027, 4.799994, .maxhitpoints = 2);

	CreateItem(item_Medkit, 302.0, 1800.0, 16.8);
	CreateItem(item_Sign, 302.0, 1801.0, 16.8);
	CreateItem(item_Screwdriver, 302.0, 1802.0, 16.8);
	CreateItem(item_MobilePhone, 302.0, 1803.0, 16.8);
	CreateItem(item_Bottle, 302.0, 1804.0, 16.8);
	CreateItem(item_Backpack, 302.0, 1805.0, 16.8);
	CreateItem(item_Bucket, 302.0, 1806.0, 16.8);
	CreateItem(item_GasMask, 302.0, 1807.0, 16.8);
	CreateItem(item_Bandage, 302.0, 1808.0, 16.8);
	CreateItem(item_Wrench, 302.0, 1809.0, 16.8);
	CreateItem(item_Crowbar, 302.0, 1810.0, 16.8);
	CreateItem(item_Hammer, 302.0, 1811.0, 16.8);
	CreateItem(item_Shield, 302.0, 1812.0, 16.8);
	CreateItem(item_HelmArmy, 302.0, 1813.0, 16.8);

	return 1;
}