//
//  Style.cpp
//  The Powder Toy
//
//  Created by Simon Robertshaw on 14/05/2012.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "Style.h"

namespace style {
	ui::Colour Colour::InformationTitle = ui::Colour(140, 140, 255);
	ui::Colour Colour::WarningTitle = ui::Colour(255, 255, 50);
	ui::Colour Colour::ErrorTitle = ui::Colour(255, 20, 20);
	
	ui::Colour Colour::ActiveBorder = ui::Colour(255, 255, 255);
	ui::Colour Colour::InactiveBorder = ui::Colour(180, 180, 180);
	
	ui::Colour Colour::ActiveBackground = ui::Colour(50, 50, 50);
	ui::Colour Colour::InactiveBackground = ui::Colour(0, 0, 0);
}