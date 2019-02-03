#include <unique_armour.h>
#include <daemons.h>

int authentic = 0;

#include "armour_set.h"

void create_armour() {
    if (set_unique(object_name(this_object()), UNIQUENESS_FULL, 1, 0)) {
	set_name("windweaver boots");
	set_short("The Windweaver Boots");
	set_type("boots");
	set_id(({ "boots", "windweaver boots", "#windweaver boots#" }));
	set_long("The Windweaver Boots are made of enchanted silver.");
	set_ac(1);
	set_weight(1);
	set_value(1000);

	authentic = 1;
	ARMOUR_SET_D->add_armour("windweaver", this_object());
    } else destruct(this_object());
}
