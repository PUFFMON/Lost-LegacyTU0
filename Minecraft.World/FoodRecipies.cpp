#include "stdafx.h"
#include "net.minecraft.world.item.h"
#include "DyePowderItem.h"
#include "Tile.h"
#include "Recipy.h"
#include "Recipes.h"
#include "FoodRecipies.h"

void FoodRecipies::addRecipes(Recipes *r) 
{
	// 4J-JEV: Bumped up in the list to avoid a colision with the title.
	r->addShapedRecipy(new ItemInstance(Item::apple_gold, 1, 0), //
		L"ssscicig",
		L"###", //
		L"#X#", //
		L"###", //
		L'#', Item::goldIngot, L'X', Item::apple,
		L'F');

	r->addShapedRecipy(new ItemInstance(Item::apple_gold, 1, 1), //
		L"sssctcig",
		L"###", //
		L"#X#", //
		L"###", //
		L'#', Tile::goldBlock, L'X', Item::apple,
		L'F');

	r->addShapelessRecipy(new ItemInstance(Item::mushroomStew), 
		L"ttig", 
		Tile::mushroom_brown, Tile::mushroom_red, Item::bowl,
		L'F');
      
	r->addShapedRecipy(new ItemInstance(Item::cookie, 8), //
				L"sczcig",
                L"#X#", //

                L'X', new ItemInstance(Item::dye_powder, 1, DyePowderItem::BROWN),
				L'#', Item::wheat,
				L'F');
}

