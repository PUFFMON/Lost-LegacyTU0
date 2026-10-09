#include "stdafx.h"
#include "net.minecraft.world.item.h"
#include "net.minecraft.world.level.tile.h"
#include "Recipy.h"
#include "Recipes.h"
#include "StructureRecipies.h"

void StructureRecipies::addRecipes(Recipes *r) 
{
	r->addShapedRecipy(new ItemInstance(Tile::sandStone), //
		L"ssctg",
		L"##", //
		L"##", //

		L'#', Tile::sand,
		L'S');

	// 4J Stu - Changed the order, as the blocks that go with sandstone cause a 3-icon scroll
	// that touches the text "Structures" in the title in 720 fullscreen.
	r->addShapedRecipy(new ItemInstance(Tile::workBench), //
		L"ssctg",
		L"##", //
		L"##", //

		L'#', Tile::wood,
		L'S');
	
	r->addShapedRecipy(new ItemInstance(Tile::furnace), //
		L"sssctg",
		L"###", //
		L"# #", //
		L"###", //

		L'#', Tile::cobblestone,
		L'S');

	r->addShapedRecipy(new ItemInstance(static_cast<Tile *>(Tile::chest)), //
		L"sssctg",
		L"###", //
		L"# #", //
		L"###", //

		L'#', Tile::wood,
		L'S');

	// 4J Stu - Move this into "Recipes" to change the order things are displayed on the crafting menu
	//r->addShapedRecipy(new ItemInstance(Tile::ironFence, 16), //
	//	L"sscig",
	//	L"###", //
	//	L"###", //

	//	L'#', Item::ironIngot,
	//	L'S');

for (int i = 0; i < 16; i++)
{

}
	r->addShapedRecipy(new ItemInstance(Tile::redstoneLight, 1), //
		L"ssscictg",
		L" R ", //
		L"RGR", //
		L" R ", //
		L'R', Item::redStone, 'G', Tile::glowstone,
		L'M');
}